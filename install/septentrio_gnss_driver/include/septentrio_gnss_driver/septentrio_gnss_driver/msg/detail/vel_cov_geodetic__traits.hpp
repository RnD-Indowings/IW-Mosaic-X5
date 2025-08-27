// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/VelCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/vel_cov_geodetic__struct.hpp"
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
  const VelCovGeodetic & msg,
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

  // member: cov_vnvn
  {
    out << "cov_vnvn: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vnvn, out);
    out << ", ";
  }

  // member: cov_veve
  {
    out << "cov_veve: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_veve, out);
    out << ", ";
  }

  // member: cov_vuvu
  {
    out << "cov_vuvu: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vuvu, out);
    out << ", ";
  }

  // member: cov_dtdt
  {
    out << "cov_dtdt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_dtdt, out);
    out << ", ";
  }

  // member: cov_vnve
  {
    out << "cov_vnve: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vnve, out);
    out << ", ";
  }

  // member: cov_vnvu
  {
    out << "cov_vnvu: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vnvu, out);
    out << ", ";
  }

  // member: cov_vndt
  {
    out << "cov_vndt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vndt, out);
    out << ", ";
  }

  // member: cov_vevu
  {
    out << "cov_vevu: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vevu, out);
    out << ", ";
  }

  // member: cov_vedt
  {
    out << "cov_vedt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vedt, out);
    out << ", ";
  }

  // member: cov_vudt
  {
    out << "cov_vudt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vudt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelCovGeodetic & msg,
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

  // member: cov_vnvn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vnvn: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vnvn, out);
    out << "\n";
  }

  // member: cov_veve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_veve: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_veve, out);
    out << "\n";
  }

  // member: cov_vuvu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vuvu: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vuvu, out);
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

  // member: cov_vnve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vnve: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vnve, out);
    out << "\n";
  }

  // member: cov_vnvu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vnvu: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vnvu, out);
    out << "\n";
  }

  // member: cov_vndt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vndt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vndt, out);
    out << "\n";
  }

  // member: cov_vevu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vevu: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vevu, out);
    out << "\n";
  }

  // member: cov_vedt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vedt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vedt, out);
    out << "\n";
  }

  // member: cov_vudt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vudt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vudt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelCovGeodetic & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::VelCovGeodetic & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::VelCovGeodetic & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::VelCovGeodetic>()
{
  return "septentrio_gnss_driver::msg::VelCovGeodetic";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::VelCovGeodetic>()
{
  return "septentrio_gnss_driver/msg/VelCovGeodetic";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::VelCovGeodetic>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::VelCovGeodetic>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::VelCovGeodetic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__TRAITS_HPP_
