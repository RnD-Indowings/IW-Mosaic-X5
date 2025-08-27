// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/AIMPlusStatus.idl
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
#include "septentrio_gnss_driver/msg/detail/aim_plus_status__struct.h"
#include "septentrio_gnss_driver/msg/detail/aim_plus_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__aim_plus_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("septentrio_gnss_driver.msg._aim_plus_status.AIMPlusStatus", full_classname_dest, 57) == 0);
  }
  septentrio_gnss_driver__msg__AIMPlusStatus * ros_message = _ros_message;
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
  {  // tow
    PyObject * field = PyObject_GetAttrString(_pymsg, "tow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tow = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wnc
    PyObject * field = PyObject_GetAttrString(_pymsg, "wnc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wnc = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // interference
    PyObject * field = PyObject_GetAttrString(_pymsg, "interference");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->interference = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spoofing
    PyObject * field = PyObject_GetAttrString(_pymsg, "spoofing");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spoofing = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // osnma_authenticating
    PyObject * field = PyObject_GetAttrString(_pymsg, "osnma_authenticating");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->osnma_authenticating = (Py_True == field);
    Py_DECREF(field);
  }
  {  // galileo_authentic
    PyObject * field = PyObject_GetAttrString(_pymsg, "galileo_authentic");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->galileo_authentic = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // galileo_spoofed
    PyObject * field = PyObject_GetAttrString(_pymsg, "galileo_spoofed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->galileo_spoofed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_authentic
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_authentic");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_authentic = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_spoofed
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_spoofed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_spoofed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__aim_plus_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AIMPlusStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._aim_plus_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AIMPlusStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__AIMPlusStatus * ros_message = (septentrio_gnss_driver__msg__AIMPlusStatus *)raw_ros_message;
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
  {  // tow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wnc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wnc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wnc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interference
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->interference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "interference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spoofing
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spoofing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spoofing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // osnma_authenticating
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->osnma_authenticating ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "osnma_authenticating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // galileo_authentic
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->galileo_authentic);
    {
      int rc = PyObject_SetAttrString(_pymessage, "galileo_authentic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // galileo_spoofed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->galileo_spoofed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "galileo_spoofed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_authentic
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_authentic);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_authentic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_spoofed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_spoofed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_spoofed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
