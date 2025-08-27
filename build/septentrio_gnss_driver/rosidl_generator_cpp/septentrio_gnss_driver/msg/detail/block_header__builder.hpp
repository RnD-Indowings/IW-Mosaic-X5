// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from septentrio_gnss_driver:msg/BlockHeader.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__BUILDER_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "septentrio_gnss_driver/msg/detail/block_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace septentrio_gnss_driver
{

namespace msg
{

namespace builder
{

class Init_BlockHeader_wnc
{
public:
  explicit Init_BlockHeader_wnc(::septentrio_gnss_driver::msg::BlockHeader & msg)
  : msg_(msg)
  {}
  ::septentrio_gnss_driver::msg::BlockHeader wnc(::septentrio_gnss_driver::msg::BlockHeader::_wnc_type arg)
  {
    msg_.wnc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BlockHeader msg_;
};

class Init_BlockHeader_tow
{
public:
  explicit Init_BlockHeader_tow(::septentrio_gnss_driver::msg::BlockHeader & msg)
  : msg_(msg)
  {}
  Init_BlockHeader_wnc tow(::septentrio_gnss_driver::msg::BlockHeader::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_BlockHeader_wnc(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BlockHeader msg_;
};

class Init_BlockHeader_length
{
public:
  explicit Init_BlockHeader_length(::septentrio_gnss_driver::msg::BlockHeader & msg)
  : msg_(msg)
  {}
  Init_BlockHeader_tow length(::septentrio_gnss_driver::msg::BlockHeader::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_BlockHeader_tow(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BlockHeader msg_;
};

class Init_BlockHeader_revision
{
public:
  explicit Init_BlockHeader_revision(::septentrio_gnss_driver::msg::BlockHeader & msg)
  : msg_(msg)
  {}
  Init_BlockHeader_length revision(::septentrio_gnss_driver::msg::BlockHeader::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_BlockHeader_length(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BlockHeader msg_;
};

class Init_BlockHeader_id
{
public:
  explicit Init_BlockHeader_id(::septentrio_gnss_driver::msg::BlockHeader & msg)
  : msg_(msg)
  {}
  Init_BlockHeader_revision id(::septentrio_gnss_driver::msg::BlockHeader::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BlockHeader_revision(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BlockHeader msg_;
};

class Init_BlockHeader_crc
{
public:
  explicit Init_BlockHeader_crc(::septentrio_gnss_driver::msg::BlockHeader & msg)
  : msg_(msg)
  {}
  Init_BlockHeader_id crc(::septentrio_gnss_driver::msg::BlockHeader::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_BlockHeader_id(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BlockHeader msg_;
};

class Init_BlockHeader_sync_2
{
public:
  explicit Init_BlockHeader_sync_2(::septentrio_gnss_driver::msg::BlockHeader & msg)
  : msg_(msg)
  {}
  Init_BlockHeader_crc sync_2(::septentrio_gnss_driver::msg::BlockHeader::_sync_2_type arg)
  {
    msg_.sync_2 = std::move(arg);
    return Init_BlockHeader_crc(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BlockHeader msg_;
};

class Init_BlockHeader_sync_1
{
public:
  Init_BlockHeader_sync_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockHeader_sync_2 sync_1(::septentrio_gnss_driver::msg::BlockHeader::_sync_1_type arg)
  {
    msg_.sync_1 = std::move(arg);
    return Init_BlockHeader_sync_2(msg_);
  }

private:
  ::septentrio_gnss_driver::msg::BlockHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::septentrio_gnss_driver::msg::BlockHeader>()
{
  return septentrio_gnss_driver::msg::builder::Init_BlockHeader_sync_1();
}

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__BUILDER_HPP_
