// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type2'
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__traits.hpp"

namespace septentrio_gnss_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const MeasEpochChannelType1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: rx_channel
  {
    out << "rx_channel: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_channel, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: sv_id
  {
    out << "sv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_id, out);
    out << ", ";
  }

  // member: misc
  {
    out << "misc: ";
    rosidl_generator_traits::value_to_yaml(msg.misc, out);
    out << ", ";
  }

  // member: code_lsb
  {
    out << "code_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.code_lsb, out);
    out << ", ";
  }

  // member: doppler
  {
    out << "doppler: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler, out);
    out << ", ";
  }

  // member: carrier_lsb
  {
    out << "carrier_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_lsb, out);
    out << ", ";
  }

  // member: carrier_msb
  {
    out << "carrier_msb: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_msb, out);
    out << ", ";
  }

  // member: cn0
  {
    out << "cn0: ";
    rosidl_generator_traits::value_to_yaml(msg.cn0, out);
    out << ", ";
  }

  // member: lock_time
  {
    out << "lock_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_time, out);
    out << ", ";
  }

  // member: obs_info
  {
    out << "obs_info: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_info, out);
    out << ", ";
  }

  // member: n2
  {
    out << "n2: ";
    rosidl_generator_traits::value_to_yaml(msg.n2, out);
    out << ", ";
  }

  // member: type2
  {
    if (msg.type2.size() == 0) {
      out << "type2: []";
    } else {
      out << "type2: [";
      size_t pending_items = msg.type2.size();
      for (auto item : msg.type2) {
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
  const MeasEpochChannelType1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rx_channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_channel: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_channel, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: sv_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sv_id, out);
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

  // member: code_lsb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.code_lsb, out);
    out << "\n";
  }

  // member: doppler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doppler: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler, out);
    out << "\n";
  }

  // member: carrier_lsb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_lsb, out);
    out << "\n";
  }

  // member: carrier_msb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_msb: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_msb, out);
    out << "\n";
  }

  // member: cn0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cn0: ";
    rosidl_generator_traits::value_to_yaml(msg.cn0, out);
    out << "\n";
  }

  // member: lock_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lock_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lock_time, out);
    out << "\n";
  }

  // member: obs_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obs_info: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_info, out);
    out << "\n";
  }

  // member: n2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n2: ";
    rosidl_generator_traits::value_to_yaml(msg.n2, out);
    out << "\n";
  }

  // member: type2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.type2.size() == 0) {
      out << "type2: []\n";
    } else {
      out << "type2:\n";
      for (auto item : msg.type2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MeasEpochChannelType1 & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::MeasEpochChannelType1>()
{
  return "septentrio_gnss_driver::msg::MeasEpochChannelType1";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::MeasEpochChannelType1>()
{
  return "septentrio_gnss_driver/msg/MeasEpochChannelType1";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::MeasEpochChannelType1>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::MeasEpochChannelType1>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<septentrio_gnss_driver::msg::MeasEpochChannelType1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__TRAITS_HPP_
