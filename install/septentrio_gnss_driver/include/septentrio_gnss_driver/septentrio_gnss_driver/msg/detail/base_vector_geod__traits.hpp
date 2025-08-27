// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/BaseVectorGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/base_vector_geod__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'block_header'
#include "septentrio_gnss_driver/msg/detail/block_header__traits.hpp"
// Member 'vector_info_geod'
#include "septentrio_gnss_driver/msg/detail/vector_info_geod__traits.hpp"

namespace septentrio_gnss_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const BaseVectorGeod & msg,
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

  // member: n
  {
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << ", ";
  }

  // member: sb_length
  {
    out << "sb_length: ";
    rosidl_generator_traits::value_to_yaml(msg.sb_length, out);
    out << ", ";
  }

  // member: vector_info_geod
  {
    if (msg.vector_info_geod.size() == 0) {
      out << "vector_info_geod: []";
    } else {
      out << "vector_info_geod: [";
      size_t pending_items = msg.vector_info_geod.size();
      for (auto item : msg.vector_info_geod) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BaseVectorGeod & msg,
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

  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << "\n";
  }

  // member: sb_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sb_length: ";
    rosidl_generator_traits::value_to_yaml(msg.sb_length, out);
    out << "\n";
  }

  // member: vector_info_geod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vector_info_geod.size() == 0) {
      out << "vector_info_geod: []\n";
    } else {
      out << "vector_info_geod:\n";
      for (auto item : msg.vector_info_geod) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BaseVectorGeod & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::BaseVectorGeod & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::BaseVectorGeod & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::BaseVectorGeod>()
{
  return "septentrio_gnss_driver::msg::BaseVectorGeod";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::BaseVectorGeod>()
{
  return "septentrio_gnss_driver/msg/BaseVectorGeod";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::BaseVectorGeod>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::BaseVectorGeod>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<septentrio_gnss_driver::msg::BaseVectorGeod>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__TRAITS_HPP_
