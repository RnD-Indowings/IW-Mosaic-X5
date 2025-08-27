// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/MeasEpoch.idl
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
#include "septentrio_gnss_driver/msg/detail/meas_epoch__struct.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__meas_epoch_channel_type1__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__meas_epoch_channel_type1__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__meas_epoch__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("septentrio_gnss_driver.msg._meas_epoch.MeasEpoch", full_classname_dest, 48) == 0);
  }
  septentrio_gnss_driver__msg__MeasEpoch * ros_message = _ros_message;
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
  {  // n
    PyObject * field = PyObject_GetAttrString(_pymsg, "n");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sb1_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "sb1_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sb1_length = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sb2_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "sb2_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sb2_length = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // common_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "common_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->common_flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cum_clk_jumps
    PyObject * field = PyObject_GetAttrString(_pymsg, "cum_clk_jumps");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cum_clk_jumps = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // type1
    PyObject * field = PyObject_GetAttrString(_pymsg, "type1");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'type1'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__init(&(ros_message->type1), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    septentrio_gnss_driver__msg__MeasEpochChannelType1 * dest = ros_message->type1.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!septentrio_gnss_driver__msg__meas_epoch_channel_type1__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__meas_epoch__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MeasEpoch */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._meas_epoch");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MeasEpoch");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__MeasEpoch * ros_message = (septentrio_gnss_driver__msg__MeasEpoch *)raw_ros_message;
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
  {  // n
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sb1_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sb1_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sb1_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sb2_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sb2_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sb2_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // common_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->common_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "common_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cum_clk_jumps
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cum_clk_jumps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cum_clk_jumps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type1
    PyObject * field = NULL;
    size_t size = ros_message->type1.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    septentrio_gnss_driver__msg__MeasEpochChannelType1 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->type1.data[i]);
      PyObject * pyitem = septentrio_gnss_driver__msg__meas_epoch_channel_type1__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "type1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
