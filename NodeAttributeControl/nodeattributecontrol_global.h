#ifndef NODEATTRIBUTECONTROL_GLOBAL_H
#define NODEATTRIBUTECONTROL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(NODEATTRIBUTECONTROL_LIBRARY)
#  define NODEATTRIBUTECONTROLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define NODEATTRIBUTECONTROLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // NODEATTRIBUTECONTROL_GLOBAL_H
