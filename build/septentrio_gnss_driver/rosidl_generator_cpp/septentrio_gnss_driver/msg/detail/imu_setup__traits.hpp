// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/IMUSetup.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/imu_setup__struct.hpp"
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
  const IMUSetup & msg,
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

  // member: serial_port
  {
    out << "serial_port: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_port, out);
    out << ", ";
  }

  // member: ant_lever_arm_x
  {
    out << "ant_lever_arm_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ant_lever_arm_x, out);
    out << ", ";
  }

  // member: ant_lever_arm_y
  {
    out << "ant_lever_arm_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ant_lever_arm_y, out);
    out << ", ";
  }

  // member: ant_lever_arm_z
  {
    out << "ant_lever_arm_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ant_lever_arm_z, out);
    out << ", ";
  }

  // member: theta_x
  {
    out << "theta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_x, out);
    out << ", ";
  }

  // member: theta_y
  {
    out << "theta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_y, out);
    out << ", ";
  }

  // member: theta_z
  {
    out << "theta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IMUSetup & msg,
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

  // member: serial_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_port: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_port, out);
    out << "\n";
  }

  // member: ant_lever_arm_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ant_lever_arm_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ant_lever_arm_x, out);
    out << "\n";
  }

  // member: ant_lever_arm_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ant_lever_arm_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ant_lever_arm_y, out);
    out << "\n";
  }

  // member: ant_lever_arm_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ant_lever_arm_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ant_lever_arm_z, out);
    out << "\n";
  }

  // member: theta_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_x, out);
    out << "\n";
  }

  // member: theta_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_y, out);
    out << "\n";
  }

  // member: theta_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IMUSetup & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::IMUSetup & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::IMUSetup & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::IMUSetup>()
{
  return "septentrio_gnss_driver::msg::IMUSetup";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::IMUSetup>()
{
  return "septentrio_gnss_driver/msg/IMUSetup";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::IMUSetup>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::IMUSetup>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::IMUSetup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__TRAITS_HPP_
