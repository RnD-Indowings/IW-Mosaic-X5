// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/AIMPlusStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/aim_plus_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_AIMPlusStatus_gps_spoofed
{
public:
  explicit Init_AIMPlusStatus_gps_spoofed(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::AIMPlusStatus gps_spoofed(::septentrio_gnss_driver::msg::AIMPlusStatus::_gps_spoofed_type arg)
  {
    msg_.gps_spoofed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_gps_authentic
{
public:
  explicit Init_AIMPlusStatus_gps_authentic(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  Init_AIMPlusStatus_gps_spoofed gps_authentic(::septentrio_gnss_driver::msg::AIMPlusStatus::_gps_authentic_type arg)
  {
    msg_.gps_authentic = std::move(arg);
    return Init_AIMPlusStatus_gps_spoofed(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_galileo_spoofed
{
public:
  explicit Init_AIMPlusStatus_galileo_spoofed(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  Init_AIMPlusStatus_gps_authentic galileo_spoofed(::septentrio_gnss_driver::msg::AIMPlusStatus::_galileo_spoofed_type arg)
  {
    msg_.galileo_spoofed = std::move(arg);
    return Init_AIMPlusStatus_gps_authentic(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_galileo_authentic
{
public:
  explicit Init_AIMPlusStatus_galileo_authentic(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  Init_AIMPlusStatus_galileo_spoofed galileo_authentic(::septentrio_gnss_driver::msg::AIMPlusStatus::_galileo_authentic_type arg)
  {
    msg_.galileo_authentic = std::move(arg);
    return Init_AIMPlusStatus_galileo_spoofed(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_osnma_authenticating
{
public:
  explicit Init_AIMPlusStatus_osnma_authenticating(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  Init_AIMPlusStatus_galileo_authentic osnma_authenticating(::septentrio_gnss_driver::msg::AIMPlusStatus::_osnma_authenticating_type arg)
  {
    msg_.osnma_authenticating = std::move(arg);
    return Init_AIMPlusStatus_galileo_authentic(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_spoofing
{
public:
  explicit Init_AIMPlusStatus_spoofing(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  Init_AIMPlusStatus_osnma_authenticating spoofing(::septentrio_gnss_driver::msg::AIMPlusStatus::_spoofing_type arg)
  {
    msg_.spoofing = std::move(arg);
    return Init_AIMPlusStatus_osnma_authenticating(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_interference
{
public:
  explicit Init_AIMPlusStatus_interference(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  Init_AIMPlusStatus_spoofing interference(::septentrio_gnss_driver::msg::AIMPlusStatus::_interference_type arg)
  {
    msg_.interference = std::move(arg);
    return Init_AIMPlusStatus_spoofing(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_wnc
{
public:
  explicit Init_AIMPlusStatus_wnc(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  Init_AIMPlusStatus_interference wnc(::septentrio_gnss_driver::msg::AIMPlusStatus::_wnc_type arg)
  {
    msg_.wnc = std::move(arg);
    return Init_AIMPlusStatus_interference(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_tow
{
public:
  explicit Init_AIMPlusStatus_tow(::septentrio_gnss_driver::msg::AIMPlusStatus & msg)
  : msg_(msg)
  {}
  Init_AIMPlusStatus_wnc tow(::septentrio_gnss_driver::msg::AIMPlusStatus::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_AIMPlusStatus_wnc(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

class Init_AIMPlusStatus_header
{
public:
  Init_AIMPlusStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AIMPlusStatus_tow header(::septentrio_gnss_driver::msg::AIMPlusStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AIMPlusStatus_tow(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AIMPlusStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::AIMPlusStatus>()
{
  return septentrio_gnss_driver::msg::builder::Init_AIMPlusStatus_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__AIM_PLUS_STATUS__BUILDER_HPP_
