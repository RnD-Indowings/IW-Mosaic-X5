// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
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
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__struct.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__meas_epoch_channel_type2__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("septentrio_gnss_driver.msg._meas_epoch_channel_type2.MeasEpochChannelType2", full_classname_dest, 74) == 0);
  }
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lock_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "lock_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lock_time = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cn0
    PyObject * field = PyObject_GetAttrString(_pymsg, "cn0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cn0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // offsets_msb
    PyObject * field = PyObject_GetAttrString(_pymsg, "offsets_msb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->offsets_msb = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // carrier_msb
    PyObject * field = PyObject_GetAttrString(_pymsg, "carrier_msb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->carrier_msb = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // obs_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "obs_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obs_info = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // code_offset_lsb
    PyObject * field = PyObject_GetAttrString(_pymsg, "code_offset_lsb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->code_offset_lsb = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // carrier_lsb
    PyObject * field = PyObject_GetAttrString(_pymsg, "carrier_lsb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->carrier_lsb = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // doppler_offset_lsb
    PyObject * field = PyObject_GetAttrString(_pymsg, "doppler_offset_lsb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->doppler_offset_lsb = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__meas_epoch_channel_type2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MeasEpochChannelType2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._meas_epoch_channel_type2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MeasEpochChannelType2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * ros_message = (septentrio_gnss_driver__msg__MeasEpochChannelType2 *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lock_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lock_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lock_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cn0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cn0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cn0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offsets_msb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->offsets_msb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offsets_msb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carrier_msb
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->carrier_msb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carrier_msb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obs_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obs_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obs_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // code_offset_lsb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->code_offset_lsb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "code_offset_lsb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carrier_lsb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->carrier_lsb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carrier_lsb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // doppler_offset_lsb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->doppler_offset_lsb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "doppler_offset_lsb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
