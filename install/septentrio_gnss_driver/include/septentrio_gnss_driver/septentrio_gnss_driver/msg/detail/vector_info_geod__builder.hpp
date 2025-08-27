// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/VectorInfoGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/vector_info_geod__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_VectorInfoGeod_signal_info
{
public:
  explicit Init_VectorInfoGeod_signal_info(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::VectorInfoGeod signal_info(::septentrio_gnss_driver::msg::VectorInfoGeod::_signal_info_type arg)
  {
    msg_.signal_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_corr_age
{
public:
  explicit Init_VectorInfoGeod_corr_age(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_signal_info corr_age(::septentrio_gnss_driver::msg::VectorInfoGeod::_corr_age_type arg)
  {
    msg_.corr_age = std::move(arg);
    return Init_VectorInfoGeod_signal_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_reference_id
{
public:
  explicit Init_VectorInfoGeod_reference_id(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_corr_age reference_id(::septentrio_gnss_driver::msg::VectorInfoGeod::_reference_id_type arg)
  {
    msg_.reference_id = std::move(arg);
    return Init_VectorInfoGeod_corr_age(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_elevation
{
public:
  explicit Init_VectorInfoGeod_elevation(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_reference_id elevation(::septentrio_gnss_driver::msg::VectorInfoGeod::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_VectorInfoGeod_reference_id(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_azimuth
{
public:
  explicit Init_VectorInfoGeod_azimuth(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_elevation azimuth(::septentrio_gnss_driver::msg::VectorInfoGeod::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_VectorInfoGeod_elevation(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_delta_vu
{
public:
  explicit Init_VectorInfoGeod_delta_vu(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_azimuth delta_vu(::septentrio_gnss_driver::msg::VectorInfoGeod::_delta_vu_type arg)
  {
    msg_.delta_vu = std::move(arg);
    return Init_VectorInfoGeod_azimuth(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_delta_vn
{
public:
  explicit Init_VectorInfoGeod_delta_vn(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_delta_vu delta_vn(::septentrio_gnss_driver::msg::VectorInfoGeod::_delta_vn_type arg)
  {
    msg_.delta_vn = std::move(arg);
    return Init_VectorInfoGeod_delta_vu(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_delta_ve
{
public:
  explicit Init_VectorInfoGeod_delta_ve(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_delta_vn delta_ve(::septentrio_gnss_driver::msg::VectorInfoGeod::_delta_ve_type arg)
  {
    msg_.delta_ve = std::move(arg);
    return Init_VectorInfoGeod_delta_vn(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_delta_up
{
public:
  explicit Init_VectorInfoGeod_delta_up(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_delta_ve delta_up(::septentrio_gnss_driver::msg::VectorInfoGeod::_delta_up_type arg)
  {
    msg_.delta_up = std::move(arg);
    return Init_VectorInfoGeod_delta_ve(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_delta_north
{
public:
  explicit Init_VectorInfoGeod_delta_north(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_delta_up delta_north(::septentrio_gnss_driver::msg::VectorInfoGeod::_delta_north_type arg)
  {
    msg_.delta_north = std::move(arg);
    return Init_VectorInfoGeod_delta_up(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_delta_east
{
public:
  explicit Init_VectorInfoGeod_delta_east(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_delta_north delta_east(::septentrio_gnss_driver::msg::VectorInfoGeod::_delta_east_type arg)
  {
    msg_.delta_east = std::move(arg);
    return Init_VectorInfoGeod_delta_north(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_misc
{
public:
  explicit Init_VectorInfoGeod_misc(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_delta_east misc(::septentrio_gnss_driver::msg::VectorInfoGeod::_misc_type arg)
  {
    msg_.misc = std::move(arg);
    return Init_VectorInfoGeod_delta_east(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_mode
{
public:
  explicit Init_VectorInfoGeod_mode(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_misc mode(::septentrio_gnss_driver::msg::VectorInfoGeod::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VectorInfoGeod_misc(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_error
{
public:
  explicit Init_VectorInfoGeod_error(::septentrio_gnss_driver::msg::VectorInfoGeod & msg)
  : msg_(msg)
  {}
  Init_VectorInfoGeod_mode error(::septentrio_gnss_driver::msg::VectorInfoGeod::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_VectorInfoGeod_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

class Init_VectorInfoGeod_nr_sv
{
public:
  Init_VectorInfoGeod_nr_sv()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VectorInfoGeod_error nr_sv(::septentrio_gnss_driver::msg::VectorInfoGeod::_nr_sv_type arg)
  {
    msg_.nr_sv = std::move(arg);
    return Init_VectorInfoGeod_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoGeod msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::VectorInfoGeod>()
{
  return septentrio_gnss_driver::msg::builder::Init_VectorInfoGeod_nr_sv();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__BUILDER_HPP_
