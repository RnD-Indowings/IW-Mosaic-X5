// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/PVTGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/pvt_geodetic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_PVTGeodetic_misc
{
public:
  explicit Init_PVTGeodetic_misc(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::PVTGeodetic misc(::septentrio_gnss_driver::msg::PVTGeodetic::_misc_type arg)
  {
    msg_.misc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_v_accuracy
{
public:
  explicit Init_PVTGeodetic_v_accuracy(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_misc v_accuracy(::septentrio_gnss_driver::msg::PVTGeodetic::_v_accuracy_type arg)
  {
    msg_.v_accuracy = std::move(arg);
    return Init_PVTGeodetic_misc(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_h_accuracy
{
public:
  explicit Init_PVTGeodetic_h_accuracy(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_v_accuracy h_accuracy(::septentrio_gnss_driver::msg::PVTGeodetic::_h_accuracy_type arg)
  {
    msg_.h_accuracy = std::move(arg);
    return Init_PVTGeodetic_v_accuracy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_latency
{
public:
  explicit Init_PVTGeodetic_latency(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_h_accuracy latency(::septentrio_gnss_driver::msg::PVTGeodetic::_latency_type arg)
  {
    msg_.latency = std::move(arg);
    return Init_PVTGeodetic_h_accuracy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_ppp_info
{
public:
  explicit Init_PVTGeodetic_ppp_info(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_latency ppp_info(::septentrio_gnss_driver::msg::PVTGeodetic::_ppp_info_type arg)
  {
    msg_.ppp_info = std::move(arg);
    return Init_PVTGeodetic_latency(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_nr_bases
{
public:
  explicit Init_PVTGeodetic_nr_bases(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_ppp_info nr_bases(::septentrio_gnss_driver::msg::PVTGeodetic::_nr_bases_type arg)
  {
    msg_.nr_bases = std::move(arg);
    return Init_PVTGeodetic_ppp_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_alert_flag
{
public:
  explicit Init_PVTGeodetic_alert_flag(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_nr_bases alert_flag(::septentrio_gnss_driver::msg::PVTGeodetic::_alert_flag_type arg)
  {
    msg_.alert_flag = std::move(arg);
    return Init_PVTGeodetic_nr_bases(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_signal_info
{
public:
  explicit Init_PVTGeodetic_signal_info(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_alert_flag signal_info(::septentrio_gnss_driver::msg::PVTGeodetic::_signal_info_type arg)
  {
    msg_.signal_info = std::move(arg);
    return Init_PVTGeodetic_alert_flag(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_mean_corr_age
{
public:
  explicit Init_PVTGeodetic_mean_corr_age(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_signal_info mean_corr_age(::septentrio_gnss_driver::msg::PVTGeodetic::_mean_corr_age_type arg)
  {
    msg_.mean_corr_age = std::move(arg);
    return Init_PVTGeodetic_signal_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_reference_id
{
public:
  explicit Init_PVTGeodetic_reference_id(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_mean_corr_age reference_id(::septentrio_gnss_driver::msg::PVTGeodetic::_reference_id_type arg)
  {
    msg_.reference_id = std::move(arg);
    return Init_PVTGeodetic_mean_corr_age(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_wa_corr_info
{
public:
  explicit Init_PVTGeodetic_wa_corr_info(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_reference_id wa_corr_info(::septentrio_gnss_driver::msg::PVTGeodetic::_wa_corr_info_type arg)
  {
    msg_.wa_corr_info = std::move(arg);
    return Init_PVTGeodetic_reference_id(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_nr_sv
{
public:
  explicit Init_PVTGeodetic_nr_sv(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_wa_corr_info nr_sv(::septentrio_gnss_driver::msg::PVTGeodetic::_nr_sv_type arg)
  {
    msg_.nr_sv = std::move(arg);
    return Init_PVTGeodetic_wa_corr_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_datum
{
public:
  explicit Init_PVTGeodetic_datum(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_nr_sv datum(::septentrio_gnss_driver::msg::PVTGeodetic::_datum_type arg)
  {
    msg_.datum = std::move(arg);
    return Init_PVTGeodetic_nr_sv(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_time_system
{
public:
  explicit Init_PVTGeodetic_time_system(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_datum time_system(::septentrio_gnss_driver::msg::PVTGeodetic::_time_system_type arg)
  {
    msg_.time_system = std::move(arg);
    return Init_PVTGeodetic_datum(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_rx_clk_drift
{
public:
  explicit Init_PVTGeodetic_rx_clk_drift(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_time_system rx_clk_drift(::septentrio_gnss_driver::msg::PVTGeodetic::_rx_clk_drift_type arg)
  {
    msg_.rx_clk_drift = std::move(arg);
    return Init_PVTGeodetic_time_system(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_rx_clk_bias
{
public:
  explicit Init_PVTGeodetic_rx_clk_bias(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_rx_clk_drift rx_clk_bias(::septentrio_gnss_driver::msg::PVTGeodetic::_rx_clk_bias_type arg)
  {
    msg_.rx_clk_bias = std::move(arg);
    return Init_PVTGeodetic_rx_clk_drift(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_cog
{
public:
  explicit Init_PVTGeodetic_cog(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_rx_clk_bias cog(::septentrio_gnss_driver::msg::PVTGeodetic::_cog_type arg)
  {
    msg_.cog = std::move(arg);
    return Init_PVTGeodetic_rx_clk_bias(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_vu
{
public:
  explicit Init_PVTGeodetic_vu(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_cog vu(::septentrio_gnss_driver::msg::PVTGeodetic::_vu_type arg)
  {
    msg_.vu = std::move(arg);
    return Init_PVTGeodetic_cog(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_ve
{
public:
  explicit Init_PVTGeodetic_ve(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_vu ve(::septentrio_gnss_driver::msg::PVTGeodetic::_ve_type arg)
  {
    msg_.ve = std::move(arg);
    return Init_PVTGeodetic_vu(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_vn
{
public:
  explicit Init_PVTGeodetic_vn(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_ve vn(::septentrio_gnss_driver::msg::PVTGeodetic::_vn_type arg)
  {
    msg_.vn = std::move(arg);
    return Init_PVTGeodetic_ve(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_undulation
{
public:
  explicit Init_PVTGeodetic_undulation(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_vn undulation(::septentrio_gnss_driver::msg::PVTGeodetic::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_PVTGeodetic_vn(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_height
{
public:
  explicit Init_PVTGeodetic_height(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_undulation height(::septentrio_gnss_driver::msg::PVTGeodetic::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_PVTGeodetic_undulation(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_longitude
{
public:
  explicit Init_PVTGeodetic_longitude(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_height longitude(::septentrio_gnss_driver::msg::PVTGeodetic::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_PVTGeodetic_height(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_latitude
{
public:
  explicit Init_PVTGeodetic_latitude(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_longitude latitude(::septentrio_gnss_driver::msg::PVTGeodetic::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_PVTGeodetic_longitude(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_error
{
public:
  explicit Init_PVTGeodetic_error(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_latitude error(::septentrio_gnss_driver::msg::PVTGeodetic::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PVTGeodetic_latitude(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_mode
{
public:
  explicit Init_PVTGeodetic_mode(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_error mode(::septentrio_gnss_driver::msg::PVTGeodetic::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_PVTGeodetic_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_block_header
{
public:
  explicit Init_PVTGeodetic_block_header(::septentrio_gnss_driver::msg::PVTGeodetic & msg)
  : msg_(msg)
  {}
  Init_PVTGeodetic_mode block_header(::septentrio_gnss_driver::msg::PVTGeodetic::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_PVTGeodetic_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

class Init_PVTGeodetic_header
{
public:
  Init_PVTGeodetic_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PVTGeodetic_block_header header(::septentrio_gnss_driver::msg::PVTGeodetic::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PVTGeodetic_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTGeodetic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::PVTGeodetic>()
{
  return septentrio_gnss_driver::msg::builder::Init_PVTGeodetic_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__BUILDER_HPP_
