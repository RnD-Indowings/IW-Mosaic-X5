// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpoch.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/meas_epoch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_MeasEpoch_type1
{
public:
  explicit Init_MeasEpoch_type1(::septentrio_gnss_driver::msg::MeasEpoch & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::MeasEpoch type1(::septentrio_gnss_driver::msg::MeasEpoch::_type1_type arg)
  {
    msg_.type1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpoch msg_;
};

class Init_MeasEpoch_cum_clk_jumps
{
public:
  explicit Init_MeasEpoch_cum_clk_jumps(::septentrio_gnss_driver::msg::MeasEpoch & msg)
  : msg_(msg)
  {}
  Init_MeasEpoch_type1 cum_clk_jumps(::septentrio_gnss_driver::msg::MeasEpoch::_cum_clk_jumps_type arg)
  {
    msg_.cum_clk_jumps = std::move(arg);
    return Init_MeasEpoch_type1(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpoch msg_;
};

class Init_MeasEpoch_common_flags
{
public:
  explicit Init_MeasEpoch_common_flags(::septentrio_gnss_driver::msg::MeasEpoch & msg)
  : msg_(msg)
  {}
  Init_MeasEpoch_cum_clk_jumps common_flags(::septentrio_gnss_driver::msg::MeasEpoch::_common_flags_type arg)
  {
    msg_.common_flags = std::move(arg);
    return Init_MeasEpoch_cum_clk_jumps(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpoch msg_;
};

class Init_MeasEpoch_sb2_length
{
public:
  explicit Init_MeasEpoch_sb2_length(::septentrio_gnss_driver::msg::MeasEpoch & msg)
  : msg_(msg)
  {}
  Init_MeasEpoch_common_flags sb2_length(::septentrio_gnss_driver::msg::MeasEpoch::_sb2_length_type arg)
  {
    msg_.sb2_length = std::move(arg);
    return Init_MeasEpoch_common_flags(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpoch msg_;
};

class Init_MeasEpoch_sb1_length
{
public:
  explicit Init_MeasEpoch_sb1_length(::septentrio_gnss_driver::msg::MeasEpoch & msg)
  : msg_(msg)
  {}
  Init_MeasEpoch_sb2_length sb1_length(::septentrio_gnss_driver::msg::MeasEpoch::_sb1_length_type arg)
  {
    msg_.sb1_length = std::move(arg);
    return Init_MeasEpoch_sb2_length(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpoch msg_;
};

class Init_MeasEpoch_n
{
public:
  explicit Init_MeasEpoch_n(::septentrio_gnss_driver::msg::MeasEpoch & msg)
  : msg_(msg)
  {}
  Init_MeasEpoch_sb1_length n(::septentrio_gnss_driver::msg::MeasEpoch::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_MeasEpoch_sb1_length(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpoch msg_;
};

class Init_MeasEpoch_block_header
{
public:
  explicit Init_MeasEpoch_block_header(::septentrio_gnss_driver::msg::MeasEpoch & msg)
  : msg_(msg)
  {}
  Init_MeasEpoch_n block_header(::septentrio_gnss_driver::msg::MeasEpoch::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_MeasEpoch_n(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpoch msg_;
};

class Init_MeasEpoch_header
{
public:
  Init_MeasEpoch_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MeasEpoch_block_header header(::septentrio_gnss_driver::msg::MeasEpoch::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MeasEpoch_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpoch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::MeasEpoch>()
{
  return septentrio_gnss_driver::msg::builder::Init_MeasEpoch_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__BUILDER_HPP_
