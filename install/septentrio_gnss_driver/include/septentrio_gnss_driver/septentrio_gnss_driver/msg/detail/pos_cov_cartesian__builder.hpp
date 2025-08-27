// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/PosCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/pos_cov_cartesian__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_PosCovCartesian_cov_zb
{
public:
  explicit Init_PosCovCartesian_cov_zb(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::PosCovCartesian cov_zb(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_zb_type arg)
  {
    msg_.cov_zb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_yb
{
public:
  explicit Init_PosCovCartesian_cov_yb(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_zb cov_yb(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_yb_type arg)
  {
    msg_.cov_yb = std::move(arg);
    return Init_PosCovCartesian_cov_zb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_yz
{
public:
  explicit Init_PosCovCartesian_cov_yz(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_yb cov_yz(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_yz_type arg)
  {
    msg_.cov_yz = std::move(arg);
    return Init_PosCovCartesian_cov_yb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_xb
{
public:
  explicit Init_PosCovCartesian_cov_xb(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_yz cov_xb(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_xb_type arg)
  {
    msg_.cov_xb = std::move(arg);
    return Init_PosCovCartesian_cov_yz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_xz
{
public:
  explicit Init_PosCovCartesian_cov_xz(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_xb cov_xz(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_xz_type arg)
  {
    msg_.cov_xz = std::move(arg);
    return Init_PosCovCartesian_cov_xb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_xy
{
public:
  explicit Init_PosCovCartesian_cov_xy(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_xz cov_xy(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_xy_type arg)
  {
    msg_.cov_xy = std::move(arg);
    return Init_PosCovCartesian_cov_xz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_bb
{
public:
  explicit Init_PosCovCartesian_cov_bb(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_xy cov_bb(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_bb_type arg)
  {
    msg_.cov_bb = std::move(arg);
    return Init_PosCovCartesian_cov_xy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_zz
{
public:
  explicit Init_PosCovCartesian_cov_zz(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_bb cov_zz(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_zz_type arg)
  {
    msg_.cov_zz = std::move(arg);
    return Init_PosCovCartesian_cov_bb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_yy
{
public:
  explicit Init_PosCovCartesian_cov_yy(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_zz cov_yy(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_yy_type arg)
  {
    msg_.cov_yy = std::move(arg);
    return Init_PosCovCartesian_cov_zz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_cov_xx
{
public:
  explicit Init_PosCovCartesian_cov_xx(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_yy cov_xx(::septentrio_gnss_driver::msg::PosCovCartesian::_cov_xx_type arg)
  {
    msg_.cov_xx = std::move(arg);
    return Init_PosCovCartesian_cov_yy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_error
{
public:
  explicit Init_PosCovCartesian_error(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_cov_xx error(::septentrio_gnss_driver::msg::PosCovCartesian::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PosCovCartesian_cov_xx(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_mode
{
public:
  explicit Init_PosCovCartesian_mode(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_error mode(::septentrio_gnss_driver::msg::PosCovCartesian::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_PosCovCartesian_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_block_header
{
public:
  explicit Init_PosCovCartesian_block_header(::septentrio_gnss_driver::msg::PosCovCartesian & msg)
  : msg_(msg)
  {}
  Init_PosCovCartesian_mode block_header(::septentrio_gnss_driver::msg::PosCovCartesian::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_PosCovCartesian_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

class Init_PosCovCartesian_header
{
public:
  Init_PosCovCartesian_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosCovCartesian_block_header header(::septentrio_gnss_driver::msg::PosCovCartesian::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PosCovCartesian_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovCartesian msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::PosCovCartesian>()
{
  return septentrio_gnss_driver::msg::builder::Init_PosCovCartesian_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_CARTESIAN__BUILDER_HPP_
