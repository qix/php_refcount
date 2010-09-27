#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_refcount.h"

static function_entry refcount_functions[] = {
    PHP_FE(refcount, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry refcount_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_REFCOUNT_EXTNAME,
    refcount_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    PHP_REFCOUNT_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_REFCOUNT
ZEND_GET_MODULE(refcount)
#endif

PHP_FUNCTION(refcount)
{
	zval *uservar;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &uservar) == FAILURE) {
			RETURN_NULL();
	}
	long x = Z_REFCOUNT_P(uservar);
	RETURN_LONG(x);
}
