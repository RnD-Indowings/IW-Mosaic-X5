// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/IMUSetup.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/imu_setup__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_IMUSetup_theta_z
{
public:
  explicit Init_IMUSetup_theta_z(::septentrio_gnss_driver::msg::IMUSetup & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::IMUSetup theta_z(::septentrio_gnss_driver::msg::IMUSetup::_theta_z_type arg)
  {
    msg_.theta_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

class Init_IMUSetup_theta_y
{
public:
  explicit Init_IMUSetup_theta_y(::septentrio_gnss_driver::msg::IMUSetup & msg)
  : msg_(msg)
  {}
  Init_IMUSetup_theta_z theta_y(::septentrio_gnss_driver::msg::IMUSetup::_theta_y_type arg)
  {
    msg_.theta_y = std::move(arg);
    return Init_IMUSetup_theta_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

class Init_IMUSetup_theta_x
{
public:
  explicit Init_IMUSetup_theta_x(::septentrio_gnss_driver::msg::IMUSetup & msg)
  : msg_(msg)
  {}
  Init_IMUSetup_theta_y theta_x(::septentrio_gnss_driver::msg::IMUSetup::_theta_x_type arg)
  {
    msg_.theta_x = std::move(arg);
    return Init_IMUSetup_theta_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

class Init_IMUSetup_ant_lever_arm_z
{
public:
  explicit Init_IMUSetup_ant_lever_arm_z(::septentrio_gnss_driver::msg::IMUSetup & msg)
  : msg_(msg)
  {}
  Init_IMUSetup_theta_x ant_lever_arm_z(::septentrio_gnss_driver::msg::IMUSetup::_ant_lever_arm_z_type arg)
  {
    msg_.ant_lever_arm_z = std::move(arg);
    return Init_IMUSetup_theta_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

class Init_IMUSetup_ant_lever_arm_y
{
public:
  explicit Init_IMUSetup_ant_lever_arm_y(::septentrio_gnss_driver::msg::IMUSetup & msg)
  : msg_(msg)
  {}
  Init_IMUSetup_ant_lever_arm_z ant_lever_arm_y(::septentrio_gnss_driver::msg::IMUSetup::_ant_lever_arm_y_type arg)
  {
    msg_.ant_lever_arm_y = std::move(arg);
    return Init_IMUSetup_ant_lever_arm_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

class Init_IMUSetup_ant_lever_arm_x
{
public:
  explicit Init_IMUSetup_ant_lever_arm_x(::septentrio_gnss_driver::msg::IMUSetup & msg)
  : msg_(msg)
  {}
  Init_IMUSetup_ant_lever_arm_y ant_lever_arm_x(::septentrio_gnss_driver::msg::IMUSetup::_ant_lever_arm_x_type arg)
  {
    msg_.ant_lever_arm_x = std::move(arg);
    return Init_IMUSetup_ant_lever_arm_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

class Init_IMUSetup_serial_port
{
public:
  explicit Init_IMUSetup_serial_port(::septentrio_gnss_driver::msg::IMUSetup & msg)
  : msg_(msg)
  {}
  Init_IMUSetup_ant_lever_arm_x serial_port(::septentrio_gnss_driver::msg::IMUSetup::_serial_port_type arg)
  {
    msg_.serial_port = std::move(arg);
    return Init_IMUSetup_ant_lever_arm_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

class Init_IMUSetup_block_header
{
public:
  explicit Init_IMUSetup_block_header(::septentrio_gnss_driver::msg::IMUSetup & msg)
  : msg_(msg)
  {}
  Init_IMUSetup_serial_port block_header(::septentrio_gnss_driver::msg::IMUSetup::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_IMUSetup_serial_port(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

class Init_IMUSetup_header
{
public:
  Init_IMUSetup_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUSetup_block_header header(::septentrio_gnss_driver::msg::IMUSetup::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IMUSetup_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::IMUSetup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::IMUSetup>()
{
  return septentrio_gnss_driver::msg::builder::Init_IMUSetup_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__IMU_SETUP__BUILDER_HPP_
