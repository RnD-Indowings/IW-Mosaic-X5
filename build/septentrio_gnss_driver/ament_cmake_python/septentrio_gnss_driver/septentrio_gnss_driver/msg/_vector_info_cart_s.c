// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/VectorInfoCart.idl
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
#include "septentrio_gnss_driver/msg/detail/vector_info_cart__struct.h"
#include "septentrio_gnss_driver/msg/detail/vector_info_cart__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__vector_info_cart__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("septentrio_gnss_driver.msg._vector_info_cart.VectorInfoCart", full_classname_dest, 59) == 0);
  }
  septentrio_gnss_driver__msg__VectorInfoCart * ros_message = _ros_message;
  {  // nr_sv
    PyObject * field = PyObject_GetAttrString(_pymsg, "nr_sv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nr_sv = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // misc
    PyObject * field = PyObject_GetAttrString(_pymsg, "misc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->misc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // delta_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_vx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_vy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_vz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "azimuth");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->azimuth = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elevation = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // reference_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // corr_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "corr_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->corr_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signal_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_info = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__vector_info_cart__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VectorInfoCart */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._vector_info_cart");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VectorInfoCart");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__VectorInfoCart * ros_message = (septentrio_gnss_driver__msg__VectorInfoCart *)raw_ros_message;
  {  // nr_sv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nr_sv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nr_sv", field);
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
  {  // misc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->misc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "misc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azimuth
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azimuth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reference_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // corr_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->corr_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "corr_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signal_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
