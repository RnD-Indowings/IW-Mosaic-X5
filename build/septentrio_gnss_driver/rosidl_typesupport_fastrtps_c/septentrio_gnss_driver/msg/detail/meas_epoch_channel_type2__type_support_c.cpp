// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__struct.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__functions.h"
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


using _MeasEpochChannelType2__ros_msg_type = septentrio_gnss_driver__msg__MeasEpochChannelType2;

static bool _MeasEpochChannelType2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MeasEpochChannelType2__ros_msg_type * ros_message = static_cast<const _MeasEpochChannelType2__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: lock_time
  {
    cdr << ros_message->lock_time;
  }

  // Field name: cn0
  {
    cdr << ros_message->cn0;
  }

  // Field name: offsets_msb
  {
    cdr << ros_message->offsets_msb;
  }

  // Field name: carrier_msb
  {
    cdr << ros_message->carrier_msb;
  }

  // Field name: obs_info
  {
    cdr << ros_message->obs_info;
  }

  // Field name: code_offset_lsb
  {
    cdr << ros_message->code_offset_lsb;
  }

  // Field name: carrier_lsb
  {
    cdr << ros_message->carrier_lsb;
  }

  // Field name: doppler_offset_lsb
  {
    cdr << ros_message->doppler_offset_lsb;
  }

  return true;
}

static bool _MeasEpochChannelType2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MeasEpochChannelType2__ros_msg_type * ros_message = static_cast<_MeasEpochChannelType2__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: lock_time
  {
    cdr >> ros_message->lock_time;
  }

  // Field name: cn0
  {
    cdr >> ros_message->cn0;
  }

  // Field name: offsets_msb
  {
    cdr >> ros_message->offsets_msb;
  }

  // Field name: carrier_msb
  {
    cdr >> ros_message->carrier_msb;
  }

  // Field name: obs_info
  {
    cdr >> ros_message->obs_info;
  }

  // Field name: code_offset_lsb
  {
    cdr >> ros_message->code_offset_lsb;
  }

  // Field name: carrier_lsb
  {
    cdr >> ros_message->carrier_lsb;
  }

  // Field name: doppler_offset_lsb
  {
    cdr >> ros_message->doppler_offset_lsb;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t get_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType2(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MeasEpochChannelType2__ros_msg_type * ros_message = static_cast<const _MeasEpochChannelType2__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lock_time
  {
    size_t item_size = sizeof(ros_message->lock_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cn0
  {
    size_t item_size = sizeof(ros_message->cn0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offsets_msb
  {
    size_t item_size = sizeof(ros_message->offsets_msb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrier_msb
  {
    size_t item_size = sizeof(ros_message->carrier_msb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obs_info
  {
    size_t item_size = sizeof(ros_message->obs_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name code_offset_lsb
  {
    size_t item_size = sizeof(ros_message->code_offset_lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrier_lsb
  {
    size_t item_size = sizeof(ros_message->carrier_lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name doppler_offset_lsb
  {
    size_t item_size = sizeof(ros_message->doppler_offset_lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MeasEpochChannelType2__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType2(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t max_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType2(
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

  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lock_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cn0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offsets_msb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: carrier_msb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obs_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: code_offset_lsb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: carrier_lsb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: doppler_offset_lsb
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
    using DataType = septentrio_gnss_driver__msg__MeasEpochChannelType2;
    is_plain =
      (
      offsetof(DataType, doppler_offset_lsb) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MeasEpochChannelType2__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType2(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MeasEpochChannelType2 = {
  "septentrio_gnss_driver::msg",
  "MeasEpochChannelType2",
  _MeasEpochChannelType2__cdr_serialize,
  _MeasEpochChannelType2__cdr_deserialize,
  _MeasEpochChannelType2__get_serialized_size,
  _MeasEpochChannelType2__max_serialized_size
};

static rosidl_message_type_support_t _MeasEpochChannelType2__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MeasEpochChannelType2,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, MeasEpochChannelType2)() {
  return &_MeasEpochChannelType2__type_support;
}

#if defined(__cplusplus)
}
#endif
