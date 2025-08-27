// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/PVTGeodetic.idl
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
#include "septentrio_gnss_driver/msg/detail/pvt_geodetic__struct.h"
#include "septentrio_gnss_driver/msg/detail/pvt_geodetic__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__pvt_geodetic__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("septentrio_gnss_driver.msg._pvt_geodetic.PVTGeodetic", full_classname_dest, 52) == 0);
  }
  septentrio_gnss_driver__msg__PVTGeodetic * ros_message = _ros_message;
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
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // undulation
    PyObject * field = PyObject_GetAttrString(_pymsg, "undulation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->undulation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vn
    PyObject * field = PyObject_GetAttrString(_pymsg, "vn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vn = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ve
    PyObject * field = PyObject_GetAttrString(_pymsg, "ve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ve = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vu
    PyObject * field = PyObject_GetAttrString(_pymsg, "vu");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vu = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cog
    PyObject * field = PyObject_GetAttrString(_pymsg, "cog");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cog = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx_clk_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_clk_bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx_clk_bias = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx_clk_drift
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_clk_drift");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx_clk_drift = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_system");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_system = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // datum
    PyObject * field = PyObject_GetAttrString(_pymsg, "datum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->datum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nr_sv
    PyObject * field = PyObject_GetAttrString(_pymsg, "nr_sv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nr_sv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wa_corr_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "wa_corr_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wa_corr_info = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // mean_corr_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_corr_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mean_corr_age = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // alert_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "alert_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alert_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nr_bases
    PyObject * field = PyObject_GetAttrString(_pymsg, "nr_bases");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nr_bases = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ppp_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "ppp_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ppp_info = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latency
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latency = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // h_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_accuracy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->h_accuracy = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // v_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_accuracy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->v_accuracy = (uint16_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__pvt_geodetic__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PVTGeodetic */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._pvt_geodetic");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PVTGeodetic");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__PVTGeodetic * ros_message = (septentrio_gnss_driver__msg__PVTGeodetic *)raw_ros_message;
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
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undulation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->undulation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "undulation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vn
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ve
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vu
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cog
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cog);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_clk_bias
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx_clk_bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_clk_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_clk_drift
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx_clk_drift);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_clk_drift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_system
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_system);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // datum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->datum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "datum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // wa_corr_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wa_corr_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wa_corr_info", field);
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
  {  // mean_corr_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mean_corr_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_corr_age", field);
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
  {  // alert_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alert_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alert_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nr_bases
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nr_bases);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nr_bases", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ppp_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ppp_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ppp_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latency
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->latency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h_accuracy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->h_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_accuracy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->v_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_accuracy", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
