// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rc_pwm_pkg:msg/PubPwm.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rc_pwm_pkg/msg/detail/pub_pwm__struct.h"
#include "rc_pwm_pkg/msg/detail/pub_pwm__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rc_pwm_pkg__msg__pub_pwm__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rc_pwm_pkg.msg._pub_pwm.PubPwm", full_classname_dest, 30) == 0);
  }
  rc_pwm_pkg__msg__PubPwm * ros_message = _ros_message;
  {  // left_pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_pwm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_pwm = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // right_pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_pwm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_pwm = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rc_pwm_pkg__msg__pub_pwm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PubPwm */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rc_pwm_pkg.msg._pub_pwm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PubPwm");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rc_pwm_pkg__msg__PubPwm * ros_message = (rc_pwm_pkg__msg__PubPwm *)raw_ros_message;
  {  // left_pwm
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->left_pwm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_pwm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_pwm
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->right_pwm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_pwm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
