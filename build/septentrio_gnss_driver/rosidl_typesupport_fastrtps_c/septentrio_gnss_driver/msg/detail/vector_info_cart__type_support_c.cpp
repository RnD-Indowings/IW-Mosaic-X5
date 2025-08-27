// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from septentrio_gnss_driver:msg/VectorInfoCart.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/vector_info_cart__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "septentrio_gnss_driver/msg/detail/vector_info_cart__struct.h"
#include "septentrio_gnss_driver/msg/detail/vector_info_cart__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VectorInfoCart__ros_msg_type = septentrio_gnss_driver__msg__VectorInfoCart;

static bool _VectorInfoCart__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VectorInfoCart__ros_msg_type * ros_message = static_cast<const _VectorInfoCart__ros_msg_type *>(untyped_ros_message);
  // Field name: nr_sv
  {
    cdr << ros_message->nr_sv;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: misc
  {
    cdr << ros_message->misc;
  }

  // Field name: delta_x
  {
    cdr << ros_message->delta_x;
  }

  // Field name: delta_y
  {
    cdr << ros_message->delta_y;
  }

  // Field name: delta_z
  {
    cdr << ros_message->delta_z;
  }

  // Field name: delta_vx
  {
    cdr << ros_message->delta_vx;
  }

  // Field name: delta_vy
  {
    cdr << ros_message->delta_vy;
  }

  // Field name: delta_vz
  {
    cdr << ros_message->delta_vz;
  }

  // Field name: azimuth
  {
    cdr << ros_message->azimuth;
  }

  // Field name: elevation
  {
    cdr << ros_message->elevation;
  }

  // Field name: reference_id
  {
    cdr << ros_message->reference_id;
  }

  // Field name: corr_age
  {
    cdr << ros_message->corr_age;
  }

  // Field name: signal_info
  {
    cdr << ros_message->signal_info;
  }

  return true;
}

static bool _VectorInfoCart__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VectorInfoCart__ros_msg_type * ros_message = static_cast<_VectorInfoCart__ros_msg_type *>(untyped_ros_message);
  // Field name: nr_sv
  {
    cdr >> ros_message->nr_sv;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: misc
  {
    cdr >> ros_message->misc;
  }

  // Field name: delta_x
  {
    cdr >> ros_message->delta_x;
  }

  // Field name: delta_y
  {
    cdr >> ros_message->delta_y;
  }

  // Field name: delta_z
  {
    cdr >> ros_message->delta_z;
  }

  // Field name: delta_vx
  {
    cdr >> ros_message->delta_vx;
  }

  // Field name: delta_vy
  {
    cdr >> ros_message->delta_vy;
  }

  // Field name: delta_vz
  {
    cdr >> ros_message->delta_vz;
  }

  // Field name: azimuth
  {
    cdr >> ros_message->azimuth;
  }

  // Field name: elevation
  {
    cdr >> ros_message->elevation;
  }

  // Field name: reference_id
  {
    cdr >> ros_message->reference_id;
  }

  // Field name: corr_age
  {
    cdr >> ros_message->corr_age;
  }

  // Field name: signal_info
  {
    cdr >> ros_message->signal_info;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t get_serialized_size_septentrio_gnss_driver__msg__VectorInfoCart(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VectorInfoCart__ros_msg_type * ros_message = static_cast<const _VectorInfoCart__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name nr_sv
  {
    size_t item_size = sizeof(ros_message->nr_sv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name misc
  {
    size_t item_size = sizeof(ros_message->misc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_x
  {
    size_t item_size = sizeof(ros_message->delta_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_y
  {
    size_t item_size = sizeof(ros_message->delta_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_z
  {
    size_t item_size = sizeof(ros_message->delta_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_vx
  {
    size_t item_size = sizeof(ros_message->delta_vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_vy
  {
    size_t item_size = sizeof(ros_message->delta_vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_vz
  {
    size_t item_size = sizeof(ros_message->delta_vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name azimuth
  {
    size_t item_size = sizeof(ros_message->azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elevation
  {
    size_t item_size = sizeof(ros_message->elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_id
  {
    size_t item_size = sizeof(ros_message->reference_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name corr_age
  {
    size_t item_size = sizeof(ros_message->corr_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_info
  {
    size_t item_size = sizeof(ros_message->signal_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VectorInfoCart__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_septentrio_gnss_driver__msg__VectorInfoCart(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t max_serialized_size_septentrio_gnss_driver__msg__VectorInfoCart(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: nr_sv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: misc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: delta_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_vx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_vy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_vz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: azimuth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: elevation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reference_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: corr_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: signal_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = septentrio_gnss_driver__msg__VectorInfoCart;
    is_plain =
      (
      offsetof(DataType, signal_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VectorInfoCart__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_septentrio_gnss_driver__msg__VectorInfoCart(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VectorInfoCart = {
  "septentrio_gnss_driver::msg",
  "VectorInfoCart",
  _VectorInfoCart__cdr_serialize,
  _VectorInfoCart__cdr_deserialize,
  _VectorInfoCart__get_serialized_size,
  _VectorInfoCart__max_serialized_size
};

static rosidl_message_type_support_t _VectorInfoCart__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VectorInfoCart,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, VectorInfoCart)() {
  return &_VectorInfoCart__type_support;
}

#if defined(__cplusplus)
}
#endif
