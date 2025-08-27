// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/AttEuler.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/att_euler__struct.hpp"
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
  const AttEuler & msg,
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

  // member: nr_sv
  {
    out << "nr_sv: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_sv, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch_dot
  {
    out << "pitch_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_dot, out);
    out << ", ";
  }

  // member: roll_dot
  {
    out << "roll_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_dot, out);
    out << ", ";
  }

  // member: heading_dot
  {
    out << "heading_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_dot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttEuler & msg,
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

  // member: nr_sv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nr_sv: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_sv, out);
    out << "\n";
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_dot, out);
    out << "\n";
  }

  // member: roll_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_dot, out);
    out << "\n";
  }

  // member: heading_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_dot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttEuler & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::AttEuler & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::AttEuler & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::AttEuler>()
{
  return "septentrio_gnss_driver::msg::AttEuler";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::AttEuler>()
{
  return "septentrio_gnss_driver/msg/AttEuler";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::AttEuler>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::AttEuler>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::AttEuler>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__TRAITS_HPP_
