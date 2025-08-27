// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/INSNavGeod.idl
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
#include "septentrio_gnss_driver/msg/detail/ins_nav_geod__struct.h"
#include "septentrio_gnss_driver/msg/detail/ins_nav_geod__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__ins_nav_geod__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("septentrio_gnss_driver.msg._ins_nav_geod.INSNavGeod", full_classname_dest, 51) == 0);
  }
  septentrio_gnss_driver__msg__INSNavGeod * ros_message = _ros_message;
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
  {  // gnss_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_mode = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->info = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gnss_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_age = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "accuracy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accuracy = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // datum
    PyObject * field = PyObject_GetAttrString(_pymsg, "datum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->datum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sb_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "sb_list");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sb_list = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latitude_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latitude_longitude_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_longitude_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude_longitude_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latitude_height_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_height_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude_height_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude_height_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude_height_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude_height_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_pitch_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_pitch_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_pitch_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_roll_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_roll_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_roll_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_roll_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_roll_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_roll_cov = (float)PyFloat_AS_DOUBLE(field);
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
  {  // vn
    PyObject * field = PyObject_GetAttrString(_pymsg, "vn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vn = (float)PyFloat_AS_DOUBLE(field);
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
  {  // ve_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "ve_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ve_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vn_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "vn_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vn_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vu_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "vu_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vu_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ve_vn_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "ve_vn_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ve_vn_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ve_vu_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "ve_vu_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ve_vu_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vn_vu_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "vn_vu_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vn_vu_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__ins_nav_geod__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of INSNavGeod */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._ins_nav_geod");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "INSNavGeod");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__INSNavGeod * ros_message = (septentrio_gnss_driver__msg__INSNavGeod *)raw_ros_message;
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
  {  // gnss_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gnss_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_mode", field);
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
  {  // info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gnss_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_age", field);
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
  {  // accuracy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accuracy", field);
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
  {  // sb_list
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sb_list);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sb_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude_longitude_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude_longitude_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_longitude_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude_height_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude_height_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_height_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude_height_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude_height_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude_height_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_pitch_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_pitch_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_pitch_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_roll_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_roll_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_roll_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_roll_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_roll_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_roll_cov", field);
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
  {  // ve_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ve_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ve_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vn_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vn_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vn_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vu_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vu_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vu_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ve_vn_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ve_vn_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ve_vn_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ve_vu_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ve_vu_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ve_vu_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vn_vu_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vn_vu_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vn_vu_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
