// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/AttEuler.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/att_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_AttEuler_heading_dot
{
public:
  explicit Init_AttEuler_heading_dot(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::AttEuler heading_dot(::septentrio_gnss_driver::msg::AttEuler::_heading_dot_type arg)
  {
    msg_.heading_dot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_roll_dot
{
public:
  explicit Init_AttEuler_roll_dot(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_heading_dot roll_dot(::septentrio_gnss_driver::msg::AttEuler::_roll_dot_type arg)
  {
    msg_.roll_dot = std::move(arg);
    return Init_AttEuler_heading_dot(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_pitch_dot
{
public:
  explicit Init_AttEuler_pitch_dot(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_roll_dot pitch_dot(::septentrio_gnss_driver::msg::AttEuler::_pitch_dot_type arg)
  {
    msg_.pitch_dot = std::move(arg);
    return Init_AttEuler_roll_dot(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_roll
{
public:
  explicit Init_AttEuler_roll(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_pitch_dot roll(::septentrio_gnss_driver::msg::AttEuler::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_AttEuler_pitch_dot(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_pitch
{
public:
  explicit Init_AttEuler_pitch(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_roll pitch(::septentrio_gnss_driver::msg::AttEuler::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AttEuler_roll(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_heading
{
public:
  explicit Init_AttEuler_heading(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_pitch heading(::septentrio_gnss_driver::msg::AttEuler::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_AttEuler_pitch(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_mode
{
public:
  explicit Init_AttEuler_mode(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_heading mode(::septentrio_gnss_driver::msg::AttEuler::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_AttEuler_heading(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_error
{
public:
  explicit Init_AttEuler_error(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_mode error(::septentrio_gnss_driver::msg::AttEuler::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_AttEuler_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_nr_sv
{
public:
  explicit Init_AttEuler_nr_sv(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_error nr_sv(::septentrio_gnss_driver::msg::AttEuler::_nr_sv_type arg)
  {
    msg_.nr_sv = std::move(arg);
    return Init_AttEuler_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_block_header
{
public:
  explicit Init_AttEuler_block_header(::septentrio_gnss_driver::msg::AttEuler & msg)
  : msg_(msg)
  {}
  Init_AttEuler_nr_sv block_header(::septentrio_gnss_driver::msg::AttEuler::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_AttEuler_nr_sv(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

class Init_AttEuler_header
{
public:
  Init_AttEuler_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttEuler_block_header header(::septentrio_gnss_driver::msg::AttEuler::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AttEuler_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::AttEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::AttEuler>()
{
  return septentrio_gnss_driver::msg::builder::Init_AttEuler_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__ATT_EULER__BUILDER_HPP_
