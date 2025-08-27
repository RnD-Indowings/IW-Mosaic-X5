// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/RFStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/rf_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_RFStatus_rfband
{
public:
  explicit Init_RFStatus_rfband(::septentrio_gnss_driver::msg::RFStatus & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::RFStatus rfband(::septentrio_gnss_driver::msg::RFStatus::_rfband_type arg)
  {
    msg_.rfband = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFStatus msg_;
};

class Init_RFStatus_flags
{
public:
  explicit Init_RFStatus_flags(::septentrio_gnss_driver::msg::RFStatus & msg)
  : msg_(msg)
  {}
  Init_RFStatus_rfband flags(::septentrio_gnss_driver::msg::RFStatus::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_RFStatus_rfband(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFStatus msg_;
};

class Init_RFStatus_sb_length
{
public:
  explicit Init_RFStatus_sb_length(::septentrio_gnss_driver::msg::RFStatus & msg)
  : msg_(msg)
  {}
  Init_RFStatus_flags sb_length(::septentrio_gnss_driver::msg::RFStatus::_sb_length_type arg)
  {
    msg_.sb_length = std::move(arg);
    return Init_RFStatus_flags(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFStatus msg_;
};

class Init_RFStatus_n
{
public:
  explicit Init_RFStatus_n(::septentrio_gnss_driver::msg::RFStatus & msg)
  : msg_(msg)
  {}
  Init_RFStatus_sb_length n(::septentrio_gnss_driver::msg::RFStatus::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_RFStatus_sb_length(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFStatus msg_;
};

class Init_RFStatus_block_header
{
public:
  explicit Init_RFStatus_block_header(::septentrio_gnss_driver::msg::RFStatus & msg)
  : msg_(msg)
  {}
  Init_RFStatus_n block_header(::septentrio_gnss_driver::msg::RFStatus::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_RFStatus_n(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFStatus msg_;
};

class Init_RFStatus_header
{
public:
  Init_RFStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RFStatus_block_header header(::septentrio_gnss_driver::msg::RFStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RFStatus_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::RFStatus>()
{
  return septentrio_gnss_driver::msg::builder::Init_RFStatus_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_STATUS__BUILDER_HPP_
