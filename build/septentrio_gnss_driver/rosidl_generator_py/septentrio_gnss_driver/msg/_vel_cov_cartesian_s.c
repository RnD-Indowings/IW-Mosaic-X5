// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
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
#include "septentrio_gnss_driver/msg/detail/vel_cov_cartesian__struct.h"
#include "septentrio_gnss_driver/msg/detail/vel_cov_cartesian__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__vel_cov_cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("septentrio_gnss_driver.msg._vel_cov_cartesian.VelCovCartesian", full_classname_dest, 61) == 0);
  }
  septentrio_gnss_driver__msg__VelCovCartesian * ros_message = _ros_message;
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
  {  // cov_vxvx
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vxvx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vxvx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vyvy
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vyvy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vyvy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vzvz
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vzvz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vzvz = (float)PyFloat_AS_DOUBLE(field);
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
  {  // cov_vxvy
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vxvy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vxvy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vxvz
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vxvz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vxvz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vxdt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vxdt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vxdt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vyvz
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vyvz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vyvz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vydt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vydt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vydt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vzdt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vzdt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vzdt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__vel_cov_cartesian__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VelCovCartesian */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._vel_cov_cartesian");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VelCovCartesian");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__VelCovCartesian * ros_message = (septentrio_gnss_driver__msg__VelCovCartesian *)raw_ros_message;
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
  {  // cov_vxvx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vxvx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vxvx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vyvy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vyvy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vyvy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vzvz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vzvz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vzvz", field);
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
  {  // cov_vxvy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vxvy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vxvy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vxvz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vxvz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vxvz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vxdt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vxdt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vxdt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vyvz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vyvz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vyvz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vydt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vydt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vydt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vzdt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vzdt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vzdt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
