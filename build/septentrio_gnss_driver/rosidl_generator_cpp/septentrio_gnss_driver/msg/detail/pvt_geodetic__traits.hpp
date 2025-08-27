// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/PVTGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/pvt_geodetic__struct.hpp"
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
  const PVTGeodetic & msg,
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

  // member: vn
  {
    out << "vn: ";
    rosidl_generator_traits::value_to_yaml(msg.vn, out);
    out << ", ";
  }

  // member: ve
  {
    out << "ve: ";
    rosidl_generator_traits::value_to_yaml(msg.ve, out);
    out << ", ";
  }

  // member: vu
  {
    out << "vu: ";
    rosidl_generator_traits::value_to_yaml(msg.vu, out);
    out << ", ";
  }

  // member: cog
  {
    out << "cog: ";
    rosidl_generator_traits::value_to_yaml(msg.cog, out);
    out << ", ";
  }

  // member: rx_clk_bias
  {
    out << "rx_clk_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_bias, out);
    out << ", ";
  }

  // member: rx_clk_drift
  {
    out << "rx_clk_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_drift, out);
    out << ", ";
  }

  // member: time_system
  {
    out << "time_system: ";
    rosidl_generator_traits::value_to_yaml(msg.time_system, out);
    out << ", ";
  }

  // member: datum
  {
    out << "datum: ";
    rosidl_generator_traits::value_to_yaml(msg.datum, out);
    out << ", ";
  }

  // member: nr_sv
  {
    out << "nr_sv: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_sv, out);
    out << ", ";
  }

  // member: wa_corr_info
  {
    out << "wa_corr_info: ";
    rosidl_generator_traits::value_to_yaml(msg.wa_corr_info, out);
    out << ", ";
  }

  // member: reference_id
  {
    out << "reference_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id, out);
    out << ", ";
  }

  // member: mean_corr_age
  {
    out << "mean_corr_age: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_corr_age, out);
    out << ", ";
  }

  // member: signal_info
  {
    out << "signal_info: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_info, out);
    out << ", ";
  }

  // member: alert_flag
  {
    out << "alert_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_flag, out);
    out << ", ";
  }

  // member: nr_bases
  {
    out << "nr_bases: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_bases, out);
    out << ", ";
  }

  // member: ppp_info
  {
    out << "ppp_info: ";
    rosidl_generator_traits::value_to_yaml(msg.ppp_info, out);
    out << ", ";
  }

  // member: latency
  {
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << ", ";
  }

  // member: h_accuracy
  {
    out << "h_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.h_accuracy, out);
    out << ", ";
  }

  // member: v_accuracy
  {
    out << "v_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.v_accuracy, out);
    out << ", ";
  }

  // member: misc
  {
    out << "misc: ";
    rosidl_generator_traits::value_to_yaml(msg.misc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PVTGeodetic & msg,
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

  // member: vn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vn: ";
    rosidl_generator_traits::value_to_yaml(msg.vn, out);
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

  // member: vu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vu: ";
    rosidl_generator_traits::value_to_yaml(msg.vu, out);
    out << "\n";
  }

  // member: cog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cog: ";
    rosidl_generator_traits::value_to_yaml(msg.cog, out);
    out << "\n";
  }

  // member: rx_clk_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_clk_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_bias, out);
    out << "\n";
  }

  // member: rx_clk_drift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_clk_drift: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_clk_drift, out);
    out << "\n";
  }

  // member: time_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_system: ";
    rosidl_generator_traits::value_to_yaml(msg.time_system, out);
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

  // member: nr_sv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nr_sv: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_sv, out);
    out << "\n";
  }

  // member: wa_corr_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wa_corr_info: ";
    rosidl_generator_traits::value_to_yaml(msg.wa_corr_info, out);
    out << "\n";
  }

  // member: reference_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id, out);
    out << "\n";
  }

  // member: mean_corr_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_corr_age: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_corr_age, out);
    out << "\n";
  }

  // member: signal_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_info: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_info, out);
    out << "\n";
  }

  // member: alert_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_flag, out);
    out << "\n";
  }

  // member: nr_bases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nr_bases: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_bases, out);
    out << "\n";
  }

  // member: ppp_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ppp_info: ";
    rosidl_generator_traits::value_to_yaml(msg.ppp_info, out);
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

  // member: h_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.h_accuracy, out);
    out << "\n";
  }

  // member: v_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.v_accuracy, out);
    out << "\n";
  }

  // member: misc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "misc: ";
    rosidl_generator_traits::value_to_yaml(msg.misc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PVTGeodetic & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::PVTGeodetic & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::PVTGeodetic & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::PVTGeodetic>()
{
  return "septentrio_gnss_driver::msg::PVTGeodetic";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::PVTGeodetic>()
{
  return "septentrio_gnss_driver/msg/PVTGeodetic";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::PVTGeodetic>
  : std::integral_constant<bool, has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::PVTGeodetic>
  : std::integral_constant<bool, has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<septentrio_gnss_driver::msg::PVTGeodetic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__TRAITS_HPP_
