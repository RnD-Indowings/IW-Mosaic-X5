// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__rosidl_typesupport_introspection_c.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__functions.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__struct.h"


// Include directives for member types
// Member `type2`
#include "septentrio_gnss_driver/msg/meas_epoch_channel_type2.h"
// Member `type2`
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  septentrio_gnss_driver__msg__MeasEpochChannelType1__init(message_memory);
}

void septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_fini_function(void * message_memory)
{
  septentrio_gnss_driver__msg__MeasEpochChannelType1__fini(message_memory);
}

size_t septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__size_function__MeasEpochChannelType1__type2(
  const void * untyped_member)
{
  const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * member =
    (const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence *)(untyped_member);
  return member->size;
}

const void * septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__get_const_function__MeasEpochChannelType1__type2(
  const void * untyped_member, size_t index)
{
  const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * member =
    (const septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__get_function__MeasEpochChannelType1__type2(
  void * untyped_member, size_t index)
{
  septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * member =
    (septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence *)(untyped_member);
  return &member->data[index];
}

void septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__fetch_function__MeasEpochChannelType1__type2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const septentrio_gnss_driver__msg__MeasEpochChannelType2 * item =
    ((const septentrio_gnss_driver__msg__MeasEpochChannelType2 *)
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__get_const_function__MeasEpochChannelType1__type2(untyped_member, index));
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * value =
    (septentrio_gnss_driver__msg__MeasEpochChannelType2 *)(untyped_value);
  *value = *item;
}

void septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__assign_function__MeasEpochChannelType1__type2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  septentrio_gnss_driver__msg__MeasEpochChannelType2 * item =
    ((septentrio_gnss_driver__msg__MeasEpochChannelType2 *)
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__get_function__MeasEpochChannelType1__type2(untyped_member, index));
  const septentrio_gnss_driver__msg__MeasEpochChannelType2 * value =
    (const septentrio_gnss_driver__msg__MeasEpochChannelType2 *)(untyped_value);
  *item = *value;
}

bool septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__resize_function__MeasEpochChannelType1__type2(
  void * untyped_member, size_t size)
{
  septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence * member =
    (septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence *)(untyped_member);
  septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__fini(member);
  return septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_member_array[13] = {
  {
    "rx_channel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, rx_channel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sv_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, sv_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "misc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, misc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code_lsb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, code_lsb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "doppler",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, doppler),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "carrier_lsb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, carrier_lsb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "carrier_msb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, carrier_msb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cn0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, cn0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lock_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, lock_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obs_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, obs_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, n2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__MeasEpochChannelType1, type2),  // bytes offset in struct
    NULL,  // default value
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__size_function__MeasEpochChannelType1__type2,  // size() function pointer
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__get_const_function__MeasEpochChannelType1__type2,  // get_const(index) function pointer
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__get_function__MeasEpochChannelType1__type2,  // get(index) function pointer
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__fetch_function__MeasEpochChannelType1__type2,  // fetch(index, &value) function pointer
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__assign_function__MeasEpochChannelType1__type2,  // assign(index, value) function pointer
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__resize_function__MeasEpochChannelType1__type2  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_members = {
  "septentrio_gnss_driver__msg",  // message namespace
  "MeasEpochChannelType1",  // message name
  13,  // number of fields
  sizeof(septentrio_gnss_driver__msg__MeasEpochChannelType1),
  septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_member_array,  // message members
  septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_init_function,  // function to initialize message memory (memory has to be allocated)
  septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_type_support_handle = {
  0,
  &septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, MeasEpochChannelType1)() {
  septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, MeasEpochChannelType2)();
  if (!septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_type_support_handle.typesupport_identifier) {
    septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &septentrio_gnss_driver__msg__MeasEpochChannelType1__rosidl_typesupport_introspection_c__MeasEpochChannelType1_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
