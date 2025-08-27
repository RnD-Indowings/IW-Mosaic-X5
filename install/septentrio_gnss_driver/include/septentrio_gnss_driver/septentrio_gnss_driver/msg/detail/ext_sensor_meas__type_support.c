// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from septentrio_gnss_driver:msg/ExtSensorMeas.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "septentrio_gnss_driver/msg/detail/ext_sensor_meas__rosidl_typesupport_introspection_c.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "septentrio_gnss_driver/msg/detail/ext_sensor_meas__functions.h"
#include "septentrio_gnss_driver/msg/detail/ext_sensor_meas__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/block_header.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/detail/block_header__rosidl_typesupport_introspection_c.h"
// Member `source`
// Member `sensor_model`
// Member `type`
// Member `obs_info`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  septentrio_gnss_driver__msg__ExtSensorMeas__init(message_memory);
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_fini_function(void * message_memory)
{
  septentrio_gnss_driver__msg__ExtSensorMeas__fini(message_memory);
}

size_t septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__size_function__ExtSensorMeas__source(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__source(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__source(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__fetch_function__ExtSensorMeas__source(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__source(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__assign_function__ExtSensorMeas__source(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__source(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__resize_function__ExtSensorMeas__source(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__size_function__ExtSensorMeas__sensor_model(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__sensor_model(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__sensor_model(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__fetch_function__ExtSensorMeas__sensor_model(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__sensor_model(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__assign_function__ExtSensorMeas__sensor_model(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__sensor_model(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__resize_function__ExtSensorMeas__sensor_model(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__size_function__ExtSensorMeas__type(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__fetch_function__ExtSensorMeas__type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__type(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__assign_function__ExtSensorMeas__type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__type(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__resize_function__ExtSensorMeas__type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__size_function__ExtSensorMeas__obs_info(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__obs_info(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__obs_info(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__fetch_function__ExtSensorMeas__obs_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__obs_info(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__assign_function__ExtSensorMeas__obs_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__obs_info(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__resize_function__ExtSensorMeas__obs_info(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_member_array[22] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "block_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, block_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sb_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, sb_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, source),  // bytes offset in struct
    NULL,  // default value
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__size_function__ExtSensorMeas__source,  // size() function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__source,  // get_const(index) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__source,  // get(index) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__fetch_function__ExtSensorMeas__source,  // fetch(index, &value) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__assign_function__ExtSensorMeas__source,  // assign(index, value) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__resize_function__ExtSensorMeas__source  // resize(index) function pointer
  },
  {
    "sensor_model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, sensor_model),  // bytes offset in struct
    NULL,  // default value
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__size_function__ExtSensorMeas__sensor_model,  // size() function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__sensor_model,  // get_const(index) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__sensor_model,  // get(index) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__fetch_function__ExtSensorMeas__sensor_model,  // fetch(index, &value) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__assign_function__ExtSensorMeas__sensor_model,  // assign(index, value) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__resize_function__ExtSensorMeas__sensor_model  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, type),  // bytes offset in struct
    NULL,  // default value
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__size_function__ExtSensorMeas__type,  // size() function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__type,  // get_const(index) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__type,  // get(index) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__fetch_function__ExtSensorMeas__type,  // fetch(index, &value) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__assign_function__ExtSensorMeas__type,  // assign(index, value) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__resize_function__ExtSensorMeas__type  // resize(index) function pointer
  },
  {
    "obs_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, obs_info),  // bytes offset in struct
    NULL,  // default value
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__size_function__ExtSensorMeas__obs_info,  // size() function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_const_function__ExtSensorMeas__obs_info,  // get_const(index) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__get_function__ExtSensorMeas__obs_info,  // get(index) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__fetch_function__ExtSensorMeas__obs_info,  // fetch(index, &value) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__assign_function__ExtSensorMeas__obs_info,  // assign(index, value) function pointer
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__resize_function__ExtSensorMeas__obs_info  // resize(index) function pointer
  },
  {
    "acceleration_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, acceleration_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, acceleration_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, acceleration_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_rate_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, angular_rate_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_rate_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, angular_rate_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_rate_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, angular_rate_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, velocity_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, velocity_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, velocity_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "std_dev_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, std_dev_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "std_dev_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, std_dev_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "std_dev_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, std_dev_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, sensor_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zero_velocity_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__ExtSensorMeas, zero_velocity_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_members = {
  "septentrio_gnss_driver__msg",  // message namespace
  "ExtSensorMeas",  // message name
  22,  // number of fields
  sizeof(septentrio_gnss_driver__msg__ExtSensorMeas),
  septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_member_array,  // message members
  septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_init_function,  // function to initialize message memory (memory has to be allocated)
  septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_type_support_handle = {
  0,
  &septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, ExtSensorMeas)() {
  septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, BlockHeader)();
  if (!septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_type_support_handle.typesupport_identifier) {
    septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &septentrio_gnss_driver__msg__ExtSensorMeas__rosidl_typesupport_introspection_c__ExtSensorMeas_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
