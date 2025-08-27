// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from septentrio_gnss_driver:msg/BlockHeader.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/block_header__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "septentrio_gnss_driver/msg/detail/block_header__struct.h"
#include "septentrio_gnss_driver/msg/detail/block_header__functions.h"
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


using _BlockHeader__ros_msg_type = septentrio_gnss_driver__msg__BlockHeader;

static bool _BlockHeader__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlockHeader__ros_msg_type * ros_message = static_cast<const _BlockHeader__ros_msg_type *>(untyped_ros_message);
  // Field name: sync_1
  {
    cdr << ros_message->sync_1;
  }

  // Field name: sync_2
  {
    cdr << ros_message->sync_2;
  }

  // Field name: crc
  {
    cdr << ros_message->crc;
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: revision
  {
    cdr << ros_message->revision;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: tow
  {
    cdr << ros_message->tow;
  }

  // Field name: wnc
  {
    cdr << ros_message->wnc;
  }

  return true;
}

static bool _BlockHeader__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlockHeader__ros_msg_type * ros_message = static_cast<_BlockHeader__ros_msg_type *>(untyped_ros_message);
  // Field name: sync_1
  {
    cdr >> ros_message->sync_1;
  }

  // Field name: sync_2
  {
    cdr >> ros_message->sync_2;
  }

  // Field name: crc
  {
    cdr >> ros_message->crc;
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: revision
  {
    cdr >> ros_message->revision;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: tow
  {
    cdr >> ros_message->tow;
  }

  // Field name: wnc
  {
    cdr >> ros_message->wnc;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t get_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlockHeader__ros_msg_type * ros_message = static_cast<const _BlockHeader__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sync_1
  {
    size_t item_size = sizeof(ros_message->sync_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sync_2
  {
    size_t item_size = sizeof(ros_message->sync_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crc
  {
    size_t item_size = sizeof(ros_message->crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name revision
  {
    size_t item_size = sizeof(ros_message->revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tow
  {
    size_t item_size = sizeof(ros_message->tow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wnc
  {
    size_t item_size = sizeof(ros_message->wnc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BlockHeader__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t max_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
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

  // member: sync_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sync_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: revision
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: tow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wnc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = septentrio_gnss_driver__msg__BlockHeader;
    is_plain =
      (
      offsetof(DataType, wnc) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BlockHeader__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BlockHeader = {
  "septentrio_gnss_driver::msg",
  "BlockHeader",
  _BlockHeader__cdr_serialize,
  _BlockHeader__cdr_deserialize,
  _BlockHeader__get_serialized_size,
  _BlockHeader__max_serialized_size
};

static rosidl_message_type_support_t _BlockHeader__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlockHeader,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, BlockHeader)() {
  return &_BlockHeader__type_support;
}

#if defined(__cplusplus)
}
#endif
