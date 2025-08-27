// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/INSNavGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/ins_nav_geod__struct.hpp"
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
  const INSNavGeod & msg,
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

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: undulation
  {
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
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

  // member: latitude_std_dev
  {
    out << "latitude_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_std_dev, out);
    out << ", ";
  }

  // member: longitude_std_dev
  {
    out << "longitude_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_std_dev, out);
    out << ", ";
  }

  // member: height_std_dev
  {
    out << "height_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.height_std_dev, out);
    out << ", ";
  }

  // member: latitude_longitude_cov
  {
    out << "latitude_longitude_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_longitude_cov, out);
    out << ", ";
  }

  // member: latitude_height_cov
  {
    out << "latitude_height_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_height_cov, out);
    out << ", ";
  }

  // member: longitude_height_cov
  {
    out << "longitude_height_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_height_cov, out);
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

  // member: ve
  {
    out << "ve: ";
    rosidl_generator_traits::value_to_yaml(msg.ve, out);
    out << ", ";
  }

  // member: vn
  {
    out << "vn: ";
    rosidl_generator_traits::value_to_yaml(msg.vn, out);
    out << ", ";
  }

  // member: vu
  {
    out << "vu: ";
    rosidl_generator_traits::value_to_yaml(msg.vu, out);
    out << ", ";
  }

  // member: ve_std_dev
  {
    out << "ve_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.ve_std_dev, out);
    out << ", ";
  }

  // member: vn_std_dev
  {
    out << "vn_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vn_std_dev, out);
    out << ", ";
  }

  // member: vu_std_dev
  {
    out << "vu_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vu_std_dev, out);
    out << ", ";
  }

  // member: ve_vn_cov
  {
    out << "ve_vn_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.ve_vn_cov, out);
    out << ", ";
  }

  // member: ve_vu_cov
  {
    out << "ve_vu_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.ve_vu_cov, out);
    out << ", ";
  }

  // member: vn_vu_cov
  {
    out << "vn_vu_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.vn_vu_cov, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const INSNavGeod & msg,
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

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: undulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
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

  // member: latitude_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_std_dev, out);
    out << "\n";
  }

  // member: longitude_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_std_dev, out);
    out << "\n";
  }

  // member: height_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.height_std_dev, out);
    out << "\n";
  }

  // member: latitude_longitude_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_longitude_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_longitude_cov, out);
    out << "\n";
  }

  // member: latitude_height_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_height_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_height_cov, out);
    out << "\n";
  }

  // member: longitude_height_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_height_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_height_cov, out);
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

  // member: ve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ve: ";
    rosidl_generator_traits::value_to_yaml(msg.ve, out);
    out << "\n";
  }

  // member: vn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vn: ";
    rosidl_generator_traits::value_to_yaml(msg.vn, out);
    out << "\n";
  }

  // member: vu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vu: ";
    rosidl_generator_traits::value_to_yaml(msg.vu, out);
    out << "\n";
  }

  // member: ve_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ve_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.ve_std_dev, out);
    out << "\n";
  }

  // member: vn_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vn_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vn_std_dev, out);
    out << "\n";
  }

  // member: vu_std_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vu_std_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.vu_std_dev, out);
    out << "\n";
  }

  // member: ve_vn_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ve_vn_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.ve_vn_cov, out);
    out << "\n";
  }

  // member: ve_vu_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ve_vu_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.ve_vu_cov, out);
    out << "\n";
  }

  // member: vn_vu_cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vn_vu_cov: ";
    rosidl_generator_traits::value_to_yaml(msg.vn_vu_cov, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const INSNavGeod & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::INSNavGeod & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::INSNavGeod & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::INSNavGeod>()
{
  return "septentrio_gnss_driver::msg::INSNavGeod";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::INSNavGeod>()
{
  return "septentrio_gnss_driver/msg/INSNavGeod";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::INSNavGeod>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::INSNavGeod>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::INSNavGeod>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__TRAITS_HPP_
