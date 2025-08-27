// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__struct.h"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__functions.h"
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

#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__functions.h"  // type2

// forward declare type support functions
size_t get_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType2(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, MeasEpochChannelType2)();


using _MeasEpochChannelType1__ros_msg_type = septentrio_gnss_driver__msg__MeasEpochChannelType1;

static bool _MeasEpochChannelType1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MeasEpochChannelType1__ros_msg_type * ros_message = static_cast<const _MeasEpochChannelType1__ros_msg_type *>(untyped_ros_message);
  // Field name: rx_channel
  {
    cdr << ros_message->rx_channel;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: sv_id
  {
    cdr << ros_message->sv_id;
  }

  // Field name: misc
  {
    cdr << ros_message->misc;
  }

  // Field name: code_lsb
  {
    cdr << ros_message->code_lsb;
  }

  // Field name: doppler
  {
    cdr << ros_message->doppler;
  }

  // Field name: carrier_lsb
  {
    cdr << ros_message->carrier_lsb;
  }

  // Field name: carrier_msb
  {
    cdr << ros_message->carrier_msb;
  }

  // Field name: cn0
  {
    cdr << ros_message->cn0;
  }

  // Field name: lock_time
  {
    cdr << ros_message->lock_time;
  }

  // Field name: obs_info
  {
    cdr << ros_message->obs_info;
  }

  // Field name: n2
  {
    cdr << ros_message->n2;
  }

  // Field name: type2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, MeasEpochChannelType2
      )()->data);
    size_t size = ros_message->type2.size;
    auto array_ptr = ros_message->type2.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _MeasEpochChannelType1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MeasEpochChannelType1__ros_msg_type * ros_message = static_cast<_MeasEpochChannelType1__ros_msg_type *>(untyped_ros_message);
  // Field name: rx_channel
  {
    cdr >> ros_message->rx_channel;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: sv_id
  {
    cdr >> ros_message->sv_id;
  }

  // Field name: misc
  {
    cdr >> ros_message->misc;
  }

  // Field name: code_lsb
  {
    cdr >> ros_message->code_lsb;
  }

  // Field name: doppler
  {
    cdr >> ros_message->doppler;
  }

  // Field name: carrier_lsb
  {
    cdr >> ros_message->carrier_lsb;
  }

  // Field name: carrier_msb
  {
    cdr >> ros_message->carrier_msb;
  }

  // Field name: cn0
  {
    cdr >> ros_message->cn0;
  }

  // Field name: lock_time
  {
    cdr >> ros_message->lock_time;
  }

  // Field name: obs_info
  {
    cdr >> ros_message->obs_info;
  }

  // Field name: n2
  {
    cdr >> ros_message->n2;
  }

  // Field name: type2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, MeasEpochChannelType2
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->type2.data) {
      septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__fini(&ros_message->type2);
    }
    if (!septentrio_gnss_driver__msg__MeasEpochChannelType2__Sequence__init(&ros_message->type2, size)) {
      fprintf(stderr, "failed to create array for field 'type2'");
      return false;
    }
    auto array_ptr = ros_message->type2.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t get_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MeasEpochChannelType1__ros_msg_type * ros_message = static_cast<const _MeasEpochChannelType1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rx_channel
  {
    size_t item_size = sizeof(ros_message->rx_channel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sv_id
  {
    size_t item_size = sizeof(ros_message->sv_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name misc
  {
    size_t item_size = sizeof(ros_message->misc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name code_lsb
  {
    size_t item_size = sizeof(ros_message->code_lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name doppler
  {
    size_t item_size = sizeof(ros_message->doppler);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrier_lsb
  {
    size_t item_size = sizeof(ros_message->carrier_lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrier_msb
  {
    size_t item_size = sizeof(ros_message->carrier_msb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cn0
  {
    size_t item_size = sizeof(ros_message->cn0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lock_time
  {
    size_t item_size = sizeof(ros_message->lock_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obs_info
  {
    size_t item_size = sizeof(ros_message->obs_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n2
  {
    size_t item_size = sizeof(ros_message->n2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type2
  {
    size_t array_size = ros_message->type2.size;
    auto array_ptr = ros_message->type2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType2(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MeasEpochChannelType1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t max_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType1(
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

  // member: rx_channel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sv_id
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
  // member: code_lsb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: doppler
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: carrier_lsb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: carrier_msb
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
  // member: lock_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: obs_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: n2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: type2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = septentrio_gnss_driver__msg__MeasEpochChannelType1;
    is_plain =
      (
      offsetof(DataType, type2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MeasEpochChannelType1__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_septentrio_gnss_driver__msg__MeasEpochChannelType1(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MeasEpochChannelType1 = {
  "septentrio_gnss_driver::msg",
  "MeasEpochChannelType1",
  _MeasEpochChannelType1__cdr_serialize,
  _MeasEpochChannelType1__cdr_deserialize,
  _MeasEpochChannelType1__get_serialized_size,
  _MeasEpochChannelType1__max_serialized_size
};

static rosidl_message_type_support_t _MeasEpochChannelType1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MeasEpochChannelType1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, MeasEpochChannelType1)() {
  return &_MeasEpochChannelType1__type_support;
}

#if defined(__cplusplus)
}
#endif
