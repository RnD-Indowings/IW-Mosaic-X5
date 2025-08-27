// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/vel_cov_cartesian__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_VelCovCartesian_cov_vzdt
{
public:
  explicit Init_VelCovCartesian_cov_vzdt(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::VelCovCartesian cov_vzdt(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vzdt_type arg)
  {
    msg_.cov_vzdt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_vydt
{
public:
  explicit Init_VelCovCartesian_cov_vydt(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vzdt cov_vydt(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vydt_type arg)
  {
    msg_.cov_vydt = std::move(arg);
    return Init_VelCovCartesian_cov_vzdt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_vyvz
{
public:
  explicit Init_VelCovCartesian_cov_vyvz(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vydt cov_vyvz(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vyvz_type arg)
  {
    msg_.cov_vyvz = std::move(arg);
    return Init_VelCovCartesian_cov_vydt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_vxdt
{
public:
  explicit Init_VelCovCartesian_cov_vxdt(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vyvz cov_vxdt(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vxdt_type arg)
  {
    msg_.cov_vxdt = std::move(arg);
    return Init_VelCovCartesian_cov_vyvz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_vxvz
{
public:
  explicit Init_VelCovCartesian_cov_vxvz(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vxdt cov_vxvz(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vxvz_type arg)
  {
    msg_.cov_vxvz = std::move(arg);
    return Init_VelCovCartesian_cov_vxdt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_vxvy
{
public:
  explicit Init_VelCovCartesian_cov_vxvy(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vxvz cov_vxvy(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vxvy_type arg)
  {
    msg_.cov_vxvy = std::move(arg);
    return Init_VelCovCartesian_cov_vxvz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_dtdt
{
public:
  explicit Init_VelCovCartesian_cov_dtdt(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vxvy cov_dtdt(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_dtdt_type arg)
  {
    msg_.cov_dtdt = std::move(arg);
    return Init_VelCovCartesian_cov_vxvy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_vzvz
{
public:
  explicit Init_VelCovCartesian_cov_vzvz(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_dtdt cov_vzvz(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vzvz_type arg)
  {
    msg_.cov_vzvz = std::move(arg);
    return Init_VelCovCartesian_cov_dtdt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_vyvy
{
public:
  explicit Init_VelCovCartesian_cov_vyvy(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vzvz cov_vyvy(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vyvy_type arg)
  {
    msg_.cov_vyvy = std::move(arg);
    return Init_VelCovCartesian_cov_vzvz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_cov_vxvx
{
public:
  explicit Init_VelCovCartesian_cov_vxvx(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vyvy cov_vxvx(::septentrio_gnss_driver::msg::VelCovCartesian::_cov_vxvx_type arg)
  {
    msg_.cov_vxvx = std::move(arg);
    return Init_VelCovCartesian_cov_vyvy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_error
{
public:
  explicit Init_VelCovCartesian_error(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_cov_vxvx error(::septentrio_gnss_driver::msg::VelCovCartesian::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_VelCovCartesian_cov_vxvx(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_mode
{
public:
  explicit Init_VelCovCartesian_mode(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_error mode(::septentrio_gnss_driver::msg::VelCovCartesian::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VelCovCartesian_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_block_header
{
public:
  explicit Init_VelCovCartesian_block_header(::septentrio_gnss_driver::msg::VelCovCartesian & msg)
  : msg_(msg)
  {}
  Init_VelCovCartesian_mode block_header(::septentrio_gnss_driver::msg::VelCovCartesian::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_VelCovCartesian_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

class Init_VelCovCartesian_header
{
public:
  Init_VelCovCartesian_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelCovCartesian_block_header header(::septentrio_gnss_driver::msg::VelCovCartesian::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelCovCartesian_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovCartesian msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::VelCovCartesian>()
{
  return septentrio_gnss_driver::msg::builder::Init_VelCovCartesian_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_CARTESIAN__BUILDER_HPP_
