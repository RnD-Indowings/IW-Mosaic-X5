// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/AttCovEuler.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/att_cov_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_AttCovEuler_cov_pitchroll
{
public:
  explicit Init_AttCovEuler_cov_pitchroll(::septentrio_gnss_driver::msg::AttCovEuler & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::AttCovEuler cov_pitchroll(::septentrio_gnss_driver::msg::AttCovEuler::_cov_pitchroll_type arg)
  {
    msg_.cov_pitchroll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

class Init_AttCovEuler_cov_headroll
{
public:
  explicit Init_AttCovEuler_cov_headroll(::septentrio_gnss_driver::msg::AttCovEuler & msg)
  : msg_(msg)
  {}
  Init_AttCovEuler_cov_pitchroll cov_headroll(::septentrio_gnss_driver::msg::AttCovEuler::_cov_headroll_type arg)
  {
    msg_.cov_headroll = std::move(arg);
    return Init_AttCovEuler_cov_pitchroll(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

class Init_AttCovEuler_cov_headpitch
{
public:
  explicit Init_AttCovEuler_cov_headpitch(::septentrio_gnss_driver::msg::AttCovEuler & msg)
  : msg_(msg)
  {}
  Init_AttCovEuler_cov_headroll cov_headpitch(::septentrio_gnss_driver::msg::AttCovEuler::_cov_headpitch_type arg)
  {
    msg_.cov_headpitch = std::move(arg);
    return Init_AttCovEuler_cov_headroll(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

class Init_AttCovEuler_cov_rollroll
{
public:
  explicit Init_AttCovEuler_cov_rollroll(::septentrio_gnss_driver::msg::AttCovEuler & msg)
  : msg_(msg)
  {}
  Init_AttCovEuler_cov_headpitch cov_rollroll(::septentrio_gnss_driver::msg::AttCovEuler::_cov_rollroll_type arg)
  {
    msg_.cov_rollroll = std::move(arg);
    return Init_AttCovEuler_cov_headpitch(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

class Init_AttCovEuler_cov_pitchpitch
{
public:
  explicit Init_AttCovEuler_cov_pitchpitch(::septentrio_gnss_driver::msg::AttCovEuler & msg)
  : msg_(msg)
  {}
  Init_AttCovEuler_cov_rollroll cov_pitchpitch(::septentrio_gnss_driver::msg::AttCovEuler::_cov_pitchpitch_type arg)
  {
    msg_.cov_pitchpitch = std::move(arg);
    return Init_AttCovEuler_cov_rollroll(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

class Init_AttCovEuler_cov_headhead
{
public:
  explicit Init_AttCovEuler_cov_headhead(::septentrio_gnss_driver::msg::AttCovEuler & msg)
  : msg_(msg)
  {}
  Init_AttCovEuler_cov_pitchpitch cov_headhead(::septentrio_gnss_driver::msg::AttCovEuler::_cov_headhead_type arg)
  {
    msg_.cov_headhead = std::move(arg);
    return Init_AttCovEuler_cov_pitchpitch(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

class Init_AttCovEuler_error
{
public:
  explicit Init_AttCovEuler_error(::septentrio_gnss_driver::msg::AttCovEuler & msg)
  : msg_(msg)
  {}
  Init_AttCovEuler_cov_headhead error(::septentrio_gnss_driver::msg::AttCovEuler::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_AttCovEuler_cov_headhead(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

class Init_AttCovEuler_block_header
{
public:
  explicit Init_AttCovEuler_block_header(::septentrio_gnss_driver::msg::AttCovEuler & msg)
  : msg_(msg)
  {}
  Init_AttCovEuler_error block_header(::septentrio_gnss_driver::msg::AttCovEuler::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_AttCovEuler_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

class Init_AttCovEuler_header
{
public:
  Init_AttCovEuler_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttCovEuler_block_header header(::septentrio_gnss_driver::msg::AttCovEuler::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AttCovEuler_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttCovEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::AttCovEuler>()
{
  return septentrio_gnss_driver::msg::builder::Init_AttCovEuler_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_COV_EULER__BUILDER_HPP_
