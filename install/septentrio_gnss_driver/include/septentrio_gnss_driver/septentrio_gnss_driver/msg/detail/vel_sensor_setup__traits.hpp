// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/VelSensorSetup.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/vel_sensor_setup__struct.hpp"
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
  const VelSensorSetup & msg,
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

  // member: port
  {
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << ", ";
  }

  // member: lever_arm_x
  {
    out << "lever_arm_x: ";
    rosidl_generator_traits::value_to_yaml(msg.lever_arm_x, out);
    out << ", ";
  }

  // member: lever_arm_y
  {
    out << "lever_arm_y: ";
    rosidl_generator_traits::value_to_yaml(msg.lever_arm_y, out);
    out << ", ";
  }

  // member: lever_arm_z
  {
    out << "lever_arm_z: ";
    rosidl_generator_traits::value_to_yaml(msg.lever_arm_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelSensorSetup & msg,
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

  // member: port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << "\n";
  }

  // member: lever_arm_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lever_arm_x: ";
    rosidl_generator_traits::value_to_yaml(msg.lever_arm_x, out);
    out << "\n";
  }

  // member: lever_arm_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lever_arm_y: ";
    rosidl_generator_traits::value_to_yaml(msg.lever_arm_y, out);
    out << "\n";
  }

  // member: lever_arm_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lever_arm_z: ";
    rosidl_generator_traits::value_to_yaml(msg.lever_arm_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelSensorSetup & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::VelSensorSetup & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::VelSensorSetup & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::VelSensorSetup>()
{
  return "septentrio_gnss_driver::msg::VelSensorSetup";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::VelSensorSetup>()
{
  return "septentrio_gnss_driver/msg/VelSensorSetup";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::VelSensorSetup>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::VelSensorSetup>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::VelSensorSetup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__TRAITS_HPP_
