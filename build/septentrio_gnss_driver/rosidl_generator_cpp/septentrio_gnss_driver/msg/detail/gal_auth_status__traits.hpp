// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/GALAuthStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/gal_auth_status__struct.hpp"
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
  const GALAuthStatus & msg,
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

  // member: osnma_status
  {
    out << "osnma_status: ";
    rosidl_generator_traits::value_to_yaml(msg.osnma_status, out);
    out << ", ";
  }

  // member: trusted_time_delta
  {
    out << "trusted_time_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.trusted_time_delta, out);
    out << ", ";
  }

  // member: gal_active_mask
  {
    out << "gal_active_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_active_mask, out);
    out << ", ";
  }

  // member: gal_authentic_mask
  {
    out << "gal_authentic_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_authentic_mask, out);
    out << ", ";
  }

  // member: gps_active_mask
  {
    out << "gps_active_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_active_mask, out);
    out << ", ";
  }

  // member: gps_authentic_mask
  {
    out << "gps_authentic_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_authentic_mask, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GALAuthStatus & msg,
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

  // member: osnma_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "osnma_status: ";
    rosidl_generator_traits::value_to_yaml(msg.osnma_status, out);
    out << "\n";
  }

  // member: trusted_time_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trusted_time_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.trusted_time_delta, out);
    out << "\n";
  }

  // member: gal_active_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gal_active_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_active_mask, out);
    out << "\n";
  }

  // member: gal_authentic_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gal_authentic_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_authentic_mask, out);
    out << "\n";
  }

  // member: gps_active_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_active_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_active_mask, out);
    out << "\n";
  }

  // member: gps_authentic_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_authentic_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_authentic_mask, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GALAuthStatus & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::GALAuthStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::GALAuthStatus & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::GALAuthStatus>()
{
  return "septentrio_gnss_driver::msg::GALAuthStatus";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::GALAuthStatus>()
{
  return "septentrio_gnss_driver/msg/GALAuthStatus";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::GALAuthStatus>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::GALAuthStatus>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::GALAuthStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__TRAITS_HPP_
