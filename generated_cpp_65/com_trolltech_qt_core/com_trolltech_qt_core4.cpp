#include "com_trolltech_qt_core4.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qcborcommon.h>
#include <qlogging.h>
#include <qreadwritelock.h>

QWriteLocker* PythonQtWrapper_QWriteLocker::new_QWriteLocker(QReadWriteLock*  readWriteLock)
{ 
return new QWriteLocker(readWriteLock); }

QReadWriteLock*  PythonQtWrapper_QWriteLocker::readWriteLock(QWriteLocker* theWrappedObject) const
{
  return ( theWrappedObject->readWriteLock());
}

void PythonQtWrapper_QWriteLocker::relock(QWriteLocker* theWrappedObject)
{
  ( theWrappedObject->relock());
}

void PythonQtWrapper_QWriteLocker::unlock(QWriteLocker* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QXmlStreamEntityResolver::~PythonQtShell_QXmlStreamEntityResolver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveEntity(const QString&  publicId0, const QString&  systemId1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resolveEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue{};
      void* args[3] = {nullptr, (void*)&publicId0, (void*)&systemId1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlStreamEntityResolver::resolveEntity(publicId0, systemId1);
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyUnicode_FromString("resolveUndeclaredEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue{};
      void* args[2] = {nullptr, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveUndeclaredEntity", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlStreamEntityResolver::resolveUndeclaredEntity(name0);
}
QXmlStreamEntityResolver* PythonQtWrapper_QXmlStreamEntityResolver::new_QXmlStreamEntityResolver()
{ 
return new PythonQtShell_QXmlStreamEntityResolver(); }

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->resolveEntity(publicId, systemId));
}

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->resolveUndeclaredEntity(name));
}




