// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/vel_cov_cartesian__struct.hpp"
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
  const VelCovCartesian & msg,
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

  // member: cov_vxvx
  {
    out << "cov_vxvx: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vxvx, out);
    out << ", ";
  }

  // member: cov_vyvy
  {
    out << "cov_vyvy: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vyvy, out);
    out << ", ";
  }

  // member: cov_vzvz
  {
    out << "cov_vzvz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vzvz, out);
    out << ", ";
  }

  // member: cov_dtdt
  {
    out << "cov_dtdt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_dtdt, out);
    out << ", ";
  }

  // member: cov_vxvy
  {
    out << "cov_vxvy: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vxvy, out);
    out << ", ";
  }

  // member: cov_vxvz
  {
    out << "cov_vxvz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vxvz, out);
    out << ", ";
  }

  // member: cov_vxdt
  {
    out << "cov_vxdt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vxdt, out);
    out << ", ";
  }

  // member: cov_vyvz
  {
    out << "cov_vyvz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vyvz, out);
    out << ", ";
  }

  // member: cov_vydt
  {
    out << "cov_vydt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vydt, out);
    out << ", ";
  }

  // member: cov_vzdt
  {
    out << "cov_vzdt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vzdt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelCovCartesian & msg,
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

  // member: cov_vxvx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vxvx: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vxvx, out);
    out << "\n";
  }

  // member: cov_vyvy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vyvy: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vyvy, out);
    out << "\n";
  }

  // member: cov_vzvz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vzvz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vzvz, out);
    out << "\n";
  }

  // member: cov_dtdt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_dtdt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_dtdt, out);
    out << "\n";
  }

  // member: cov_vxvy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vxvy: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vxvy, out);
    out << "\n";
  }

  // member: cov_vxvz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vxvz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vxvz, out);
    out << "\n";
  }

  // member: cov_vxdt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vxdt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vxdt, out);
    out << "\n";
  }

  // member: cov_vyvz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vyvz: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vyvz, out);
    out << "\n";
  }

  // member: cov_vydt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vydt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vydt, out);
    out << "\n";
  }

  // member: cov_vzdt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vzdt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vzdt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelCovCartesian & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::VelCovCartesian & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::VelCovCartesian & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::VelCovCartesian>()
{
  return "septentrio_gnss_driver::msg::VelCovCartesian";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::VelCovCartesian>()
{
  return "septentrio_gnss_driver/msg/VelCovCartesian";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::VelCovCartesian>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::VelCovCartesian>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::VelCovCartesian>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__TRAITS_HPP_
