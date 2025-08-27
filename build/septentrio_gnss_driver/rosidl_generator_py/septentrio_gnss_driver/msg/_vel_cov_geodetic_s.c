// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/VelCovGeodetic.idl
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
#include "septentrio_gnss_driver/msg/detail/vel_cov_geodetic__struct.h"
#include "septentrio_gnss_driver/msg/detail/vel_cov_geodetic__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__vel_cov_geodetic__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("septentrio_gnss_driver.msg._vel_cov_geodetic.VelCovGeodetic", full_classname_dest, 59) == 0);
  }
  septentrio_gnss_driver__msg__VelCovGeodetic * ros_message = _ros_message;
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
  {  // cov_vnvn
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vnvn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vnvn = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_veve
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_veve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_veve = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vuvu
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vuvu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vuvu = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_dtdt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_dtdt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_dtdt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vnve
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vnve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vnve = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vnvu
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vnvu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vnvu = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vndt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vndt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vndt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vevu
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vevu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vevu = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vedt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vedt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vedt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vudt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vudt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vudt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__vel_cov_geodetic__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VelCovGeodetic */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._vel_cov_geodetic");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VelCovGeodetic");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__VelCovGeodetic * ros_message = (septentrio_gnss_driver__msg__VelCovGeodetic *)raw_ros_message;
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
  {  // cov_vnvn
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vnvn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vnvn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_veve
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_veve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_veve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vuvu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vuvu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vuvu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_dtdt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_dtdt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_dtdt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vnve
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vnve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vnve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vnvu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vnvu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vnvu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vndt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vndt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vndt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vevu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vevu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vevu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vedt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vedt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vedt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vudt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vudt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vudt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
