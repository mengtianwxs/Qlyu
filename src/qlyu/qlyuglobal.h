
#ifndef QLYUGLOBAL_H
#define QLYUGLOBAL_H
#include <QtGlobal>

#define QT_BEGIN_NAMESPACE_QLYU namespace QQLYU {
#define QT_END_NAMESPACE_QLYU }
#define QTQLYU_USE_NAMESPACE using namespace QQLYU;

#if !defined(QT_STATIC) && !defined(QLYU_NO_LIB)
#  if defined(QT_BUILD_QLYU_LIB)
#    define Q_QLYU_EXPORT Q_DECL_EXPORT
#  else
#    define Q_QLYU_EXPORT Q_DECL_IMPORT
#  endif
#else
#  define Q_QLYU_EXPORT
#endif

#ifdef QLYU_TEST
#  define QLYU_AUTOTEST_EXPORT Q_QLYU_EXPORT
#else
#  define QLYU_AUTOTEST_EXPORT
#endif

#endif // QLYUGLOBAL_H
