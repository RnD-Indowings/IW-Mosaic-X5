// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__rosidl_typesupport_fastrtps_cpp.hpp"
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace septentrio_gnss_driver
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const septentrio_gnss_driver::msg::MeasEpochChannelType2 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  septentrio_gnss_driver::msg::MeasEpochChannelType2 &);
size_t get_serialized_size(
  const septentrio_gnss_driver::msg::MeasEpochChannelType2 &,
  size_t current_alignment);
size_t
max_serialized_size_MeasEpochChannelType2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace septentrio_gnss_driver


namespace septentrio_gnss_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
cdr_serialize(
  const septentrio_gnss_driver::msg::MeasEpochChannelType1 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rx_channel
  cdr << ros_message.rx_channel;
  // Member: type
  cdr << ros_message.type;
  // Member: sv_id
  cdr << ros_message.sv_id;
  // Member: misc
  cdr << ros_message.misc;
  // Member: code_lsb
  cdr << ros_message.code_lsb;
  // Member: doppler
  cdr << ros_message.doppler;
  // Member: carrier_lsb
  cdr << ros_message.carrier_lsb;
  // Member: carrier_msb
  cdr << ros_message.carrier_msb;
  // Member: cn0
  cdr << ros_message.cn0;
  // Member: lock_time
  cdr << ros_message.lock_time;
  // Member: obs_info
  cdr << ros_message.obs_info;
  // Member: n2
  cdr << ros_message.n2;
  // Member: type2
  {
    size_t size = ros_message.type2.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.type2[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  septentrio_gnss_driver::msg::MeasEpochChannelType1 & ros_message)
{
  // Member: rx_channel
  cdr >> ros_message.rx_channel;

  // Member: type
  cdr >> ros_message.type;

  // Member: sv_id
  cdr >> ros_message.sv_id;

  // Member: misc
  cdr >> ros_message.misc;

  // Member: code_lsb
  cdr >> ros_message.code_lsb;

  // Member: doppler
  cdr >> ros_message.doppler;

  // Member: carrier_lsb
  cdr >> ros_message.carrier_lsb;

  // Member: carrier_msb
  cdr >> ros_message.carrier_msb;

  // Member: cn0
  cdr >> ros_message.cn0;

  // Member: lock_time
  cdr >> ros_message.lock_time;

  // Member: obs_info
  cdr >> ros_message.obs_info;

  // Member: n2
  cdr >> ros_message.n2;

  // Member: type2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.type2.resize(size);
    for (size_t i = 0; i < size; i++) {
      septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.type2[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
get_serialized_size(
  const septentrio_gnss_driver::msg::MeasEpochChannelType1 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rx_channel
  {
    size_t item_size = sizeof(ros_message.rx_channel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sv_id
  {
    size_t item_size = sizeof(ros_message.sv_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: misc
  {
    size_t item_size = sizeof(ros_message.misc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: code_lsb
  {
    size_t item_size = sizeof(ros_message.code_lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: doppler
  {
    size_t item_size = sizeof(ros_message.doppler);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: carrier_lsb
  {
    size_t item_size = sizeof(ros_message.carrier_lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: carrier_msb
  {
    size_t item_size = sizeof(ros_message.carrier_msb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cn0
  {
    size_t item_size = sizeof(ros_message.cn0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lock_time
  {
    size_t item_size = sizeof(ros_message.lock_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obs_info
  {
    size_t item_size = sizeof(ros_message.obs_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: n2
  {
    size_t item_size = sizeof(ros_message.n2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: type2
  {
    size_t array_size = ros_message.type2.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.type2[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
max_serialized_size_MeasEpochChannelType1(
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


  // Member: rx_channel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sv_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: misc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: code_lsb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: doppler
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: carrier_lsb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: carrier_msb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cn0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lock_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: obs_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: n2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: type2
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
      size_t inner_size =
        septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::max_serialized_size_MeasEpochChannelType2(
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
    using DataType = septentrio_gnss_driver::msg::MeasEpochChannelType1;
    is_plain =
      (
      offsetof(DataType, type2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MeasEpochChannelType1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const septentrio_gnss_driver::msg::MeasEpochChannelType1 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MeasEpochChannelType1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<septentrio_gnss_driver::msg::MeasEpochChannelType1 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MeasEpochChannelType1__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const septentrio_gnss_driver::msg::MeasEpochChannelType1 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MeasEpochChannelType1__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MeasEpochChannelType1(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MeasEpochChannelType1__callbacks = {
  "septentrio_gnss_driver::msg",
  "MeasEpochChannelType1",
  _MeasEpochChannelType1__cdr_serialize,
  _MeasEpochChannelType1__cdr_deserialize,
  _MeasEpochChannelType1__get_serialized_size,
  _MeasEpochChannelType1__max_serialized_size
};

static rosidl_message_type_support_t _MeasEpochChannelType1__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MeasEpochChannelType1__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace septentrio_gnss_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<septentrio_gnss_driver::msg::MeasEpochChannelType1>()
{
  return &septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::_MeasEpochChannelType1__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, septentrio_gnss_driver, msg, MeasEpochChannelType1)() {
  return &septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::_MeasEpochChannelType1__handle;
}

#ifdef __cplusplus
}
#endif
