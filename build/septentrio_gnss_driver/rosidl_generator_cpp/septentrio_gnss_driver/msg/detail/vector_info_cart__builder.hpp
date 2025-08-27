// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/VectorInfoCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/vector_info_cart__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_VectorInfoCart_signal_info
{
public:
  explicit Init_VectorInfoCart_signal_info(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::VectorInfoCart signal_info(::septentrio_gnss_driver::msg::VectorInfoCart::_signal_info_type arg)
  {
    msg_.signal_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_corr_age
{
public:
  explicit Init_VectorInfoCart_corr_age(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_signal_info corr_age(::septentrio_gnss_driver::msg::VectorInfoCart::_corr_age_type arg)
  {
    msg_.corr_age = std::move(arg);
    return Init_VectorInfoCart_signal_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_reference_id
{
public:
  explicit Init_VectorInfoCart_reference_id(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_corr_age reference_id(::septentrio_gnss_driver::msg::VectorInfoCart::_reference_id_type arg)
  {
    msg_.reference_id = std::move(arg);
    return Init_VectorInfoCart_corr_age(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_elevation
{
public:
  explicit Init_VectorInfoCart_elevation(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_reference_id elevation(::septentrio_gnss_driver::msg::VectorInfoCart::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_VectorInfoCart_reference_id(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_azimuth
{
public:
  explicit Init_VectorInfoCart_azimuth(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_elevation azimuth(::septentrio_gnss_driver::msg::VectorInfoCart::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_VectorInfoCart_elevation(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_delta_vz
{
public:
  explicit Init_VectorInfoCart_delta_vz(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_azimuth delta_vz(::septentrio_gnss_driver::msg::VectorInfoCart::_delta_vz_type arg)
  {
    msg_.delta_vz = std::move(arg);
    return Init_VectorInfoCart_azimuth(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_delta_vy
{
public:
  explicit Init_VectorInfoCart_delta_vy(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_delta_vz delta_vy(::septentrio_gnss_driver::msg::VectorInfoCart::_delta_vy_type arg)
  {
    msg_.delta_vy = std::move(arg);
    return Init_VectorInfoCart_delta_vz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_delta_vx
{
public:
  explicit Init_VectorInfoCart_delta_vx(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_delta_vy delta_vx(::septentrio_gnss_driver::msg::VectorInfoCart::_delta_vx_type arg)
  {
    msg_.delta_vx = std::move(arg);
    return Init_VectorInfoCart_delta_vy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_delta_z
{
public:
  explicit Init_VectorInfoCart_delta_z(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_delta_vx delta_z(::septentrio_gnss_driver::msg::VectorInfoCart::_delta_z_type arg)
  {
    msg_.delta_z = std::move(arg);
    return Init_VectorInfoCart_delta_vx(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_delta_y
{
public:
  explicit Init_VectorInfoCart_delta_y(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_delta_z delta_y(::septentrio_gnss_driver::msg::VectorInfoCart::_delta_y_type arg)
  {
    msg_.delta_y = std::move(arg);
    return Init_VectorInfoCart_delta_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_delta_x
{
public:
  explicit Init_VectorInfoCart_delta_x(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_delta_y delta_x(::septentrio_gnss_driver::msg::VectorInfoCart::_delta_x_type arg)
  {
    msg_.delta_x = std::move(arg);
    return Init_VectorInfoCart_delta_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_misc
{
public:
  explicit Init_VectorInfoCart_misc(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_delta_x misc(::septentrio_gnss_driver::msg::VectorInfoCart::_misc_type arg)
  {
    msg_.misc = std::move(arg);
    return Init_VectorInfoCart_delta_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_mode
{
public:
  explicit Init_VectorInfoCart_mode(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_misc mode(::septentrio_gnss_driver::msg::VectorInfoCart::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VectorInfoCart_misc(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_error
{
public:
  explicit Init_VectorInfoCart_error(::septentrio_gnss_driver::msg::VectorInfoCart & msg)
  : msg_(msg)
  {}
  Init_VectorInfoCart_mode error(::septentrio_gnss_driver::msg::VectorInfoCart::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_VectorInfoCart_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

class Init_VectorInfoCart_nr_sv
{
public:
  Init_VectorInfoCart_nr_sv()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VectorInfoCart_error nr_sv(::septentrio_gnss_driver::msg::VectorInfoCart::_nr_sv_type arg)
  {
    msg_.nr_sv = std::move(arg);
    return Init_VectorInfoCart_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::VectorInfoCart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::VectorInfoCart>()
{
  return septentrio_gnss_driver::msg::builder::Init_VectorInfoCart_nr_sv();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_CART__BUILDER_HPP_
