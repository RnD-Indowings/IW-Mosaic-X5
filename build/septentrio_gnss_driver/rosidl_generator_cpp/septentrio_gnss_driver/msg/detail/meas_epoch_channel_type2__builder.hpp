// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType2.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_MeasEpochChannelType2_doppler_offset_lsb
{
public:
  explicit Init_MeasEpochChannelType2_doppler_offset_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 doppler_offset_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_doppler_offset_lsb_type arg)
  {
    msg_.doppler_offset_lsb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

class Init_MeasEpochChannelType2_carrier_lsb
{
public:
  explicit Init_MeasEpochChannelType2_carrier_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType2_doppler_offset_lsb carrier_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_carrier_lsb_type arg)
  {
    msg_.carrier_lsb = std::move(arg);
    return Init_MeasEpochChannelType2_doppler_offset_lsb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

class Init_MeasEpochChannelType2_code_offset_lsb
{
public:
  explicit Init_MeasEpochChannelType2_code_offset_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType2_carrier_lsb code_offset_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_code_offset_lsb_type arg)
  {
    msg_.code_offset_lsb = std::move(arg);
    return Init_MeasEpochChannelType2_carrier_lsb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

class Init_MeasEpochChannelType2_obs_info
{
public:
  explicit Init_MeasEpochChannelType2_obs_info(::septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType2_code_offset_lsb obs_info(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_obs_info_type arg)
  {
    msg_.obs_info = std::move(arg);
    return Init_MeasEpochChannelType2_code_offset_lsb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

class Init_MeasEpochChannelType2_carrier_msb
{
public:
  explicit Init_MeasEpochChannelType2_carrier_msb(::septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType2_obs_info carrier_msb(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_carrier_msb_type arg)
  {
    msg_.carrier_msb = std::move(arg);
    return Init_MeasEpochChannelType2_obs_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

class Init_MeasEpochChannelType2_offsets_msb
{
public:
  explicit Init_MeasEpochChannelType2_offsets_msb(::septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType2_carrier_msb offsets_msb(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_offsets_msb_type arg)
  {
    msg_.offsets_msb = std::move(arg);
    return Init_MeasEpochChannelType2_carrier_msb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

class Init_MeasEpochChannelType2_cn0
{
public:
  explicit Init_MeasEpochChannelType2_cn0(::septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType2_offsets_msb cn0(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_cn0_type arg)
  {
    msg_.cn0 = std::move(arg);
    return Init_MeasEpochChannelType2_offsets_msb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

class Init_MeasEpochChannelType2_lock_time
{
public:
  explicit Init_MeasEpochChannelType2_lock_time(::septentrio_gnss_driver::msg::MeasEpochChannelType2 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType2_cn0 lock_time(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_lock_time_type arg)
  {
    msg_.lock_time = std::move(arg);
    return Init_MeasEpochChannelType2_cn0(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

class Init_MeasEpochChannelType2_type
{
public:
  Init_MeasEpochChannelType2_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MeasEpochChannelType2_lock_time type(::septentrio_gnss_driver::msg::MeasEpochChannelType2::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MeasEpochChannelType2_lock_time(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::MeasEpochChannelType2>()
{
  return septentrio_gnss_driver::msg::builder::Init_MeasEpochChannelType2_type();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE2__BUILDER_HPP_
