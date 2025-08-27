// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/RFBand.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/rf_band__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_RFBand_info
{
public:
  explicit Init_RFBand_info(::septentrio_gnss_driver::msg::RFBand & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::RFBand info(::septentrio_gnss_driver::msg::RFBand::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFBand msg_;
};

class Init_RFBand_bandwidth
{
public:
  explicit Init_RFBand_bandwidth(::septentrio_gnss_driver::msg::RFBand & msg)
  : msg_(msg)
  {}
  Init_RFBand_info bandwidth(::septentrio_gnss_driver::msg::RFBand::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_RFBand_info(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFBand msg_;
};

class Init_RFBand_frequency
{
public:
  Init_RFBand_frequency()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RFBand_bandwidth frequency(::septentrio_gnss_driver::msg::RFBand::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_RFBand_bandwidth(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::RFBand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::RFBand>()
{
  return septentrio_gnss_driver::msg::builder::Init_RFBand_frequency();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__RF_BAND__BUILDER_HPP_
