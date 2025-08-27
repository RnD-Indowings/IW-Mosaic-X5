// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from septentrio_gnss_driver:msg/ExtSensorMeas.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__TRAITS_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "septentrio_gnss_driver/msg/detail/ext_sensor_meas__struct.hpp"
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
  const ExtSensorMeas & msg,
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

  // member: source
  {
    if (msg.source.size() == 0) {
      out << "source: []";
    } else {
      out << "source: [";
      size_t pending_items = msg.source.size();
      for (auto item : msg.source) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sensor_model
  {
    if (msg.sensor_model.size() == 0) {
      out << "sensor_model: []";
    } else {
      out << "sensor_model: [";
      size_t pending_items = msg.sensor_model.size();
      for (auto item : msg.sensor_model) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: type
  {
    if (msg.type.size() == 0) {
      out << "type: []";
    } else {
      out << "type: [";
      size_t pending_items = msg.type.size();
      for (auto item : msg.type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obs_info
  {
    if (msg.obs_info.size() == 0) {
      out << "obs_info: []";
    } else {
      out << "obs_info: [";
      size_t pending_items = msg.obs_info.size();
      for (auto item : msg.obs_info) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration_x
  {
    out << "acceleration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_x, out);
    out << ", ";
  }

  // member: acceleration_y
  {
    out << "acceleration_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_y, out);
    out << ", ";
  }

  // member: acceleration_z
  {
    out << "acceleration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_z, out);
    out << ", ";
  }

  // member: angular_rate_x
  {
    out << "angular_rate_x: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_x, out);
    out << ", ";
  }

  // member: angular_rate_y
  {
    out << "angular_rate_y: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_y, out);
    out << ", ";
  }

  // member: angular_rate_z
  {
    out << "angular_rate_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_z, out);
    out << ", ";
  }

  // member: velocity_x
  {
    out << "velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_x, out);
    out << ", ";
  }

  // member: velocity_y
  {
    out << "velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_y, out);
    out << ", ";
  }

  // member: velocity_z
  {
    out << "velocity_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_z, out);
    out << ", ";
  }

  // member: std_dev_x
  {
    out << "std_dev_x: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev_x, out);
    out << ", ";
  }

  // member: std_dev_y
  {
    out << "std_dev_y: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev_y, out);
    out << ", ";
  }

  // member: std_dev_z
  {
    out << "std_dev_z: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev_z, out);
    out << ", ";
  }

  // member: sensor_temperature
  {
    out << "sensor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_temperature, out);
    out << ", ";
  }

  // member: zero_velocity_flag
  {
    out << "zero_velocity_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.zero_velocity_flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExtSensorMeas & msg,
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

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.source.size() == 0) {
      out << "source: []\n";
    } else {
      out << "source:\n";
      for (auto item : msg.source) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sensor_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_model.size() == 0) {
      out << "sensor_model: []\n";
    } else {
      out << "sensor_model:\n";
      for (auto item : msg.sensor_model) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.type.size() == 0) {
      out << "type: []\n";
    } else {
      out << "type:\n";
      for (auto item : msg.type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: obs_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obs_info.size() == 0) {
      out << "obs_info: []\n";
    } else {
      out << "obs_info:\n";
      for (auto item : msg.obs_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_x, out);
    out << "\n";
  }

  // member: acceleration_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_y, out);
    out << "\n";
  }

  // member: acceleration_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_z, out);
    out << "\n";
  }

  // member: angular_rate_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate_x: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_x, out);
    out << "\n";
  }

  // member: angular_rate_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate_y: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_y, out);
    out << "\n";
  }

  // member: angular_rate_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_z, out);
    out << "\n";
  }

  // member: velocity_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_x, out);
    out << "\n";
  }

  // member: velocity_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_y, out);
    out << "\n";
  }

  // member: velocity_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_z: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_z, out);
    out << "\n";
  }

  // member: std_dev_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_x: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev_x, out);
    out << "\n";
  }

  // member: std_dev_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_y: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev_y, out);
    out << "\n";
  }

  // member: std_dev_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_z: ";
    rosidl_generator_traits::value_to_yaml(msg.std_dev_z, out);
    out << "\n";
  }

  // member: sensor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_temperature, out);
    out << "\n";
  }

  // member: zero_velocity_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zero_velocity_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.zero_velocity_flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExtSensorMeas & msg, bool use_flow_style = false)
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
  const septentrio_gnss_driver::msg::ExtSensorMeas & msg,
  std::ostream & out, size_t indentation = 0)
{
  septentrio_gnss_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use septentrio_gnss_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const septentrio_gnss_driver::msg::ExtSensorMeas & msg)
{
  return septentrio_gnss_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<septentrio_gnss_driver::msg::ExtSensorMeas>()
{
  return "septentrio_gnss_driver::msg::ExtSensorMeas";
}

template<>
inline const char * name<septentrio_gnss_driver::msg::ExtSensorMeas>()
{
  return "septentrio_gnss_driver/msg/ExtSensorMeas";
}

template<>
struct has_fixed_size<septentrio_gnss_driver::msg::ExtSensorMeas>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<septentrio_gnss_driver::msg::ExtSensorMeas>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<septentrio_gnss_driver::msg::ExtSensorMeas>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__TRAITS_HPP_
