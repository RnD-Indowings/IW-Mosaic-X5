// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/MeasEpochChannelType1.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_MeasEpochChannelType1_type2
{
public:
  explicit Init_MeasEpochChannelType1_type2(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 type2(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_type2_type arg)
  {
    msg_.type2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_n2
{
public:
  explicit Init_MeasEpochChannelType1_n2(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_type2 n2(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_n2_type arg)
  {
    msg_.n2 = std::move(arg);
    return Init_MeasEpochChannelType1_type2(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_obs_info
{
public:
  explicit Init_MeasEpochChannelType1_obs_info(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_n2 obs_info(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_obs_info_type arg)
  {
    msg_.obs_info = std::move(arg);
    return Init_MeasEpochChannelType1_n2(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_lock_time
{
public:
  explicit Init_MeasEpochChannelType1_lock_time(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_obs_info lock_time(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_lock_time_type arg)
  {
    msg_.lock_time = std::move(arg);
    return Init_MeasEpochChannelType1_obs_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_cn0
{
public:
  explicit Init_MeasEpochChannelType1_cn0(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_lock_time cn0(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_cn0_type arg)
  {
    msg_.cn0 = std::move(arg);
    return Init_MeasEpochChannelType1_lock_time(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_carrier_msb
{
public:
  explicit Init_MeasEpochChannelType1_carrier_msb(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_cn0 carrier_msb(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_carrier_msb_type arg)
  {
    msg_.carrier_msb = std::move(arg);
    return Init_MeasEpochChannelType1_cn0(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_carrier_lsb
{
public:
  explicit Init_MeasEpochChannelType1_carrier_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_carrier_msb carrier_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_carrier_lsb_type arg)
  {
    msg_.carrier_lsb = std::move(arg);
    return Init_MeasEpochChannelType1_carrier_msb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_doppler
{
public:
  explicit Init_MeasEpochChannelType1_doppler(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_carrier_lsb doppler(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_doppler_type arg)
  {
    msg_.doppler = std::move(arg);
    return Init_MeasEpochChannelType1_carrier_lsb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_code_lsb
{
public:
  explicit Init_MeasEpochChannelType1_code_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_doppler code_lsb(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_code_lsb_type arg)
  {
    msg_.code_lsb = std::move(arg);
    return Init_MeasEpochChannelType1_doppler(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_misc
{
public:
  explicit Init_MeasEpochChannelType1_misc(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_code_lsb misc(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_misc_type arg)
  {
    msg_.misc = std::move(arg);
    return Init_MeasEpochChannelType1_code_lsb(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_sv_id
{
public:
  explicit Init_MeasEpochChannelType1_sv_id(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_misc sv_id(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_sv_id_type arg)
  {
    msg_.sv_id = std::move(arg);
    return Init_MeasEpochChannelType1_misc(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_type
{
public:
  explicit Init_MeasEpochChannelType1_type(::septentrio_gnss_driver::msg::MeasEpochChannelType1 & msg)
  : msg_(msg)
  {}
  Init_MeasEpochChannelType1_sv_id type(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MeasEpochChannelType1_sv_id(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

class Init_MeasEpochChannelType1_rx_channel
{
public:
  Init_MeasEpochChannelType1_rx_channel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MeasEpochChannelType1_type rx_channel(::septentrio_gnss_driver::msg::MeasEpochChannelType1::_rx_channel_type arg)
  {
    msg_.rx_channel = std::move(arg);
    return Init_MeasEpochChannelType1_type(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::MeasEpochChannelType1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::MeasEpochChannelType1>()
{
  return septentrio_gnss_driver::msg::builder::Init_MeasEpochChannelType1_rx_channel();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH_CHANNEL_TYPE1__BUILDER_HPP_
