// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/ExtSensorMeas.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/ext_sensor_meas__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_ExtSensorMeas_zero_velocity_flag
{
public:
  explicit Init_ExtSensorMeas_zero_velocity_flag(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::ExtSensorMeas zero_velocity_flag(::septentrio_gnss_driver::msg::ExtSensorMeas::_zero_velocity_flag_type arg)
  {
    msg_.zero_velocity_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_sensor_temperature
{
public:
  explicit Init_ExtSensorMeas_sensor_temperature(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_zero_velocity_flag sensor_temperature(::septentrio_gnss_driver::msg::ExtSensorMeas::_sensor_temperature_type arg)
  {
    msg_.sensor_temperature = std::move(arg);
    return Init_ExtSensorMeas_zero_velocity_flag(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_std_dev_z
{
public:
  explicit Init_ExtSensorMeas_std_dev_z(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_sensor_temperature std_dev_z(::septentrio_gnss_driver::msg::ExtSensorMeas::_std_dev_z_type arg)
  {
    msg_.std_dev_z = std::move(arg);
    return Init_ExtSensorMeas_sensor_temperature(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_std_dev_y
{
public:
  explicit Init_ExtSensorMeas_std_dev_y(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_std_dev_z std_dev_y(::septentrio_gnss_driver::msg::ExtSensorMeas::_std_dev_y_type arg)
  {
    msg_.std_dev_y = std::move(arg);
    return Init_ExtSensorMeas_std_dev_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_std_dev_x
{
public:
  explicit Init_ExtSensorMeas_std_dev_x(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_std_dev_y std_dev_x(::septentrio_gnss_driver::msg::ExtSensorMeas::_std_dev_x_type arg)
  {
    msg_.std_dev_x = std::move(arg);
    return Init_ExtSensorMeas_std_dev_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_velocity_z
{
public:
  explicit Init_ExtSensorMeas_velocity_z(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_std_dev_x velocity_z(::septentrio_gnss_driver::msg::ExtSensorMeas::_velocity_z_type arg)
  {
    msg_.velocity_z = std::move(arg);
    return Init_ExtSensorMeas_std_dev_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_velocity_y
{
public:
  explicit Init_ExtSensorMeas_velocity_y(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_velocity_z velocity_y(::septentrio_gnss_driver::msg::ExtSensorMeas::_velocity_y_type arg)
  {
    msg_.velocity_y = std::move(arg);
    return Init_ExtSensorMeas_velocity_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_velocity_x
{
public:
  explicit Init_ExtSensorMeas_velocity_x(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_velocity_y velocity_x(::septentrio_gnss_driver::msg::ExtSensorMeas::_velocity_x_type arg)
  {
    msg_.velocity_x = std::move(arg);
    return Init_ExtSensorMeas_velocity_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_angular_rate_z
{
public:
  explicit Init_ExtSensorMeas_angular_rate_z(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_velocity_x angular_rate_z(::septentrio_gnss_driver::msg::ExtSensorMeas::_angular_rate_z_type arg)
  {
    msg_.angular_rate_z = std::move(arg);
    return Init_ExtSensorMeas_velocity_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_angular_rate_y
{
public:
  explicit Init_ExtSensorMeas_angular_rate_y(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_angular_rate_z angular_rate_y(::septentrio_gnss_driver::msg::ExtSensorMeas::_angular_rate_y_type arg)
  {
    msg_.angular_rate_y = std::move(arg);
    return Init_ExtSensorMeas_angular_rate_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_angular_rate_x
{
public:
  explicit Init_ExtSensorMeas_angular_rate_x(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_angular_rate_y angular_rate_x(::septentrio_gnss_driver::msg::ExtSensorMeas::_angular_rate_x_type arg)
  {
    msg_.angular_rate_x = std::move(arg);
    return Init_ExtSensorMeas_angular_rate_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_acceleration_z
{
public:
  explicit Init_ExtSensorMeas_acceleration_z(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_angular_rate_x acceleration_z(::septentrio_gnss_driver::msg::ExtSensorMeas::_acceleration_z_type arg)
  {
    msg_.acceleration_z = std::move(arg);
    return Init_ExtSensorMeas_angular_rate_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_acceleration_y
{
public:
  explicit Init_ExtSensorMeas_acceleration_y(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_acceleration_z acceleration_y(::septentrio_gnss_driver::msg::ExtSensorMeas::_acceleration_y_type arg)
  {
    msg_.acceleration_y = std::move(arg);
    return Init_ExtSensorMeas_acceleration_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_acceleration_x
{
public:
  explicit Init_ExtSensorMeas_acceleration_x(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_acceleration_y acceleration_x(::septentrio_gnss_driver::msg::ExtSensorMeas::_acceleration_x_type arg)
  {
    msg_.acceleration_x = std::move(arg);
    return Init_ExtSensorMeas_acceleration_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_obs_info
{
public:
  explicit Init_ExtSensorMeas_obs_info(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_acceleration_x obs_info(::septentrio_gnss_driver::msg::ExtSensorMeas::_obs_info_type arg)
  {
    msg_.obs_info = std::move(arg);
    return Init_ExtSensorMeas_acceleration_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_type
{
public:
  explicit Init_ExtSensorMeas_type(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_obs_info type(::septentrio_gnss_driver::msg::ExtSensorMeas::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ExtSensorMeas_obs_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_sensor_model
{
public:
  explicit Init_ExtSensorMeas_sensor_model(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_type sensor_model(::septentrio_gnss_driver::msg::ExtSensorMeas::_sensor_model_type arg)
  {
    msg_.sensor_model = std::move(arg);
    return Init_ExtSensorMeas_type(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_source
{
public:
  explicit Init_ExtSensorMeas_source(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_sensor_model source(::septentrio_gnss_driver::msg::ExtSensorMeas::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_ExtSensorMeas_sensor_model(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_sb_length
{
public:
  explicit Init_ExtSensorMeas_sb_length(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_source sb_length(::septentrio_gnss_driver::msg::ExtSensorMeas::_sb_length_type arg)
  {
    msg_.sb_length = std::move(arg);
    return Init_ExtSensorMeas_source(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_n
{
public:
  explicit Init_ExtSensorMeas_n(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_sb_length n(::septentrio_gnss_driver::msg::ExtSensorMeas::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_ExtSensorMeas_sb_length(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_block_header
{
public:
  explicit Init_ExtSensorMeas_block_header(::septentrio_gnss_driver::msg::ExtSensorMeas & msg)
  : msg_(msg)
  {}
  Init_ExtSensorMeas_n block_header(::septentrio_gnss_driver::msg::ExtSensorMeas::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_ExtSensorMeas_n(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

class Init_ExtSensorMeas_header
{
public:
  Init_ExtSensorMeas_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExtSensorMeas_block_header header(::septentrio_gnss_driver::msg::ExtSensorMeas::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExtSensorMeas_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ExtSensorMeas msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::ExtSensorMeas>()
{
  return septentrio_gnss_driver::msg::builder::Init_ExtSensorMeas_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__EXT_SENSOR_MEAS__BUILDER_HPP_
