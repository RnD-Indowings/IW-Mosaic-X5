// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/AttCovEuler.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/att_cov_euler__struct.hpp"
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
  const AttCovEuler & msg,
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

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: cov_headhead
  {
    out << "cov_headhead: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_headhead, out);
    out << ", ";
  }

  // member: cov_pitchpitch
  {
    out << "cov_pitchpitch: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_pitchpitch, out);
    out << ", ";
  }

  // member: cov_rollroll
  {
    out << "cov_rollroll: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_rollroll, out);
    out << ", ";
  }

  // member: cov_headpitch
  {
    out << "cov_headpitch: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_headpitch, out);
    out << ", ";
  }

  // member: cov_headroll
  {
    out << "cov_headroll: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_headroll, out);
    out << ", ";
  }

  // member: cov_pitchroll
  {
    out << "cov_pitchroll: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_pitchroll, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttCovEuler & msg,
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

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: cov_headhead
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_headhead: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_headhead, out);
    out << "\n";
  }

  // member: cov_pitchpitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_pitchpitch: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_pitchpitch, out);
    out << "\n";
  }

  // member: cov_rollroll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_rollroll: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_rollroll, out);
    out << "\n";
  }

  // member: cov_headpitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_headpitch: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_headpitch, out);
    out << "\n";
  }

  // member: cov_headroll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_headroll: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_headroll, out);
    out << "\n";
  }

  // member: cov_pitchroll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_pitchroll: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_pitchroll, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttCovEuler & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::AttCovEuler & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::AttCovEuler & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::AttCovEuler>()
{
  return "septentrio_gnss_driver::msg::AttCovEuler";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::AttCovEuler>()
{
  return "septentrio_gnss_driver/msg/AttCovEuler";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::AttCovEuler>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::AttCovEuler>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::AttCovEuler>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__TRAITS_HPP_
