#ifndef PHP_REFCOUNT_H
#define PHP_REFCOUNT_H 1

#define PHP_REFCOUNT_VERSION "1.0"
#define PHP_REFCOUNT_EXTNAME "refcount"

PHP_FUNCTION(refcount);

extern zend_module_entry refcount_module_entry;
#define phpext_refcount_ptr &refcount_module_entry

#endif
