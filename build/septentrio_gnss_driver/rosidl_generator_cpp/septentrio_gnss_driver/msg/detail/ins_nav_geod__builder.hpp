// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/INSNavGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/ins_nav_geod__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_INSNavGeod_vn_vu_cov
{
public:
  explicit Init_INSNavGeod_vn_vu_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::INSNavGeod vn_vu_cov(::septentrio_gnss_driver::msg::INSNavGeod::_vn_vu_cov_type arg)
  {
    msg_.vn_vu_cov = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_ve_vu_cov
{
public:
  explicit Init_INSNavGeod_ve_vu_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_vn_vu_cov ve_vu_cov(::septentrio_gnss_driver::msg::INSNavGeod::_ve_vu_cov_type arg)
  {
    msg_.ve_vu_cov = std::move(arg);
    return Init_INSNavGeod_vn_vu_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_ve_vn_cov
{
public:
  explicit Init_INSNavGeod_ve_vn_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_ve_vu_cov ve_vn_cov(::septentrio_gnss_driver::msg::INSNavGeod::_ve_vn_cov_type arg)
  {
    msg_.ve_vn_cov = std::move(arg);
    return Init_INSNavGeod_ve_vu_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_vu_std_dev
{
public:
  explicit Init_INSNavGeod_vu_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_ve_vn_cov vu_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_vu_std_dev_type arg)
  {
    msg_.vu_std_dev = std::move(arg);
    return Init_INSNavGeod_ve_vn_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_vn_std_dev
{
public:
  explicit Init_INSNavGeod_vn_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_vu_std_dev vn_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_vn_std_dev_type arg)
  {
    msg_.vn_std_dev = std::move(arg);
    return Init_INSNavGeod_vu_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_ve_std_dev
{
public:
  explicit Init_INSNavGeod_ve_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_vn_std_dev ve_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_ve_std_dev_type arg)
  {
    msg_.ve_std_dev = std::move(arg);
    return Init_INSNavGeod_vn_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_vu
{
public:
  explicit Init_INSNavGeod_vu(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_ve_std_dev vu(::septentrio_gnss_driver::msg::INSNavGeod::_vu_type arg)
  {
    msg_.vu = std::move(arg);
    return Init_INSNavGeod_ve_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_vn
{
public:
  explicit Init_INSNavGeod_vn(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_vu vn(::septentrio_gnss_driver::msg::INSNavGeod::_vn_type arg)
  {
    msg_.vn = std::move(arg);
    return Init_INSNavGeod_vu(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_ve
{
public:
  explicit Init_INSNavGeod_ve(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_vn ve(::septentrio_gnss_driver::msg::INSNavGeod::_ve_type arg)
  {
    msg_.ve = std::move(arg);
    return Init_INSNavGeod_vn(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_pitch_roll_cov
{
public:
  explicit Init_INSNavGeod_pitch_roll_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_ve pitch_roll_cov(::septentrio_gnss_driver::msg::INSNavGeod::_pitch_roll_cov_type arg)
  {
    msg_.pitch_roll_cov = std::move(arg);
    return Init_INSNavGeod_ve(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_heading_roll_cov
{
public:
  explicit Init_INSNavGeod_heading_roll_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_pitch_roll_cov heading_roll_cov(::septentrio_gnss_driver::msg::INSNavGeod::_heading_roll_cov_type arg)
  {
    msg_.heading_roll_cov = std::move(arg);
    return Init_INSNavGeod_pitch_roll_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_heading_pitch_cov
{
public:
  explicit Init_INSNavGeod_heading_pitch_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_heading_roll_cov heading_pitch_cov(::septentrio_gnss_driver::msg::INSNavGeod::_heading_pitch_cov_type arg)
  {
    msg_.heading_pitch_cov = std::move(arg);
    return Init_INSNavGeod_heading_roll_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_roll_std_dev
{
public:
  explicit Init_INSNavGeod_roll_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_heading_pitch_cov roll_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_roll_std_dev_type arg)
  {
    msg_.roll_std_dev = std::move(arg);
    return Init_INSNavGeod_heading_pitch_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_pitch_std_dev
{
public:
  explicit Init_INSNavGeod_pitch_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_roll_std_dev pitch_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_pitch_std_dev_type arg)
  {
    msg_.pitch_std_dev = std::move(arg);
    return Init_INSNavGeod_roll_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_heading_std_dev
{
public:
  explicit Init_INSNavGeod_heading_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_pitch_std_dev heading_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_heading_std_dev_type arg)
  {
    msg_.heading_std_dev = std::move(arg);
    return Init_INSNavGeod_pitch_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_roll
{
public:
  explicit Init_INSNavGeod_roll(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_heading_std_dev roll(::septentrio_gnss_driver::msg::INSNavGeod::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_INSNavGeod_heading_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_pitch
{
public:
  explicit Init_INSNavGeod_pitch(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_roll pitch(::septentrio_gnss_driver::msg::INSNavGeod::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_INSNavGeod_roll(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_heading
{
public:
  explicit Init_INSNavGeod_heading(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_pitch heading(::septentrio_gnss_driver::msg::INSNavGeod::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_INSNavGeod_pitch(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_longitude_height_cov
{
public:
  explicit Init_INSNavGeod_longitude_height_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_heading longitude_height_cov(::septentrio_gnss_driver::msg::INSNavGeod::_longitude_height_cov_type arg)
  {
    msg_.longitude_height_cov = std::move(arg);
    return Init_INSNavGeod_heading(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_latitude_height_cov
{
public:
  explicit Init_INSNavGeod_latitude_height_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_longitude_height_cov latitude_height_cov(::septentrio_gnss_driver::msg::INSNavGeod::_latitude_height_cov_type arg)
  {
    msg_.latitude_height_cov = std::move(arg);
    return Init_INSNavGeod_longitude_height_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_latitude_longitude_cov
{
public:
  explicit Init_INSNavGeod_latitude_longitude_cov(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_latitude_height_cov latitude_longitude_cov(::septentrio_gnss_driver::msg::INSNavGeod::_latitude_longitude_cov_type arg)
  {
    msg_.latitude_longitude_cov = std::move(arg);
    return Init_INSNavGeod_latitude_height_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_height_std_dev
{
public:
  explicit Init_INSNavGeod_height_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_latitude_longitude_cov height_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_height_std_dev_type arg)
  {
    msg_.height_std_dev = std::move(arg);
    return Init_INSNavGeod_latitude_longitude_cov(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_longitude_std_dev
{
public:
  explicit Init_INSNavGeod_longitude_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_height_std_dev longitude_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_longitude_std_dev_type arg)
  {
    msg_.longitude_std_dev = std::move(arg);
    return Init_INSNavGeod_height_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_latitude_std_dev
{
public:
  explicit Init_INSNavGeod_latitude_std_dev(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_longitude_std_dev latitude_std_dev(::septentrio_gnss_driver::msg::INSNavGeod::_latitude_std_dev_type arg)
  {
    msg_.latitude_std_dev = std::move(arg);
    return Init_INSNavGeod_longitude_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_sb_list
{
public:
  explicit Init_INSNavGeod_sb_list(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_latitude_std_dev sb_list(::septentrio_gnss_driver::msg::INSNavGeod::_sb_list_type arg)
  {
    msg_.sb_list = std::move(arg);
    return Init_INSNavGeod_latitude_std_dev(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_datum
{
public:
  explicit Init_INSNavGeod_datum(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_sb_list datum(::septentrio_gnss_driver::msg::INSNavGeod::_datum_type arg)
  {
    msg_.datum = std::move(arg);
    return Init_INSNavGeod_sb_list(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_latency
{
public:
  explicit Init_INSNavGeod_latency(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_datum latency(::septentrio_gnss_driver::msg::INSNavGeod::_latency_type arg)
  {
    msg_.latency = std::move(arg);
    return Init_INSNavGeod_datum(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_accuracy
{
public:
  explicit Init_INSNavGeod_accuracy(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_latency accuracy(::septentrio_gnss_driver::msg::INSNavGeod::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_INSNavGeod_latency(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_undulation
{
public:
  explicit Init_INSNavGeod_undulation(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_accuracy undulation(::septentrio_gnss_driver::msg::INSNavGeod::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_INSNavGeod_accuracy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_height
{
public:
  explicit Init_INSNavGeod_height(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_undulation height(::septentrio_gnss_driver::msg::INSNavGeod::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_INSNavGeod_undulation(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_longitude
{
public:
  explicit Init_INSNavGeod_longitude(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_height longitude(::septentrio_gnss_driver::msg::INSNavGeod::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_INSNavGeod_height(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_latitude
{
public:
  explicit Init_INSNavGeod_latitude(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_longitude latitude(::septentrio_gnss_driver::msg::INSNavGeod::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_INSNavGeod_longitude(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_gnss_age
{
public:
  explicit Init_INSNavGeod_gnss_age(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_latitude gnss_age(::septentrio_gnss_driver::msg::INSNavGeod::_gnss_age_type arg)
  {
    msg_.gnss_age = std::move(arg);
    return Init_INSNavGeod_latitude(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_info
{
public:
  explicit Init_INSNavGeod_info(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_gnss_age info(::septentrio_gnss_driver::msg::INSNavGeod::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_INSNavGeod_gnss_age(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_error
{
public:
  explicit Init_INSNavGeod_error(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_info error(::septentrio_gnss_driver::msg::INSNavGeod::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_INSNavGeod_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_gnss_mode
{
public:
  explicit Init_INSNavGeod_gnss_mode(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_error gnss_mode(::septentrio_gnss_driver::msg::INSNavGeod::_gnss_mode_type arg)
  {
    msg_.gnss_mode = std::move(arg);
    return Init_INSNavGeod_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_block_header
{
public:
  explicit Init_INSNavGeod_block_header(::septentrio_gnss_driver::msg::INSNavGeod & msg)
  : msg_(msg)
  {}
  Init_INSNavGeod_gnss_mode block_header(::septentrio_gnss_driver::msg::INSNavGeod::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_INSNavGeod_gnss_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

class Init_INSNavGeod_header
{
public:
  Init_INSNavGeod_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_INSNavGeod_block_header header(::septentrio_gnss_driver::msg::INSNavGeod::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_INSNavGeod_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::INSNavGeod msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::INSNavGeod>()
{
  return septentrio_gnss_driver::msg::builder::Init_INSNavGeod_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__BUILDER_HPP_
