// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/VectorInfoCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/vector_info_cart__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace septentrio_gnss_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const VectorInfoCart & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: misc
  {
    out << "misc: ";
    rosidl_generator_traits::value_to_yaml(msg.misc, out);
    out << ", ";
  }

  // member: delta_x
  {
    out << "delta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_x, out);
    out << ", ";
  }

  // member: delta_y
  {
    out << "delta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_y, out);
    out << ", ";
  }

  // member: delta_z
  {
    out << "delta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_z, out);
    out << ", ";
  }

  // member: delta_vx
  {
    out << "delta_vx: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vx, out);
    out << ", ";
  }

  // member: delta_vy
  {
    out << "delta_vy: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vy, out);
    out << ", ";
  }

  // member: delta_vz
  {
    out << "delta_vz: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vz, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: reference_id
  {
    out << "reference_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id, out);
    out << ", ";
  }

  // member: corr_age
  {
    out << "corr_age: ";
    rosidl_generator_traits::value_to_yaml(msg.corr_age, out);
    out << ", ";
  }

  // member: signal_info
  {
    out << "signal_info: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VectorInfoCart & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: misc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "misc: ";
    rosidl_generator_traits::value_to_yaml(msg.misc, out);
    out << "\n";
  }

  // member: delta_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_x: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_x, out);
    out << "\n";
  }

  // member: delta_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_y: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_y, out);
    out << "\n";
  }

  // member: delta_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_z, out);
    out << "\n";
  }

  // member: delta_vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_vx: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vx, out);
    out << "\n";
  }

  // member: delta_vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_vy: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vy, out);
    out << "\n";
  }

  // member: delta_vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_vz: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vz, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
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

  // member: corr_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "corr_age: ";
    rosidl_generator_traits::value_to_yaml(msg.corr_age, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VectorInfoCart & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::VectorInfoCart & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::VectorInfoCart & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::VectorInfoCart>()
{
  return "septentrio_gnss_driver::msg::VectorInfoCart";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::VectorInfoCart>()
{
  return "septentrio_gnss_driver/msg/VectorInfoCart";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::VectorInfoCart>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::VectorInfoCart>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<septentrio_gnss_driver::msg::VectorInfoCart>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__TRAITS_HPP_
