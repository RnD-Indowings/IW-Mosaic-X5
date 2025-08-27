// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/VelCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/vel_cov_geodetic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_VelCovGeodetic_cov_vudt
{
public:
  explicit Init_VelCovGeodetic_cov_vudt(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::VelCovGeodetic cov_vudt(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_vudt_type arg)
  {
    msg_.cov_vudt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_vedt
{
public:
  explicit Init_VelCovGeodetic_cov_vedt(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_vudt cov_vedt(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_vedt_type arg)
  {
    msg_.cov_vedt = std::move(arg);
    return Init_VelCovGeodetic_cov_vudt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_vevu
{
public:
  explicit Init_VelCovGeodetic_cov_vevu(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_vedt cov_vevu(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_vevu_type arg)
  {
    msg_.cov_vevu = std::move(arg);
    return Init_VelCovGeodetic_cov_vedt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_vndt
{
public:
  explicit Init_VelCovGeodetic_cov_vndt(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_vevu cov_vndt(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_vndt_type arg)
  {
    msg_.cov_vndt = std::move(arg);
    return Init_VelCovGeodetic_cov_vevu(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_vnvu
{
public:
  explicit Init_VelCovGeodetic_cov_vnvu(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_vndt cov_vnvu(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_vnvu_type arg)
  {
    msg_.cov_vnvu = std::move(arg);
    return Init_VelCovGeodetic_cov_vndt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_vnve
{
public:
  explicit Init_VelCovGeodetic_cov_vnve(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_vnvu cov_vnve(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_vnve_type arg)
  {
    msg_.cov_vnve = std::move(arg);
    return Init_VelCovGeodetic_cov_vnvu(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_dtdt
{
public:
  explicit Init_VelCovGeodetic_cov_dtdt(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_vnve cov_dtdt(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_dtdt_type arg)
  {
    msg_.cov_dtdt = std::move(arg);
    return Init_VelCovGeodetic_cov_vnve(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_vuvu
{
public:
  explicit Init_VelCovGeodetic_cov_vuvu(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_dtdt cov_vuvu(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_vuvu_type arg)
  {
    msg_.cov_vuvu = std::move(arg);
    return Init_VelCovGeodetic_cov_dtdt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_veve
{
public:
  explicit Init_VelCovGeodetic_cov_veve(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_vuvu cov_veve(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_veve_type arg)
  {
    msg_.cov_veve = std::move(arg);
    return Init_VelCovGeodetic_cov_vuvu(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_cov_vnvn
{
public:
  explicit Init_VelCovGeodetic_cov_vnvn(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_veve cov_vnvn(::septentrio_gnss_driver::msg::VelCovGeodetic::_cov_vnvn_type arg)
  {
    msg_.cov_vnvn = std::move(arg);
    return Init_VelCovGeodetic_cov_veve(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_error
{
public:
  explicit Init_VelCovGeodetic_error(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_cov_vnvn error(::septentrio_gnss_driver::msg::VelCovGeodetic::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_VelCovGeodetic_cov_vnvn(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_mode
{
public:
  explicit Init_VelCovGeodetic_mode(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_error mode(::septentrio_gnss_driver::msg::VelCovGeodetic::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VelCovGeodetic_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_block_header
{
public:
  explicit Init_VelCovGeodetic_block_header(::septentrio_gnss_driver::msg::VelCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_VelCovGeodetic_mode block_header(::septentrio_gnss_driver::msg::VelCovGeodetic::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_VelCovGeodetic_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

class Init_VelCovGeodetic_header
{
public:
  Init_VelCovGeodetic_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelCovGeodetic_block_header header(::septentrio_gnss_driver::msg::VelCovGeodetic::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelCovGeodetic_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VelCovGeodetic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::VelCovGeodetic>()
{
  return septentrio_gnss_driver::msg::builder::Init_VelCovGeodetic_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__BUILDER_HPP_
