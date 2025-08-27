// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/INSNavCart.idl
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
#include "septentrio_gnss_driver/msg/detail/ins_nav_cart__struct.h"
#include "septentrio_gnss_driver/msg/detail/ins_nav_cart__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__ins_nav_cart__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("septentrio_gnss_driver.msg._ins_nav_cart.INSNavCart", full_classname_dest, 51) == 0);
  }
  septentrio_gnss_driver__msg__INSNavCart * ros_message = _ros_message;
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
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
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
  {  // x_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xy_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "xy_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xy_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xz_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "xz_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xz_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yz_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "yz_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yz_cov = (float)PyFloat_AS_DOUBLE(field);
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
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz_std_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz_std_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz_std_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx_vy_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx_vy_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx_vy_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx_vz_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx_vz_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx_vz_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy_vz_cov
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy_vz_cov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy_vz_cov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__ins_nav_cart__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of INSNavCart */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._ins_nav_cart");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "INSNavCart");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__INSNavCart * ros_message = (septentrio_gnss_driver__msg__INSNavCart *)raw_ros_message;
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
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
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
  {  // x_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xy_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xy_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xy_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xz_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xz_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xz_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yz_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yz_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yz_cov", field);
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
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz_std_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz_std_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz_std_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx_vy_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx_vy_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx_vy_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx_vz_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx_vz_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx_vz_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy_vz_cov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy_vz_cov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy_vz_cov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
