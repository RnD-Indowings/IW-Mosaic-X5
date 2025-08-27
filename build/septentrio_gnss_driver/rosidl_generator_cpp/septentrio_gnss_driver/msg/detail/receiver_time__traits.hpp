// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/ReceiverTime.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/receiver_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'block_header'
#include "septentrio_gnss_driver/msg/detail/block_header__traits.hpp"

namespace septentrio_gnss_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReceiverTime & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: block_header
  {
    out << "block_header: ";
    to_flow_style_yaml(msg.block_header, out);
    out << ", ";
  }

  // member: utc_year
  {
    out << "utc_year: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_year, out);
    out << ", ";
  }

  // member: utc_month
  {
    out << "utc_month: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_month, out);
    out << ", ";
  }

  // member: utc_day
  {
    out << "utc_day: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_day, out);
    out << ", ";
  }

  // member: utc_hour
  {
    out << "utc_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_hour, out);
    out << ", ";
  }

  // member: utc_min
  {
    out << "utc_min: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_min, out);
    out << ", ";
  }

  // member: utc_second
  {
    out << "utc_second: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_second, out);
    out << ", ";
  }

  // member: delta_ls
  {
    out << "delta_ls: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_ls, out);
    out << ", ";
  }

  // member: sync_level
  {
    out << "sync_level: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReceiverTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: block_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block_header:\n";
    to_block_style_yaml(msg.block_header, out, indentation + 2);
  }

  // member: utc_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_year: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_year, out);
    out << "\n";
  }

  // member: utc_month
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_month: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_month, out);
    out << "\n";
  }

  // member: utc_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_day: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_day, out);
    out << "\n";
  }

  // member: utc_hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_hour, out);
    out << "\n";
  }

  // member: utc_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_min: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_min, out);
    out << "\n";
  }

  // member: utc_second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_second: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_second, out);
    out << "\n";
  }

  // member: delta_ls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_ls: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_ls, out);
    out << "\n";
  }

  // member: sync_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_level: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReceiverTime & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::ReceiverTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::ReceiverTime & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::ReceiverTime>()
{
  return "septentrio_gnss_driver::msg::ReceiverTime";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::ReceiverTime>()
{
  return "septentrio_gnss_driver/msg/ReceiverTime";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::ReceiverTime>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::ReceiverTime>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::ReceiverTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__TRAITS_HPP_
