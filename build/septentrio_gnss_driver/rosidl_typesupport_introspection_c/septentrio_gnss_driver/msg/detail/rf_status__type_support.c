// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from septentrio_gnss_driver:msg/RFStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "septentrio_gnss_driver/msg/detail/rf_status__rosidl_typesupport_introspection_c.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "septentrio_gnss_driver/msg/detail/rf_status__functions.h"
#include "septentrio_gnss_driver/msg/detail/rf_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/block_header.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/detail/block_header__rosidl_typesupport_introspection_c.h"
// Member `rfband`
#include "septentrio_gnss_driver/msg/rf_band.h"
// Member `rfband`
#include "septentrio_gnss_driver/msg/detail/rf_band__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  septentrio_gnss_driver__msg__RFStatus__init(message_memory);
}

void septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_fini_function(void * message_memory)
{
  septentrio_gnss_driver__msg__RFStatus__fini(message_memory);
}

size_t septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__size_function__RFStatus__rfband(
  const void * untyped_member)
{
  const septentrio_gnss_driver__msg__RFBand__Sequence * member =
    (const septentrio_gnss_driver__msg__RFBand__Sequence *)(untyped_member);
  return member->size;
}

const void * septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__get_const_function__RFStatus__rfband(
  const void * untyped_member, size_t index)
{
  const septentrio_gnss_driver__msg__RFBand__Sequence * member =
    (const septentrio_gnss_driver__msg__RFBand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__get_function__RFStatus__rfband(
  void * untyped_member, size_t index)
{
  septentrio_gnss_driver__msg__RFBand__Sequence * member =
    (septentrio_gnss_driver__msg__RFBand__Sequence *)(untyped_member);
  return &member->data[index];
}

void septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__fetch_function__RFStatus__rfband(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const septentrio_gnss_driver__msg__RFBand * item =
    ((const septentrio_gnss_driver__msg__RFBand *)
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__get_const_function__RFStatus__rfband(untyped_member, index));
  septentrio_gnss_driver__msg__RFBand * value =
    (septentrio_gnss_driver__msg__RFBand *)(untyped_value);
  *value = *item;
}

void septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__assign_function__RFStatus__rfband(
  void * untyped_member, size_t index, const void * untyped_value)
{
  septentrio_gnss_driver__msg__RFBand * item =
    ((septentrio_gnss_driver__msg__RFBand *)
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__get_function__RFStatus__rfband(untyped_member, index));
  const septentrio_gnss_driver__msg__RFBand * value =
    (const septentrio_gnss_driver__msg__RFBand *)(untyped_value);
  *item = *value;
}

bool septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__resize_function__RFStatus__rfband(
  void * untyped_member, size_t size)
{
  septentrio_gnss_driver__msg__RFBand__Sequence * member =
    (septentrio_gnss_driver__msg__RFBand__Sequence *)(untyped_member);
  septentrio_gnss_driver__msg__RFBand__Sequence__fini(member);
  return septentrio_gnss_driver__msg__RFBand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__RFStatus, header),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver__msg__RFStatus, block_header),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver__msg__RFStatus, n),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver__msg__RFStatus, sb_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__RFStatus, flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfband",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__RFStatus, rfband),  // bytes offset in struct
    NULL,  // default value
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__size_function__RFStatus__rfband,  // size() function pointer
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__get_const_function__RFStatus__rfband,  // get_const(index) function pointer
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__get_function__RFStatus__rfband,  // get(index) function pointer
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__fetch_function__RFStatus__rfband,  // fetch(index, &value) function pointer
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__assign_function__RFStatus__rfband,  // assign(index, value) function pointer
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__resize_function__RFStatus__rfband  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_members = {
  "septentrio_gnss_driver__msg",  // message namespace
  "RFStatus",  // message name
  6,  // number of fields
  sizeof(septentrio_gnss_driver__msg__RFStatus),
  septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_member_array,  // message members
  septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_type_support_handle = {
  0,
  &septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, RFStatus)() {
  septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, BlockHeader)();
  septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, RFBand)();
  if (!septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_type_support_handle.typesupport_identifier) {
    septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &septentrio_gnss_driver__msg__RFStatus__rosidl_typesupport_introspection_c__RFStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
