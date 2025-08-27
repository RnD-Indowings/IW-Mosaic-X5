// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/PosCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/pos_cov_geodetic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_PosCovGeodetic_cov_hb
{
public:
  explicit Init_PosCovGeodetic_cov_hb(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::PosCovGeodetic cov_hb(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_hb_type arg)
  {
    msg_.cov_hb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_lonb
{
public:
  explicit Init_PosCovGeodetic_cov_lonb(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_hb cov_lonb(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_lonb_type arg)
  {
    msg_.cov_lonb = std::move(arg);
    return Init_PosCovGeodetic_cov_hb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_lonhgt
{
public:
  explicit Init_PosCovGeodetic_cov_lonhgt(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_lonb cov_lonhgt(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_lonhgt_type arg)
  {
    msg_.cov_lonhgt = std::move(arg);
    return Init_PosCovGeodetic_cov_lonb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_latb
{
public:
  explicit Init_PosCovGeodetic_cov_latb(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_lonhgt cov_latb(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_latb_type arg)
  {
    msg_.cov_latb = std::move(arg);
    return Init_PosCovGeodetic_cov_lonhgt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_lathgt
{
public:
  explicit Init_PosCovGeodetic_cov_lathgt(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_latb cov_lathgt(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_lathgt_type arg)
  {
    msg_.cov_lathgt = std::move(arg);
    return Init_PosCovGeodetic_cov_latb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_latlon
{
public:
  explicit Init_PosCovGeodetic_cov_latlon(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_lathgt cov_latlon(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_latlon_type arg)
  {
    msg_.cov_latlon = std::move(arg);
    return Init_PosCovGeodetic_cov_lathgt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_bb
{
public:
  explicit Init_PosCovGeodetic_cov_bb(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_latlon cov_bb(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_bb_type arg)
  {
    msg_.cov_bb = std::move(arg);
    return Init_PosCovGeodetic_cov_latlon(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_hgthgt
{
public:
  explicit Init_PosCovGeodetic_cov_hgthgt(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_bb cov_hgthgt(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_hgthgt_type arg)
  {
    msg_.cov_hgthgt = std::move(arg);
    return Init_PosCovGeodetic_cov_bb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_lonlon
{
public:
  explicit Init_PosCovGeodetic_cov_lonlon(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_hgthgt cov_lonlon(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_lonlon_type arg)
  {
    msg_.cov_lonlon = std::move(arg);
    return Init_PosCovGeodetic_cov_hgthgt(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_cov_latlat
{
public:
  explicit Init_PosCovGeodetic_cov_latlat(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_lonlon cov_latlat(::septentrio_gnss_driver::msg::PosCovGeodetic::_cov_latlat_type arg)
  {
    msg_.cov_latlat = std::move(arg);
    return Init_PosCovGeodetic_cov_lonlon(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_error
{
public:
  explicit Init_PosCovGeodetic_error(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_cov_latlat error(::septentrio_gnss_driver::msg::PosCovGeodetic::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PosCovGeodetic_cov_latlat(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_mode
{
public:
  explicit Init_PosCovGeodetic_mode(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_error mode(::septentrio_gnss_driver::msg::PosCovGeodetic::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_PosCovGeodetic_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_block_header
{
public:
  explicit Init_PosCovGeodetic_block_header(::septentrio_gnss_driver::msg::PosCovGeodetic & msg)
  : msg_(msg)
  {}
  Init_PosCovGeodetic_mode block_header(::septentrio_gnss_driver::msg::PosCovGeodetic::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_PosCovGeodetic_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

class Init_PosCovGeodetic_header
{
public:
  Init_PosCovGeodetic_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosCovGeodetic_block_header header(::septentrio_gnss_driver::msg::PosCovGeodetic::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PosCovGeodetic_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PosCovGeodetic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::PosCovGeodetic>()
{
  return septentrio_gnss_driver::msg::builder::Init_PosCovGeodetic_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__POS_COV_GEODETIC__BUILDER_HPP_
