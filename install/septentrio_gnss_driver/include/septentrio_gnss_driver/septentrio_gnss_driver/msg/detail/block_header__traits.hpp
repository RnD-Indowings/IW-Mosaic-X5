// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/BlockHeader.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/block_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace septentrio_gnss_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlockHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: sync_1
  {
    out << "sync_1: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_1, out);
    out << ", ";
  }

  // member: sync_2
  {
    out << "sync_2: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_2, out);
    out << ", ";
  }

  // member: crc
  {
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: revision
  {
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: wnc
  {
    out << "wnc: ";
    rosidl_generator_traits::value_to_yaml(msg.wnc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlockHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sync_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_1: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_1, out);
    out << "\n";
  }

  // member: sync_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_2: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_2, out);
    out << "\n";
  }

  // member: crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << "\n";
  }

  // member: wnc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wnc: ";
    rosidl_generator_traits::value_to_yaml(msg.wnc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockHeader & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::BlockHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::BlockHeader & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::BlockHeader>()
{
  return "septentrio_gnss_driver::msg::BlockHeader";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::BlockHeader>()
{
  return "septentrio_gnss_driver/msg/BlockHeader";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::BlockHeader>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::BlockHeader>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<septentrio_gnss_driver::msg::BlockHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__TRAITS_HPP_
