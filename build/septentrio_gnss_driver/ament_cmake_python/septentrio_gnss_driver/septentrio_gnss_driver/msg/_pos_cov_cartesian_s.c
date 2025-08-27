// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/PosCovCartesian.idl
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
#include "septentrio_gnss_driver/msg/detail/pos_cov_cartesian__struct.h"
#include "septentrio_gnss_driver/msg/detail/pos_cov_cartesian__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__pos_cov_cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("septentrio_gnss_driver.msg._pos_cov_cartesian.PosCovCartesian", full_classname_dest, 61) == 0);
  }
  septentrio_gnss_driver__msg__PosCovCartesian * ros_message = _ros_message;
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
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // cov_xx
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_xx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_xx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_yy
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_yy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_yy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_zz
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_zz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_zz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_bb
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_bb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_bb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_xy
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_xy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_xy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_xz
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_xz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_xz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_xb
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_xb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_xb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_yz
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_yz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_yz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_yb
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_yb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_yb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_zb
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_zb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_zb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__pos_cov_cartesian__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PosCovCartesian */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._pos_cov_cartesian");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PosCovCartesian");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__PosCovCartesian * ros_message = (septentrio_gnss_driver__msg__PosCovCartesian *)raw_ros_message;
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
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
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
  {  // cov_xx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_xx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_xx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_yy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_yy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_yy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_zz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_zz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_zz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_bb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_bb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_bb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_xy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_xy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_xy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_xz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_xz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_xz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_xb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_xb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_xb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_yz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_yz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_yz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_yb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_yb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_yb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_zb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_zb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_zb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
