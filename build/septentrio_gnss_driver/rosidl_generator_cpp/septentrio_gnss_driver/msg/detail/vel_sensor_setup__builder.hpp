// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/VelSensorSetup.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/vel_sensor_setup__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_VelSensorSetup_lever_arm_z
{
public:
  explicit Init_VelSensorSetup_lever_arm_z(::septentrio_gnss_driver::msg::VelSensorSetup & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::VelSensorSetup lever_arm_z(::septentrio_gnss_driver::msg::VelSensorSetup::_lever_arm_z_type arg)
  {
    msg_.lever_arm_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelSensorSetup msg_;
};

class Init_VelSensorSetup_lever_arm_y
{
public:
  explicit Init_VelSensorSetup_lever_arm_y(::septentrio_gnss_driver::msg::VelSensorSetup & msg)
  : msg_(msg)
  {}
  Init_VelSensorSetup_lever_arm_z lever_arm_y(::septentrio_gnss_driver::msg::VelSensorSetup::_lever_arm_y_type arg)
  {
    msg_.lever_arm_y = std::move(arg);
    return Init_VelSensorSetup_lever_arm_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelSensorSetup msg_;
};

class Init_VelSensorSetup_lever_arm_x
{
public:
  explicit Init_VelSensorSetup_lever_arm_x(::septentrio_gnss_driver::msg::VelSensorSetup & msg)
  : msg_(msg)
  {}
  Init_VelSensorSetup_lever_arm_y lever_arm_x(::septentrio_gnss_driver::msg::VelSensorSetup::_lever_arm_x_type arg)
  {
    msg_.lever_arm_x = std::move(arg);
    return Init_VelSensorSetup_lever_arm_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelSensorSetup msg_;
};

class Init_VelSensorSetup_port
{
public:
  explicit Init_VelSensorSetup_port(::septentrio_gnss_driver::msg::VelSensorSetup & msg)
  : msg_(msg)
  {}
  Init_VelSensorSetup_lever_arm_x port(::septentrio_gnss_driver::msg::VelSensorSetup::_port_type arg)
  {
    msg_.port = std::move(arg);
    return Init_VelSensorSetup_lever_arm_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelSensorSetup msg_;
};

class Init_VelSensorSetup_block_header
{
public:
  explicit Init_VelSensorSetup_block_header(::septentrio_gnss_driver::msg::VelSensorSetup & msg)
  : msg_(msg)
  {}
  Init_VelSensorSetup_port block_header(::septentrio_gnss_driver::msg::VelSensorSetup::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_VelSensorSetup_port(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelSensorSetup msg_;
};

class Init_VelSensorSetup_header
{
public:
  Init_VelSensorSetup_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelSensorSetup_block_header header(::septentrio_gnss_driver::msg::VelSensorSetup::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelSensorSetup_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelSensorSetup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::VelSensorSetup>()
{
  return septentrio_gnss_driver::msg::builder::Init_VelSensorSetup_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_SENSOR_SETUP__BUILDER_HPP_
