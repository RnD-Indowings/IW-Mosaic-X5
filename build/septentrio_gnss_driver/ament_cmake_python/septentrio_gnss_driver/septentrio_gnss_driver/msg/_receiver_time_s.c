// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/ReceiverTime.idl
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
#include "septentrio_gnss_driver/msg/detail/receiver_time__struct.h"
#include "septentrio_gnss_driver/msg/detail/receiver_time__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__receiver_time__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("septentrio_gnss_driver.msg._receiver_time.ReceiverTime", full_classname_dest, 54) == 0);
  }
  septentrio_gnss_driver__msg__ReceiverTime * ros_message = _ros_message;
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
  {  // utc_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_year = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // utc_month
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_month");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_month = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // utc_day
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_day");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_day = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // utc_hour
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_hour");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_hour = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // utc_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_min = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // utc_second
    PyObject * field = PyObject_GetAttrString(_pymsg, "utc_second");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->utc_second = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // delta_ls
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_ls");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->delta_ls = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sync_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "sync_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sync_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__receiver_time__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReceiverTime */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._receiver_time");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReceiverTime");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__ReceiverTime * ros_message = (septentrio_gnss_driver__msg__ReceiverTime *)raw_ros_message;
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
  {  // utc_year
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utc_year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_month
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utc_month);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_month", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_day
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utc_day);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_day", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_hour
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utc_hour);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_hour", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_min
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utc_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utc_second
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->utc_second);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utc_second", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_ls
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->delta_ls);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_ls", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sync_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sync_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sync_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
