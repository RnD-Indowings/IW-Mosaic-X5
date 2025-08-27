// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/GALAuthStatus.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/gal_auth_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_GALAuthStatus_gps_authentic_mask
{
public:
  explicit Init_GALAuthStatus_gps_authentic_mask(::septentrio_gnss_driver::msg::GALAuthStatus & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::GALAuthStatus gps_authentic_mask(::septentrio_gnss_driver::msg::GALAuthStatus::_gps_authentic_mask_type arg)
  {
    msg_.gps_authentic_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::GALAuthStatus msg_;
};

class Init_GALAuthStatus_gps_active_mask
{
public:
  explicit Init_GALAuthStatus_gps_active_mask(::septentrio_gnss_driver::msg::GALAuthStatus & msg)
  : msg_(msg)
  {}
  Init_GALAuthStatus_gps_authentic_mask gps_active_mask(::septentrio_gnss_driver::msg::GALAuthStatus::_gps_active_mask_type arg)
  {
    msg_.gps_active_mask = std::move(arg);
    return Init_GALAuthStatus_gps_authentic_mask(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::GALAuthStatus msg_;
};

class Init_GALAuthStatus_gal_authentic_mask
{
public:
  explicit Init_GALAuthStatus_gal_authentic_mask(::septentrio_gnss_driver::msg::GALAuthStatus & msg)
  : msg_(msg)
  {}
  Init_GALAuthStatus_gps_active_mask gal_authentic_mask(::septentrio_gnss_driver::msg::GALAuthStatus::_gal_authentic_mask_type arg)
  {
    msg_.gal_authentic_mask = std::move(arg);
    return Init_GALAuthStatus_gps_active_mask(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::GALAuthStatus msg_;
};

class Init_GALAuthStatus_gal_active_mask
{
public:
  explicit Init_GALAuthStatus_gal_active_mask(::septentrio_gnss_driver::msg::GALAuthStatus & msg)
  : msg_(msg)
  {}
  Init_GALAuthStatus_gal_authentic_mask gal_active_mask(::septentrio_gnss_driver::msg::GALAuthStatus::_gal_active_mask_type arg)
  {
    msg_.gal_active_mask = std::move(arg);
    return Init_GALAuthStatus_gal_authentic_mask(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::GALAuthStatus msg_;
};

class Init_GALAuthStatus_trusted_time_delta
{
public:
  explicit Init_GALAuthStatus_trusted_time_delta(::septentrio_gnss_driver::msg::GALAuthStatus & msg)
  : msg_(msg)
  {}
  Init_GALAuthStatus_gal_active_mask trusted_time_delta(::septentrio_gnss_driver::msg::GALAuthStatus::_trusted_time_delta_type arg)
  {
    msg_.trusted_time_delta = std::move(arg);
    return Init_GALAuthStatus_gal_active_mask(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::GALAuthStatus msg_;
};

class Init_GALAuthStatus_osnma_status
{
public:
  explicit Init_GALAuthStatus_osnma_status(::septentrio_gnss_driver::msg::GALAuthStatus & msg)
  : msg_(msg)
  {}
  Init_GALAuthStatus_trusted_time_delta osnma_status(::septentrio_gnss_driver::msg::GALAuthStatus::_osnma_status_type arg)
  {
    msg_.osnma_status = std::move(arg);
    return Init_GALAuthStatus_trusted_time_delta(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::GALAuthStatus msg_;
};

class Init_GALAuthStatus_block_header
{
public:
  explicit Init_GALAuthStatus_block_header(::septentrio_gnss_driver::msg::GALAuthStatus & msg)
  : msg_(msg)
  {}
  Init_GALAuthStatus_osnma_status block_header(::septentrio_gnss_driver::msg::GALAuthStatus::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_GALAuthStatus_osnma_status(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::GALAuthStatus msg_;
};

class Init_GALAuthStatus_header
{
public:
  Init_GALAuthStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GALAuthStatus_block_header header(::septentrio_gnss_driver::msg::GALAuthStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GALAuthStatus_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::GALAuthStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::GALAuthStatus>()
{
  return septentrio_gnss_driver::msg::builder::Init_GALAuthStatus_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__GAL_AUTH_STATUS__BUILDER_HPP_
