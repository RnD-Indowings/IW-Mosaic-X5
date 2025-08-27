// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/INSNavCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/ins_nav_cart__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_INSNavCart_vy_vz_cov
{
public:
  explicit Init_INSNavCart_vy_vz_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::INSNavCart vy_vz_cov(::septentrio_gnss_driver::msg::INSNavCart::_vy_vz_cov_type arg)
  {
    msg_.vy_vz_cov = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_vx_vz_cov
{
public:
  explicit Init_INSNavCart_vx_vz_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vy_vz_cov vx_vz_cov(::septentrio_gnss_driver::msg::INSNavCart::_vx_vz_cov_type arg)
  {
    msg_.vx_vz_cov = std::move(arg);
    return Init_INSNavCart_vy_vz_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_vx_vy_cov
{
public:
  explicit Init_INSNavCart_vx_vy_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vx_vz_cov vx_vy_cov(::septentrio_gnss_driver::msg::INSNavCart::_vx_vy_cov_type arg)
  {
    msg_.vx_vy_cov = std::move(arg);
    return Init_INSNavCart_vx_vz_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_vz_std_dev
{
public:
  explicit Init_INSNavCart_vz_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vx_vy_cov vz_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_vz_std_dev_type arg)
  {
    msg_.vz_std_dev = std::move(arg);
    return Init_INSNavCart_vx_vy_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_vy_std_dev
{
public:
  explicit Init_INSNavCart_vy_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vz_std_dev vy_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_vy_std_dev_type arg)
  {
    msg_.vy_std_dev = std::move(arg);
    return Init_INSNavCart_vz_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_vx_std_dev
{
public:
  explicit Init_INSNavCart_vx_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vy_std_dev vx_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_vx_std_dev_type arg)
  {
    msg_.vx_std_dev = std::move(arg);
    return Init_INSNavCart_vy_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_vz
{
public:
  explicit Init_INSNavCart_vz(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vx_std_dev vz(::septentrio_gnss_driver::msg::INSNavCart::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_INSNavCart_vx_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_vy
{
public:
  explicit Init_INSNavCart_vy(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vz vy(::septentrio_gnss_driver::msg::INSNavCart::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_INSNavCart_vz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_vx
{
public:
  explicit Init_INSNavCart_vx(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vy vx(::septentrio_gnss_driver::msg::INSNavCart::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_INSNavCart_vy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_pitch_roll_cov
{
public:
  explicit Init_INSNavCart_pitch_roll_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_vx pitch_roll_cov(::septentrio_gnss_driver::msg::INSNavCart::_pitch_roll_cov_type arg)
  {
    msg_.pitch_roll_cov = std::move(arg);
    return Init_INSNavCart_vx(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_heading_roll_cov
{
public:
  explicit Init_INSNavCart_heading_roll_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_pitch_roll_cov heading_roll_cov(::septentrio_gnss_driver::msg::INSNavCart::_heading_roll_cov_type arg)
  {
    msg_.heading_roll_cov = std::move(arg);
    return Init_INSNavCart_pitch_roll_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_heading_pitch_cov
{
public:
  explicit Init_INSNavCart_heading_pitch_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_heading_roll_cov heading_pitch_cov(::septentrio_gnss_driver::msg::INSNavCart::_heading_pitch_cov_type arg)
  {
    msg_.heading_pitch_cov = std::move(arg);
    return Init_INSNavCart_heading_roll_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_roll_std_dev
{
public:
  explicit Init_INSNavCart_roll_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_heading_pitch_cov roll_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_roll_std_dev_type arg)
  {
    msg_.roll_std_dev = std::move(arg);
    return Init_INSNavCart_heading_pitch_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_pitch_std_dev
{
public:
  explicit Init_INSNavCart_pitch_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_roll_std_dev pitch_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_pitch_std_dev_type arg)
  {
    msg_.pitch_std_dev = std::move(arg);
    return Init_INSNavCart_roll_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_heading_std_dev
{
public:
  explicit Init_INSNavCart_heading_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_pitch_std_dev heading_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_heading_std_dev_type arg)
  {
    msg_.heading_std_dev = std::move(arg);
    return Init_INSNavCart_pitch_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_roll
{
public:
  explicit Init_INSNavCart_roll(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_heading_std_dev roll(::septentrio_gnss_driver::msg::INSNavCart::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_INSNavCart_heading_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_pitch
{
public:
  explicit Init_INSNavCart_pitch(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_roll pitch(::septentrio_gnss_driver::msg::INSNavCart::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_INSNavCart_roll(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_heading
{
public:
  explicit Init_INSNavCart_heading(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_pitch heading(::septentrio_gnss_driver::msg::INSNavCart::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_INSNavCart_pitch(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_yz_cov
{
public:
  explicit Init_INSNavCart_yz_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_heading yz_cov(::septentrio_gnss_driver::msg::INSNavCart::_yz_cov_type arg)
  {
    msg_.yz_cov = std::move(arg);
    return Init_INSNavCart_heading(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_xz_cov
{
public:
  explicit Init_INSNavCart_xz_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_yz_cov xz_cov(::septentrio_gnss_driver::msg::INSNavCart::_xz_cov_type arg)
  {
    msg_.xz_cov = std::move(arg);
    return Init_INSNavCart_yz_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_xy_cov
{
public:
  explicit Init_INSNavCart_xy_cov(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_xz_cov xy_cov(::septentrio_gnss_driver::msg::INSNavCart::_xy_cov_type arg)
  {
    msg_.xy_cov = std::move(arg);
    return Init_INSNavCart_xz_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_z_std_dev
{
public:
  explicit Init_INSNavCart_z_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_xy_cov z_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_z_std_dev_type arg)
  {
    msg_.z_std_dev = std::move(arg);
    return Init_INSNavCart_xy_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_y_std_dev
{
public:
  explicit Init_INSNavCart_y_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_z_std_dev y_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_y_std_dev_type arg)
  {
    msg_.y_std_dev = std::move(arg);
    return Init_INSNavCart_z_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_x_std_dev
{
public:
  explicit Init_INSNavCart_x_std_dev(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_y_std_dev x_std_dev(::septentrio_gnss_driver::msg::INSNavCart::_x_std_dev_type arg)
  {
    msg_.x_std_dev = std::move(arg);
    return Init_INSNavCart_y_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_sb_list
{
public:
  explicit Init_INSNavCart_sb_list(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_x_std_dev sb_list(::septentrio_gnss_driver::msg::INSNavCart::_sb_list_type arg)
  {
    msg_.sb_list = std::move(arg);
    return Init_INSNavCart_x_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_datum
{
public:
  explicit Init_INSNavCart_datum(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_sb_list datum(::septentrio_gnss_driver::msg::INSNavCart::_datum_type arg)
  {
    msg_.datum = std::move(arg);
    return Init_INSNavCart_sb_list(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_latency
{
public:
  explicit Init_INSNavCart_latency(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_datum latency(::septentrio_gnss_driver::msg::INSNavCart::_latency_type arg)
  {
    msg_.latency = std::move(arg);
    return Init_INSNavCart_datum(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_accuracy
{
public:
  explicit Init_INSNavCart_accuracy(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_latency accuracy(::septentrio_gnss_driver::msg::INSNavCart::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_INSNavCart_latency(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_z
{
public:
  explicit Init_INSNavCart_z(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_accuracy z(::septentrio_gnss_driver::msg::INSNavCart::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_INSNavCart_accuracy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_y
{
public:
  explicit Init_INSNavCart_y(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_z y(::septentrio_gnss_driver::msg::INSNavCart::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_INSNavCart_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_x
{
public:
  explicit Init_INSNavCart_x(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_y x(::septentrio_gnss_driver::msg::INSNavCart::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_INSNavCart_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_gnss_age
{
public:
  explicit Init_INSNavCart_gnss_age(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_x gnss_age(::septentrio_gnss_driver::msg::INSNavCart::_gnss_age_type arg)
  {
    msg_.gnss_age = std::move(arg);
    return Init_INSNavCart_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_info
{
public:
  explicit Init_INSNavCart_info(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_gnss_age info(::septentrio_gnss_driver::msg::INSNavCart::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_INSNavCart_gnss_age(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_error
{
public:
  explicit Init_INSNavCart_error(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_info error(::septentrio_gnss_driver::msg::INSNavCart::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_INSNavCart_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_gnss_mode
{
public:
  explicit Init_INSNavCart_gnss_mode(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_error gnss_mode(::septentrio_gnss_driver::msg::INSNavCart::_gnss_mode_type arg)
  {
    msg_.gnss_mode = std::move(arg);
    return Init_INSNavCart_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_block_header
{
public:
  explicit Init_INSNavCart_block_header(::septentrio_gnss_driver::msg::INSNavCart & msg)
  : msg_(msg)
  {}
  Init_INSNavCart_gnss_mode block_header(::septentrio_gnss_driver::msg::INSNavCart::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_INSNavCart_gnss_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

class Init_INSNavCart_header
{
public:
  Init_INSNavCart_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_INSNavCart_block_header header(::septentrio_gnss_driver::msg::INSNavCart::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_INSNavCart_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavCart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::INSNavCart>()
{
  return septentrio_gnss_driver::msg::builder::Init_INSNavCart_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_CART__BUILDER_HPP_
