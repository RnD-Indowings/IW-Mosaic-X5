// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/AttCovEuler.idl
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
#include "septentrio_gnss_driver/msg/detail/att_cov_euler__struct.h"
#include "septentrio_gnss_driver/msg/detail/att_cov_euler__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__att_cov_euler__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("septentrio_gnss_driver.msg._att_cov_euler.AttCovEuler", full_classname_dest, 53) == 0);
  }
  septentrio_gnss_driver__msg__AttCovEuler * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // block_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "block_header");
    if (!field) {
      return false;
    }
    if (!septentrio_gnss_driver__msg__block_header__convert_from_py(field, &ros_message->block_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cov_headhead
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_headhead");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_headhead = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_pitchpitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_pitchpitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_pitchpitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_rollroll
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_rollroll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_rollroll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_headpitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_headpitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_headpitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_headroll
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_headroll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_headroll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_pitchroll
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_pitchroll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_pitchroll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__att_cov_euler__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AttCovEuler */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._att_cov_euler");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AttCovEuler");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__AttCovEuler * ros_message = (septentrio_gnss_driver__msg__AttCovEuler *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block_header
    PyObject * field = NULL;
    field = septentrio_gnss_driver__msg__block_header__convert_to_py(&ros_message->block_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "block_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_headhead
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_headhead);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_headhead", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_pitchpitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_pitchpitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_pitchpitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_rollroll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_rollroll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_rollroll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_headpitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_headpitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_headpitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_headroll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_headroll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_headroll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_pitchroll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_pitchroll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_pitchroll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
