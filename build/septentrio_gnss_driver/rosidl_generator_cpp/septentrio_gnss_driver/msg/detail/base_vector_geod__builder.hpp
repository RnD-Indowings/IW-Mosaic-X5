// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/BaseVectorGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/base_vector_geod__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_BaseVectorGeod_vector_info_geod
{
public:
  explicit Init_BaseVectorGeod_vector_info_geod(::septentrio_gnss_driver::msg::BaseVectorGeod & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::BaseVectorGeod vector_info_geod(::septentrio_gnss_driver::msg::BaseVectorGeod::_vector_info_geod_type arg)
  {
    msg_.vector_info_geod = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorGeod msg_;
};

class Init_BaseVectorGeod_sb_length
{
public:
  explicit Init_BaseVectorGeod_sb_length(::septentrio_gnss_driver::msg::BaseVectorGeod & msg)
  : msg_(msg)
  {}
  Init_BaseVectorGeod_vector_info_geod sb_length(::septentrio_gnss_driver::msg::BaseVectorGeod::_sb_length_type arg)
  {
    msg_.sb_length = std::move(arg);
    return Init_BaseVectorGeod_vector_info_geod(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorGeod msg_;
};

class Init_BaseVectorGeod_n
{
public:
  explicit Init_BaseVectorGeod_n(::septentrio_gnss_driver::msg::BaseVectorGeod & msg)
  : msg_(msg)
  {}
  Init_BaseVectorGeod_sb_length n(::septentrio_gnss_driver::msg::BaseVectorGeod::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_BaseVectorGeod_sb_length(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorGeod msg_;
};

class Init_BaseVectorGeod_block_header
{
public:
  explicit Init_BaseVectorGeod_block_header(::septentrio_gnss_driver::msg::BaseVectorGeod & msg)
  : msg_(msg)
  {}
  Init_BaseVectorGeod_n block_header(::septentrio_gnss_driver::msg::BaseVectorGeod::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_BaseVectorGeod_n(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorGeod msg_;
};

class Init_BaseVectorGeod_header
{
public:
  Init_BaseVectorGeod_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseVectorGeod_block_header header(::septentrio_gnss_driver::msg::BaseVectorGeod::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BaseVectorGeod_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorGeod msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::BaseVectorGeod>()
{
  return septentrio_gnss_driver::msg::builder::Init_BaseVectorGeod_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_GEOD__BUILDER_HPP_
