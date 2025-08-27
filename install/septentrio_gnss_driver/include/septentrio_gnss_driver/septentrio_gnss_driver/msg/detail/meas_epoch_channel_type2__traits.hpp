// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace septentrio_gnss_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const MeasEpochChannelType2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: lock_time
  {
    out << "lock_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_time, out);
    out << ", ";
  }

  // member: cn0
  {
    out << "cn0: ";
    rosidl_generator_traits::value_to_yaml(msg.cn0, out);
    out << ", ";
  }

  // member: offsets_msb
  {
    out << "offsets_msb: ";
    rosidl_generator_traits::value_to_yaml(msg.offsets_msb, out);
    out << ", ";
  }

  // member: carrier_msb
  {
    out << "carrier_msb: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_msb, out);
    out << ", ";
  }

  // member: obs_info
  {
    out << "obs_info: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_info, out);
    out << ", ";
  }

  // member: code_offset_lsb
  {
    out << "code_offset_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.code_offset_lsb, out);
    out << ", ";
  }

  // member: carrier_lsb
  {
    out << "carrier_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_lsb, out);
    out << ", ";
  }

  // member: doppler_offset_lsb
  {
    out << "doppler_offset_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler_offset_lsb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MeasEpochChannelType2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: lock_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lock_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_time, out);
    out << "\n";
  }

  // member: cn0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cn0: ";
    rosidl_generator_traits::value_to_yaml(msg.cn0, out);
    out << "\n";
  }

  // member: offsets_msb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offsets_msb: ";
    rosidl_generator_traits::value_to_yaml(msg.offsets_msb, out);
    out << "\n";
  }

  // member: carrier_msb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_msb: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_msb, out);
    out << "\n";
  }

  // member: obs_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obs_info: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_info, out);
    out << "\n";
  }

  // member: code_offset_lsb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code_offset_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.code_offset_lsb, out);
    out << "\n";
  }

  // member: carrier_lsb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_lsb, out);
    out << "\n";
  }

  // member: doppler_offset_lsb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doppler_offset_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler_offset_lsb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MeasEpochChannelType2 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace septentrio_gnss_driver

namespace rosidl_generator_traits
{

[[deprecated("use septentrio_gnss_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::MeasEpochChannelType2>()
{
  return "septentrio_gnss_driver::msg::MeasEpochChannelType2";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::MeasEpochChannelType2>()
{
  return "septentrio_gnss_driver/msg/MeasEpochChannelType2";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::MeasEpochChannelType2>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::MeasEpochChannelType2>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<septentrio_gnss_driver::msg::MeasEpochChannelType2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__TRAITS_HPP_
