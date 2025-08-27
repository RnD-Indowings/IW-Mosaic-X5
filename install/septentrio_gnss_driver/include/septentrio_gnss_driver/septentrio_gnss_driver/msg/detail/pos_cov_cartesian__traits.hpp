// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/PosCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/pos_cov_cartesian__struct.hpp"
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
  const PosCovCartesian & msg,
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

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: cov_xx
  {
    out << "cov_xx: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_xx, out);
    out << ", ";
  }

  // member: cov_yy
  {
    out << "cov_yy: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yy, out);
    out << ", ";
  }

  // member: cov_zz
  {
    out << "cov_zz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_zz, out);
    out << ", ";
  }

  // member: cov_bb
  {
    out << "cov_bb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_bb, out);
    out << ", ";
  }

  // member: cov_xy
  {
    out << "cov_xy: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_xy, out);
    out << ", ";
  }

  // member: cov_xz
  {
    out << "cov_xz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_xz, out);
    out << ", ";
  }

  // member: cov_xb
  {
    out << "cov_xb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_xb, out);
    out << ", ";
  }

  // member: cov_yz
  {
    out << "cov_yz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yz, out);
    out << ", ";
  }

  // member: cov_yb
  {
    out << "cov_yb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yb, out);
    out << ", ";
  }

  // member: cov_zb
  {
    out << "cov_zb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_zb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosCovCartesian & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
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

  // member: cov_xx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_xx: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_xx, out);
    out << "\n";
  }

  // member: cov_yy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_yy: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yy, out);
    out << "\n";
  }

  // member: cov_zz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_zz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_zz, out);
    out << "\n";
  }

  // member: cov_bb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_bb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_bb, out);
    out << "\n";
  }

  // member: cov_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_xy: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_xy, out);
    out << "\n";
  }

  // member: cov_xz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_xz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_xz, out);
    out << "\n";
  }

  // member: cov_xb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_xb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_xb, out);
    out << "\n";
  }

  // member: cov_yz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_yz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yz, out);
    out << "\n";
  }

  // member: cov_yb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_yb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_yb, out);
    out << "\n";
  }

  // member: cov_zb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_zb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_zb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosCovCartesian & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::PosCovCartesian & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::PosCovCartesian & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::PosCovCartesian>()
{
  return "septentrio_gnss_driver::msg::PosCovCartesian";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::PosCovCartesian>()
{
  return "septentrio_gnss_driver/msg/PosCovCartesian";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::PosCovCartesian>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::PosCovCartesian>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::PosCovCartesian>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__TRAITS_HPP_
