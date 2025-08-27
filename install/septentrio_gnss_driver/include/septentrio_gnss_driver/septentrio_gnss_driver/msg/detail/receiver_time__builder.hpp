// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/ReceiverTime.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/receiver_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_ReceiverTime_sync_level
{
public:
  explicit Init_ReceiverTime_sync_level(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::ReceiverTime sync_level(::septentrio_gnss_driver::msg::ReceiverTime::_sync_level_type arg)
  {
    msg_.sync_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_delta_ls
{
public:
  explicit Init_ReceiverTime_delta_ls(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  Init_ReceiverTime_sync_level delta_ls(::septentrio_gnss_driver::msg::ReceiverTime::_delta_ls_type arg)
  {
    msg_.delta_ls = std::move(arg);
    return Init_ReceiverTime_sync_level(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_utc_second
{
public:
  explicit Init_ReceiverTime_utc_second(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  Init_ReceiverTime_delta_ls utc_second(::septentrio_gnss_driver::msg::ReceiverTime::_utc_second_type arg)
  {
    msg_.utc_second = std::move(arg);
    return Init_ReceiverTime_delta_ls(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_utc_min
{
public:
  explicit Init_ReceiverTime_utc_min(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  Init_ReceiverTime_utc_second utc_min(::septentrio_gnss_driver::msg::ReceiverTime::_utc_min_type arg)
  {
    msg_.utc_min = std::move(arg);
    return Init_ReceiverTime_utc_second(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_utc_hour
{
public:
  explicit Init_ReceiverTime_utc_hour(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  Init_ReceiverTime_utc_min utc_hour(::septentrio_gnss_driver::msg::ReceiverTime::_utc_hour_type arg)
  {
    msg_.utc_hour = std::move(arg);
    return Init_ReceiverTime_utc_min(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_utc_day
{
public:
  explicit Init_ReceiverTime_utc_day(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  Init_ReceiverTime_utc_hour utc_day(::septentrio_gnss_driver::msg::ReceiverTime::_utc_day_type arg)
  {
    msg_.utc_day = std::move(arg);
    return Init_ReceiverTime_utc_hour(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_utc_month
{
public:
  explicit Init_ReceiverTime_utc_month(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  Init_ReceiverTime_utc_day utc_month(::septentrio_gnss_driver::msg::ReceiverTime::_utc_month_type arg)
  {
    msg_.utc_month = std::move(arg);
    return Init_ReceiverTime_utc_day(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_utc_year
{
public:
  explicit Init_ReceiverTime_utc_year(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  Init_ReceiverTime_utc_month utc_year(::septentrio_gnss_driver::msg::ReceiverTime::_utc_year_type arg)
  {
    msg_.utc_year = std::move(arg);
    return Init_ReceiverTime_utc_month(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_block_header
{
public:
  explicit Init_ReceiverTime_block_header(::septentrio_gnss_driver::msg::ReceiverTime & msg)
  : msg_(msg)
  {}
  Init_ReceiverTime_utc_year block_header(::septentrio_gnss_driver::msg::ReceiverTime::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_ReceiverTime_utc_year(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

class Init_ReceiverTime_header
{
public:
  Init_ReceiverTime_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReceiverTime_block_header header(::septentrio_gnss_driver::msg::ReceiverTime::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReceiverTime_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::ReceiverTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::ReceiverTime>()
{
  return septentrio_gnss_driver::msg::builder::Init_ReceiverTime_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RECEIVER_TIME__BUILDER_HPP_
