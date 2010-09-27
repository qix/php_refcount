PHP_ARG_ENABLE(refcount, whether to enable refcount support,
[ --enable-refcount   Enable refcount support])

if test "$PHP_REFCOUNT" = "yes"; then
  AC_DEFINE(HAVE_REFCOUNT, 1, [Whether you have refcount])
  PHP_NEW_EXTENSION(refcount, refcount.c, $ext_shared)
fi
