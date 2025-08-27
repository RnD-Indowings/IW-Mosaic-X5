// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from septentrio_gnss_driver:msg/BaseVectorCart.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "septentrio_gnss_driver/msg/detail/base_vector_cart__rosidl_typesupport_introspection_c.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "septentrio_gnss_driver/msg/detail/base_vector_cart__functions.h"
#include "septentrio_gnss_driver/msg/detail/base_vector_cart__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/block_header.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/detail/block_header__rosidl_typesupport_introspection_c.h"
// Member `vector_info_cart`
#include "septentrio_gnss_driver/msg/vector_info_cart.h"
// Member `vector_info_cart`
#include "septentrio_gnss_driver/msg/detail/vector_info_cart__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  septentrio_gnss_driver__msg__BaseVectorCart__init(message_memory);
}

void septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_fini_function(void * message_memory)
{
  septentrio_gnss_driver__msg__BaseVectorCart__fini(message_memory);
}

size_t septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__size_function__BaseVectorCart__vector_info_cart(
  const void * untyped_member)
{
  const septentrio_gnss_driver__msg__VectorInfoCart__Sequence * member =
    (const septentrio_gnss_driver__msg__VectorInfoCart__Sequence *)(untyped_member);
  return member->size;
}

const void * septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__get_const_function__BaseVectorCart__vector_info_cart(
  const void * untyped_member, size_t index)
{
  const septentrio_gnss_driver__msg__VectorInfoCart__Sequence * member =
    (const septentrio_gnss_driver__msg__VectorInfoCart__Sequence *)(untyped_member);
  return &member->data[index];
}

void * septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__get_function__BaseVectorCart__vector_info_cart(
  void * untyped_member, size_t index)
{
  septentrio_gnss_driver__msg__VectorInfoCart__Sequence * member =
    (septentrio_gnss_driver__msg__VectorInfoCart__Sequence *)(untyped_member);
  return &member->data[index];
}

void septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__fetch_function__BaseVectorCart__vector_info_cart(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const septentrio_gnss_driver__msg__VectorInfoCart * item =
    ((const septentrio_gnss_driver__msg__VectorInfoCart *)
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__get_const_function__BaseVectorCart__vector_info_cart(untyped_member, index));
  septentrio_gnss_driver__msg__VectorInfoCart * value =
    (septentrio_gnss_driver__msg__VectorInfoCart *)(untyped_value);
  *value = *item;
}

void septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__assign_function__BaseVectorCart__vector_info_cart(
  void * untyped_member, size_t index, const void * untyped_value)
{
  septentrio_gnss_driver__msg__VectorInfoCart * item =
    ((septentrio_gnss_driver__msg__VectorInfoCart *)
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__get_function__BaseVectorCart__vector_info_cart(untyped_member, index));
  const septentrio_gnss_driver__msg__VectorInfoCart * value =
    (const septentrio_gnss_driver__msg__VectorInfoCart *)(untyped_value);
  *item = *value;
}

bool septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__resize_function__BaseVectorCart__vector_info_cart(
  void * untyped_member, size_t size)
{
  septentrio_gnss_driver__msg__VectorInfoCart__Sequence * member =
    (septentrio_gnss_driver__msg__VectorInfoCart__Sequence *)(untyped_member);
  septentrio_gnss_driver__msg__VectorInfoCart__Sequence__fini(member);
  return septentrio_gnss_driver__msg__VectorInfoCart__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__BaseVectorCart, header),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver__msg__BaseVectorCart, block_header),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver__msg__BaseVectorCart, n),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver__msg__BaseVectorCart, sb_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vector_info_cart",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver__msg__BaseVectorCart, vector_info_cart),  // bytes offset in struct
    NULL,  // default value
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__size_function__BaseVectorCart__vector_info_cart,  // size() function pointer
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__get_const_function__BaseVectorCart__vector_info_cart,  // get_const(index) function pointer
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__get_function__BaseVectorCart__vector_info_cart,  // get(index) function pointer
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__fetch_function__BaseVectorCart__vector_info_cart,  // fetch(index, &value) function pointer
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__assign_function__BaseVectorCart__vector_info_cart,  // assign(index, value) function pointer
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__resize_function__BaseVectorCart__vector_info_cart  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_members = {
  "septentrio_gnss_driver__msg",  // message namespace
  "BaseVectorCart",  // message name
  5,  // number of fields
  sizeof(septentrio_gnss_driver__msg__BaseVectorCart),
  septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_member_array,  // message members
  septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_init_function,  // function to initialize message memory (memory has to be allocated)
  septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_type_support_handle = {
  0,
  &septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, BaseVectorCart)() {
  septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, BlockHeader)();
  septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, VectorInfoCart)();
  if (!septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_type_support_handle.typesupport_identifier) {
    septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &septentrio_gnss_driver__msg__BaseVectorCart__rosidl_typesupport_introspection_c__BaseVectorCart_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
