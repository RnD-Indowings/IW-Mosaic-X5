// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from septentrio_gnss_driver:msg/PVTGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__STRUCT_HPP_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'block_header'
#include "septentrio_gnss_driver/msg/detail/block_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__septentrio_gnss_driver__msg__PVTGeodetic __attribute__((deprecated))
#else
# define DEPRECATED__septentrio_gnss_driver__msg__PVTGeodetic __declspec(deprecated)
#endif

namespace septentrio_gnss_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PVTGeodetic_
{
  using Type = PVTGeodetic_<ContainerAllocator>;

  explicit PVTGeodetic_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    block_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->vn = 0.0f;
      this->ve = 0.0f;
      this->vu = 0.0f;
      this->cog = 0.0f;
      this->rx_clk_bias = 0.0;
      this->rx_clk_drift = 0.0f;
      this->time_system = 0;
      this->datum = 0;
      this->nr_sv = 0;
      this->wa_corr_info = 0;
      this->reference_id = 0;
      this->mean_corr_age = 0;
      this->signal_info = 0ul;
      this->alert_flag = 0;
      this->nr_bases = 0;
      this->ppp_info = 0;
      this->latency = 0;
      this->h_accuracy = 0;
      this->v_accuracy = 0;
      this->misc = 0;
    }
  }

  explicit PVTGeodetic_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    block_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->error = 0;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->vn = 0.0f;
      this->ve = 0.0f;
      this->vu = 0.0f;
      this->cog = 0.0f;
      this->rx_clk_bias = 0.0;
      this->rx_clk_drift = 0.0f;
      this->time_system = 0;
      this->datum = 0;
      this->nr_sv = 0;
      this->wa_corr_info = 0;
      this->reference_id = 0;
      this->mean_corr_age = 0;
      this->signal_info = 0ul;
      this->alert_flag = 0;
      this->nr_bases = 0;
      this->ppp_info = 0;
      this->latency = 0;
      this->h_accuracy = 0;
      this->v_accuracy = 0;
      this->misc = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _block_header_type =
    septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator>;
  _block_header_type block_header;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _error_type =
    uint8_t;
  _error_type error;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _height_type =
    double;
  _height_type height;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _vn_type =
    float;
  _vn_type vn;
  using _ve_type =
    float;
  _ve_type ve;
  using _vu_type =
    float;
  _vu_type vu;
  using _cog_type =
    float;
  _cog_type cog;
  using _rx_clk_bias_type =
    double;
  _rx_clk_bias_type rx_clk_bias;
  using _rx_clk_drift_type =
    float;
  _rx_clk_drift_type rx_clk_drift;
  using _time_system_type =
    uint8_t;
  _time_system_type time_system;
  using _datum_type =
    uint8_t;
  _datum_type datum;
  using _nr_sv_type =
    uint8_t;
  _nr_sv_type nr_sv;
  using _wa_corr_info_type =
    uint8_t;
  _wa_corr_info_type wa_corr_info;
  using _reference_id_type =
    uint16_t;
  _reference_id_type reference_id;
  using _mean_corr_age_type =
    uint16_t;
  _mean_corr_age_type mean_corr_age;
  using _signal_info_type =
    uint32_t;
  _signal_info_type signal_info;
  using _alert_flag_type =
    uint8_t;
  _alert_flag_type alert_flag;
  using _nr_bases_type =
    uint8_t;
  _nr_bases_type nr_bases;
  using _ppp_info_type =
    uint16_t;
  _ppp_info_type ppp_info;
  using _latency_type =
    uint16_t;
  _latency_type latency;
  using _h_accuracy_type =
    uint16_t;
  _h_accuracy_type h_accuracy;
  using _v_accuracy_type =
    uint16_t;
  _v_accuracy_type v_accuracy;
  using _misc_type =
    uint8_t;
  _misc_type misc;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__block_header(
    const septentrio_gnss_driver::msg::BlockHeader_<ContainerAllocator> & _arg)
  {
    this->block_header = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__vn(
    const float & _arg)
  {
    this->vn = _arg;
    return *this;
  }
  Type & set__ve(
    const float & _arg)
  {
    this->ve = _arg;
    return *this;
  }
  Type & set__vu(
    const float & _arg)
  {
    this->vu = _arg;
    return *this;
  }
  Type & set__cog(
    const float & _arg)
  {
    this->cog = _arg;
    return *this;
  }
  Type & set__rx_clk_bias(
    const double & _arg)
  {
    this->rx_clk_bias = _arg;
    return *this;
  }
  Type & set__rx_clk_drift(
    const float & _arg)
  {
    this->rx_clk_drift = _arg;
    return *this;
  }
  Type & set__time_system(
    const uint8_t & _arg)
  {
    this->time_system = _arg;
    return *this;
  }
  Type & set__datum(
    const uint8_t & _arg)
  {
    this->datum = _arg;
    return *this;
  }
  Type & set__nr_sv(
    const uint8_t & _arg)
  {
    this->nr_sv = _arg;
    return *this;
  }
  Type & set__wa_corr_info(
    const uint8_t & _arg)
  {
    this->wa_corr_info = _arg;
    return *this;
  }
  Type & set__reference_id(
    const uint16_t & _arg)
  {
    this->reference_id = _arg;
    return *this;
  }
  Type & set__mean_corr_age(
    const uint16_t & _arg)
  {
    this->mean_corr_age = _arg;
    return *this;
  }
  Type & set__signal_info(
    const uint32_t & _arg)
  {
    this->signal_info = _arg;
    return *this;
  }
  Type & set__alert_flag(
    const uint8_t & _arg)
  {
    this->alert_flag = _arg;
    return *this;
  }
  Type & set__nr_bases(
    const uint8_t & _arg)
  {
    this->nr_bases = _arg;
    return *this;
  }
  Type & set__ppp_info(
    const uint16_t & _arg)
  {
    this->ppp_info = _arg;
    return *this;
  }
  Type & set__latency(
    const uint16_t & _arg)
  {
    this->latency = _arg;
    return *this;
  }
  Type & set__h_accuracy(
    const uint16_t & _arg)
  {
    this->h_accuracy = _arg;
    return *this;
  }
  Type & set__v_accuracy(
    const uint16_t & _arg)
  {
    this->v_accuracy = _arg;
    return *this;
  }
  Type & set__misc(
    const uint8_t & _arg)
  {
    this->misc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator> *;
  using ConstRawPtr =
    const septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__septentrio_gnss_driver__msg__PVTGeodetic
    std::shared_ptr<septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__septentrio_gnss_driver__msg__PVTGeodetic
    std::shared_ptr<septentrio_gnss_driver::msg::PVTGeodetic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PVTGeodetic_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->block_header != other.block_header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->vn != other.vn) {
      return false;
    }
    if (this->ve != other.ve) {
      return false;
    }
    if (this->vu != other.vu) {
      return false;
    }
    if (this->cog != other.cog) {
      return false;
    }
    if (this->rx_clk_bias != other.rx_clk_bias) {
      return false;
    }
    if (this->rx_clk_drift != other.rx_clk_drift) {
      return false;
    }
    if (this->time_system != other.time_system) {
      return false;
    }
    if (this->datum != other.datum) {
      return false;
    }
    if (this->nr_sv != other.nr_sv) {
      return false;
    }
    if (this->wa_corr_info != other.wa_corr_info) {
      return false;
    }
    if (this->reference_id != other.reference_id) {
      return false;
    }
    if (this->mean_corr_age != other.mean_corr_age) {
      return false;
    }
    if (this->signal_info != other.signal_info) {
      return false;
    }
    if (this->alert_flag != other.alert_flag) {
      return false;
    }
    if (this->nr_bases != other.nr_bases) {
      return false;
    }
    if (this->ppp_info != other.ppp_info) {
      return false;
    }
    if (this->latency != other.latency) {
      return false;
    }
    if (this->h_accuracy != other.h_accuracy) {
      return false;
    }
    if (this->v_accuracy != other.v_accuracy) {
      return false;
    }
    if (this->misc != other.misc) {
      return false;
    }
    return true;
  }
  bool operator!=(const PVTGeodetic_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PVTGeodetic_

// alias to use template instance with default allocator
using PVTGeodetic =
  septentrio_gnss_driver::msg::PVTGeodetic_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace septentrio_gnss_driver

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_GEODETIC__STRUCT_HPP_
