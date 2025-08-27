// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/AIMPlusStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/aim_plus_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace septentrio_gnss_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const AIMPlusStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: wnc
  {
    out << "wnc: ";
    rosidl_generator_traits::value_to_yaml(msg.wnc, out);
    out << ", ";
  }

  // member: interference
  {
    out << "interference: ";
    rosidl_generator_traits::value_to_yaml(msg.interference, out);
    out << ", ";
  }

  // member: spoofing
  {
    out << "spoofing: ";
    rosidl_generator_traits::value_to_yaml(msg.spoofing, out);
    out << ", ";
  }

  // member: osnma_authenticating
  {
    out << "osnma_authenticating: ";
    rosidl_generator_traits::value_to_yaml(msg.osnma_authenticating, out);
    out << ", ";
  }

  // member: galileo_authentic
  {
    out << "galileo_authentic: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_authentic, out);
    out << ", ";
  }

  // member: galileo_spoofed
  {
    out << "galileo_spoofed: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_spoofed, out);
    out << ", ";
  }

  // member: gps_authentic
  {
    out << "gps_authentic: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_authentic, out);
    out << ", ";
  }

  // member: gps_spoofed
  {
    out << "gps_spoofed: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_spoofed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AIMPlusStatus & msg,
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

  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << "\n";
  }

  // member: wnc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wnc: ";
    rosidl_generator_traits::value_to_yaml(msg.wnc, out);
    out << "\n";
  }

  // member: interference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interference: ";
    rosidl_generator_traits::value_to_yaml(msg.interference, out);
    out << "\n";
  }

  // member: spoofing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spoofing: ";
    rosidl_generator_traits::value_to_yaml(msg.spoofing, out);
    out << "\n";
  }

  // member: osnma_authenticating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "osnma_authenticating: ";
    rosidl_generator_traits::value_to_yaml(msg.osnma_authenticating, out);
    out << "\n";
  }

  // member: galileo_authentic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "galileo_authentic: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_authentic, out);
    out << "\n";
  }

  // member: galileo_spoofed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "galileo_spoofed: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_spoofed, out);
    out << "\n";
  }

  // member: gps_authentic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_authentic: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_authentic, out);
    out << "\n";
  }

  // member: gps_spoofed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_spoofed: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_spoofed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AIMPlusStatus & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::AIMPlusStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::AIMPlusStatus & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::AIMPlusStatus>()
{
  return "septentrio_gnss_driver::msg::AIMPlusStatus";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::AIMPlusStatus>()
{
  return "septentrio_gnss_driver/msg/AIMPlusStatus";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::AIMPlusStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::AIMPlusStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::AIMPlusStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__TRAITS_HPP_
