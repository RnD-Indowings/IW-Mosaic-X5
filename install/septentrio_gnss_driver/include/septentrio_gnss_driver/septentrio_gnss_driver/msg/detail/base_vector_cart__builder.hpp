// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/BaseVectorCart.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_CART__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_CART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/base_vector_cart__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_BaseVectorCart_vector_info_cart
{
public:
  explicit Init_BaseVectorCart_vector_info_cart(::septentrio_gnss_driver::msg::BaseVectorCart & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::BaseVectorCart vector_info_cart(::septentrio_gnss_driver::msg::BaseVectorCart::_vector_info_cart_type arg)
  {
    msg_.vector_info_cart = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorCart msg_;
};

class Init_BaseVectorCart_sb_length
{
public:
  explicit Init_BaseVectorCart_sb_length(::septentrio_gnss_driver::msg::BaseVectorCart & msg)
  : msg_(msg)
  {}
  Init_BaseVectorCart_vector_info_cart sb_length(::septentrio_gnss_driver::msg::BaseVectorCart::_sb_length_type arg)
  {
    msg_.sb_length = std::move(arg);
    return Init_BaseVectorCart_vector_info_cart(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorCart msg_;
};

class Init_BaseVectorCart_n
{
public:
  explicit Init_BaseVectorCart_n(::septentrio_gnss_driver::msg::BaseVectorCart & msg)
  : msg_(msg)
  {}
  Init_BaseVectorCart_sb_length n(::septentrio_gnss_driver::msg::BaseVectorCart::_n_type arg)
  {
    msg_.n = std::move(arg);
    return Init_BaseVectorCart_sb_length(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorCart msg_;
};

class Init_BaseVectorCart_block_header
{
public:
  explicit Init_BaseVectorCart_block_header(::septentrio_gnss_driver::msg::BaseVectorCart & msg)
  : msg_(msg)
  {}
  Init_BaseVectorCart_n block_header(::septentrio_gnss_driver::msg::BaseVectorCart::_block_header_type arg)
  {
    msg_.block_header = std::move(arg);
    return Init_BaseVectorCart_n(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorCart msg_;
};

class Init_BaseVectorCart_header
{
public:
  Init_BaseVectorCart_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseVectorCart_block_header header(::septentrio_gnss_driver::msg::BaseVectorCart::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BaseVectorCart_block_header(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BaseVectorCart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::BaseVectorCart>()
{
  return septentrio_gnss_driver::msg::builder::Init_BaseVectorCart_header();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BASE_VECTOR_CART__BUILDER_HPP_
