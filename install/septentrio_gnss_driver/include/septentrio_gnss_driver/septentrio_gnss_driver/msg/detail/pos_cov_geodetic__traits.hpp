// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/PosCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/pos_cov_geodetic__struct.hpp"
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
  const PosCovGeodetic & msg,
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

  // member: cov_latlat
  {
    out << "cov_latlat: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_latlat, out);
    out << ", ";
  }

  // member: cov_lonlon
  {
    out << "cov_lonlon: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_lonlon, out);
    out << ", ";
  }

  // member: cov_hgthgt
  {
    out << "cov_hgthgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_hgthgt, out);
    out << ", ";
  }

  // member: cov_bb
  {
    out << "cov_bb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_bb, out);
    out << ", ";
  }

  // member: cov_latlon
  {
    out << "cov_latlon: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_latlon, out);
    out << ", ";
  }

  // member: cov_lathgt
  {
    out << "cov_lathgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_lathgt, out);
    out << ", ";
  }

  // member: cov_latb
  {
    out << "cov_latb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_latb, out);
    out << ", ";
  }

  // member: cov_lonhgt
  {
    out << "cov_lonhgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_lonhgt, out);
    out << ", ";
  }

  // member: cov_lonb
  {
    out << "cov_lonb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_lonb, out);
    out << ", ";
  }

  // member: cov_hb
  {
    out << "cov_hb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_hb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosCovGeodetic & msg,
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

  // member: cov_latlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_latlat: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_latlat, out);
    out << "\n";
  }

  // member: cov_lonlon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_lonlon: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_lonlon, out);
    out << "\n";
  }

  // member: cov_hgthgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_hgthgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_hgthgt, out);
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

  // member: cov_latlon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_latlon: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_latlon, out);
    out << "\n";
  }

  // member: cov_lathgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_lathgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_lathgt, out);
    out << "\n";
  }

  // member: cov_latb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_latb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_latb, out);
    out << "\n";
  }

  // member: cov_lonhgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_lonhgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_lonhgt, out);
    out << "\n";
  }

  // member: cov_lonb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_lonb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_lonb, out);
    out << "\n";
  }

  // member: cov_hb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_hb: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_hb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosCovGeodetic & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::PosCovGeodetic & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::PosCovGeodetic & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::PosCovGeodetic>()
{
  return "septentrio_gnss_driver::msg::PosCovGeodetic";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::PosCovGeodetic>()
{
  return "septentrio_gnss_driver/msg/PosCovGeodetic";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::PosCovGeodetic>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::PosCovGeodetic>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::PosCovGeodetic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__TRAITS_HPP_
