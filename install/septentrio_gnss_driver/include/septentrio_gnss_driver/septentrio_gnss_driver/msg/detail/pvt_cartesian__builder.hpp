// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/PVTCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_CARTESIAN__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_CARTESIAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/pvt_cartesian__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_PVTCartesian_misc
{
public:
  explicit Init_PVTCartesian_misc(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::PVTCartesian misc(::septentrio_gnss_driver::msg::PVTCartesian::_misc_type arg)
  {
    msg_.misc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_v_accuracy
{
public:
  explicit Init_PVTCartesian_v_accuracy(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_misc v_accuracy(::septentrio_gnss_driver::msg::PVTCartesian::_v_accuracy_type arg)
  {
    msg_.v_accuracy = std::move(arg);
    return Init_PVTCartesian_misc(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_h_accuracy
{
public:
  explicit Init_PVTCartesian_h_accuracy(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_v_accuracy h_accuracy(::septentrio_gnss_driver::msg::PVTCartesian::_h_accuracy_type arg)
  {
    msg_.h_accuracy = std::move(arg);
    return Init_PVTCartesian_v_accuracy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_latency
{
public:
  explicit Init_PVTCartesian_latency(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_h_accuracy latency(::septentrio_gnss_driver::msg::PVTCartesian::_latency_type arg)
  {
    msg_.latency = std::move(arg);
    return Init_PVTCartesian_h_accuracy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_ppp_info
{
public:
  explicit Init_PVTCartesian_ppp_info(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_latency ppp_info(::septentrio_gnss_driver::msg::PVTCartesian::_ppp_info_type arg)
  {
    msg_.ppp_info = std::move(arg);
    return Init_PVTCartesian_latency(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_nr_bases
{
public:
  explicit Init_PVTCartesian_nr_bases(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_ppp_info nr_bases(::septentrio_gnss_driver::msg::PVTCartesian::_nr_bases_type arg)
  {
    msg_.nr_bases = std::move(arg);
    return Init_PVTCartesian_ppp_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_alert_flag
{
public:
  explicit Init_PVTCartesian_alert_flag(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_nr_bases alert_flag(::septentrio_gnss_driver::msg::PVTCartesian::_alert_flag_type arg)
  {
    msg_.alert_flag = std::move(arg);
    return Init_PVTCartesian_nr_bases(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_signal_info
{
public:
  explicit Init_PVTCartesian_signal_info(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_alert_flag signal_info(::septentrio_gnss_driver::msg::PVTCartesian::_signal_info_type arg)
  {
    msg_.signal_info = std::move(arg);
    return Init_PVTCartesian_alert_flag(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_mean_corr_age
{
public:
  explicit Init_PVTCartesian_mean_corr_age(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_signal_info mean_corr_age(::septentrio_gnss_driver::msg::PVTCartesian::_mean_corr_age_type arg)
  {
    msg_.mean_corr_age = std::move(arg);
    return Init_PVTCartesian_signal_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_reference_id
{
public:
  explicit Init_PVTCartesian_reference_id(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_mean_corr_age reference_id(::septentrio_gnss_driver::msg::PVTCartesian::_reference_id_type arg)
  {
    msg_.reference_id = std::move(arg);
    return Init_PVTCartesian_mean_corr_age(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_wa_corr_info
{
public:
  explicit Init_PVTCartesian_wa_corr_info(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_reference_id wa_corr_info(::septentrio_gnss_driver::msg::PVTCartesian::_wa_corr_info_type arg)
  {
    msg_.wa_corr_info = std::move(arg);
    return Init_PVTCartesian_reference_id(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_nr_sv
{
public:
  explicit Init_PVTCartesian_nr_sv(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_wa_corr_info nr_sv(::septentrio_gnss_driver::msg::PVTCartesian::_nr_sv_type arg)
  {
    msg_.nr_sv = std::move(arg);
    return Init_PVTCartesian_wa_corr_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_datum
{
public:
  explicit Init_PVTCartesian_datum(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_nr_sv datum(::septentrio_gnss_driver::msg::PVTCartesian::_datum_type arg)
  {
    msg_.datum = std::move(arg);
    return Init_PVTCartesian_nr_sv(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_time_system
{
public:
  explicit Init_PVTCartesian_time_system(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_datum time_system(::septentrio_gnss_driver::msg::PVTCartesian::_time_system_type arg)
  {
    msg_.time_system = std::move(arg);
    return Init_PVTCartesian_datum(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_rx_clk_drift
{
public:
  explicit Init_PVTCartesian_rx_clk_drift(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_time_system rx_clk_drift(::septentrio_gnss_driver::msg::PVTCartesian::_rx_clk_drift_type arg)
  {
    msg_.rx_clk_drift = std::move(arg);
    return Init_PVTCartesian_time_system(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_rx_clk_bias
{
public:
  explicit Init_PVTCartesian_rx_clk_bias(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_rx_clk_drift rx_clk_bias(::septentrio_gnss_driver::msg::PVTCartesian::_rx_clk_bias_type arg)
  {
    msg_.rx_clk_bias = std::move(arg);
    return Init_PVTCartesian_rx_clk_drift(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_cog
{
public:
  explicit Init_PVTCartesian_cog(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_rx_clk_bias cog(::septentrio_gnss_driver::msg::PVTCartesian::_cog_type arg)
  {
    msg_.cog = std::move(arg);
    return Init_PVTCartesian_rx_clk_bias(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_vz
{
public:
  explicit Init_PVTCartesian_vz(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_cog vz(::septentrio_gnss_driver::msg::PVTCartesian::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_PVTCartesian_cog(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_vy
{
public:
  explicit Init_PVTCartesian_vy(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_vz vy(::septentrio_gnss_driver::msg::PVTCartesian::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_PVTCartesian_vz(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_vx
{
public:
  explicit Init_PVTCartesian_vx(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_vy vx(::septentrio_gnss_driver::msg::PVTCartesian::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_PVTCartesian_vy(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_undulation
{
public:
  explicit Init_PVTCartesian_undulation(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_vx undulation(::septentrio_gnss_driver::msg::PVTCartesian::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_PVTCartesian_vx(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_z
{
public:
  explicit Init_PVTCartesian_z(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_undulation z(::septentrio_gnss_driver::msg::PVTCartesian::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PVTCartesian_undulation(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_y
{
public:
  explicit Init_PVTCartesian_y(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_z y(::septentrio_gnss_driver::msg::PVTCartesian::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PVTCartesian_z(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_x
{
public:
  explicit Init_PVTCartesian_x(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_y x(::septentrio_gnss_driver::msg::PVTCartesian::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PVTCartesian_y(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_error
{
public:
  explicit Init_PVTCartesian_error(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_x error(::septentrio_gnss_driver::msg::PVTCartesian::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PVTCartesian_x(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_mode
{
public:
  explicit Init_PVTCartesian_mode(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_error mode(::septentrio_gnss_driver::msg::PVTCartesian::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_PVTCartesian_error(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_block_header
{
public:
  explicit Init_PVTCartesian_block_header(::septentrio_gnss_driver::msg::PVTCartesian & msg)
  : msg_(msg)
  {}
  Init_PVTCartesian_mode block_header(::septentrio_gnss_driver::msg::PVTCartesian::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_PVTCartesian_mode(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

class Init_PVTCartesian_header
{
public:
  Init_PVTCartesian_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PVTCartesian_block_header header(::septentrio_gnss_driver::msg::PVTCartesian::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PVTCartesian_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::PVTCartesian msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::PVTCartesian>()
{
  return septentrio_gnss_driver::msg::builder::Init_PVTCartesian_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_CARTESIAN__BUILDER_HPP_
