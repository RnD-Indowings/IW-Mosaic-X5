// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/PosCovGeodetic.idl
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
#include "septentrio_gnss_driver/msg/detail/pos_cov_geodetic__struct.h"
#include "septentrio_gnss_driver/msg/detail/pos_cov_geodetic__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__pos_cov_geodetic__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("septentrio_gnss_driver.msg._pos_cov_geodetic.PosCovGeodetic", full_classname_dest, 59) == 0);
  }
  septentrio_gnss_driver__msg__PosCovGeodetic * ros_message = _ros_message;
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
  {  // cov_latlat
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_latlat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_latlat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_lonlon
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_lonlon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_lonlon = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_hgthgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_hgthgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_hgthgt = (float)PyFloat_AS_DOUBLE(field);
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
  {  // cov_latlon
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_latlon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_latlon = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_lathgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_lathgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_lathgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_latb
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_latb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_latb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_lonhgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_lonhgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_lonhgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_lonb
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_lonb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_lonb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_hb
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_hb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_hb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__pos_cov_geodetic__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PosCovGeodetic */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._pos_cov_geodetic");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PosCovGeodetic");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__PosCovGeodetic * ros_message = (septentrio_gnss_driver__msg__PosCovGeodetic *)raw_ros_message;
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
  {  // cov_latlat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_latlat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_latlat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_lonlon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_lonlon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_lonlon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_hgthgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_hgthgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_hgthgt", field);
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
  {  // cov_latlon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_latlon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_latlon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_lathgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_lathgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_lathgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_latb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_latb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_latb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_lonhgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_lonhgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_lonhgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_lonb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_lonb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_lonb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_hb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_hb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_hb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
