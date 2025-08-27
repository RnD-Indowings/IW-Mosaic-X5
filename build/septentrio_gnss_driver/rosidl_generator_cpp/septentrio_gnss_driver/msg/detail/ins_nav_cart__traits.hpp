// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/INSNavCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/ins_nav_cart__struct.hpp"
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
  const INSNavCart & msg,
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

  // member: gnss_mode
  {
    out << "gnss_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_mode, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << ", ";
  }

  // member: gnss_age
  {
    out << "gnss_age: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_age, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: accuracy
  {
    out << "accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy, out);
    out << ", ";
  }

  // member: latency
  {
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << ", ";
  }

  // member: datum
  {
    out << "datum: ";
    rosidl_generator_traits::value_to_yaml(msg.datum, out);
    out << ", ";
  }

  // member: sb_list
  {
    out << "sb_list: ";
    rosidl_generator_traits::value_to_yaml(msg.sb_list, out);
    out << ", ";
  }

  // member: x_std_dev
  {
    out << "x_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.x_std_dev, out);
    out << ", ";
  }

  // member: y_std_dev
  {
    out << "y_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.y_std_dev, out);
    out << ", ";
  }

  // member: z_std_dev
  {
    out << "z_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.z_std_dev, out);
    out << ", ";
  }

  // member: xy_cov
  {
    out << "xy_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.xy_cov, out);
    out << ", ";
  }

  // member: xz_cov
  {
    out << "xz_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.xz_cov, out);
    out << ", ";
  }

  // member: yz_cov
  {
    out << "yz_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.yz_cov, out);
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

  // member: heading_std_dev
  {
    out << "heading_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_std_dev, out);
    out << ", ";
  }

  // member: pitch_std_dev
  {
    out << "pitch_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_std_dev, out);
    out << ", ";
  }

  // member: roll_std_dev
  {
    out << "roll_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_std_dev, out);
    out << ", ";
  }

  // member: heading_pitch_cov
  {
    out << "heading_pitch_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_pitch_cov, out);
    out << ", ";
  }

  // member: heading_roll_cov
  {
    out << "heading_roll_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_roll_cov, out);
    out << ", ";
  }

  // member: pitch_roll_cov
  {
    out << "pitch_roll_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_roll_cov, out);
    out << ", ";
  }

  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: vx_std_dev
  {
    out << "vx_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_std_dev, out);
    out << ", ";
  }

  // member: vy_std_dev
  {
    out << "vy_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_std_dev, out);
    out << ", ";
  }

  // member: vz_std_dev
  {
    out << "vz_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vz_std_dev, out);
    out << ", ";
  }

  // member: vx_vy_cov
  {
    out << "vx_vy_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_vy_cov, out);
    out << ", ";
  }

  // member: vx_vz_cov
  {
    out << "vx_vz_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_vz_cov, out);
    out << ", ";
  }

  // member: vy_vz_cov
  {
    out << "vy_vz_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_vz_cov, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const INSNavCart & msg,
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

  // member: gnss_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_mode, out);
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

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }

  // member: gnss_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_age: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_age, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy, out);
    out << "\n";
  }

  // member: latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << "\n";
  }

  // member: datum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datum: ";
    rosidl_generator_traits::value_to_yaml(msg.datum, out);
    out << "\n";
  }

  // member: sb_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sb_list: ";
    rosidl_generator_traits::value_to_yaml(msg.sb_list, out);
    out << "\n";
  }

  // member: x_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.x_std_dev, out);
    out << "\n";
  }

  // member: y_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.y_std_dev, out);
    out << "\n";
  }

  // member: z_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.z_std_dev, out);
    out << "\n";
  }

  // member: xy_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.xy_cov, out);
    out << "\n";
  }

  // member: xz_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xz_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.xz_cov, out);
    out << "\n";
  }

  // member: yz_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yz_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.yz_cov, out);
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

  // member: heading_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_std_dev, out);
    out << "\n";
  }

  // member: pitch_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_std_dev, out);
    out << "\n";
  }

  // member: roll_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_std_dev, out);
    out << "\n";
  }

  // member: heading_pitch_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_pitch_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_pitch_cov, out);
    out << "\n";
  }

  // member: heading_roll_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_roll_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_roll_cov, out);
    out << "\n";
  }

  // member: pitch_roll_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_roll_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_roll_cov, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: vx_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_std_dev, out);
    out << "\n";
  }

  // member: vy_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_std_dev, out);
    out << "\n";
  }

  // member: vz_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vz_std_dev, out);
    out << "\n";
  }

  // member: vx_vy_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_vy_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_vy_cov, out);
    out << "\n";
  }

  // member: vx_vz_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_vz_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_vz_cov, out);
    out << "\n";
  }

  // member: vy_vz_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy_vz_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_vz_cov, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const INSNavCart & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::INSNavCart & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::INSNavCart & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::INSNavCart>()
{
  return "septentrio_gnss_driver::msg::INSNavCart";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::INSNavCart>()
{
  return "septentrio_gnss_driver/msg/INSNavCart";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::INSNavCart>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::INSNavCart>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::INSNavCart>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__TRAITS_HPP_
