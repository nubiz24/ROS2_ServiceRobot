// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__STRUCT_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'joint'
#include "kaiaai_msgs/msg/detail/joint_pos_vel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kaiaai_msgs__msg__KaiaaiTelemetry2 __attribute__((deprecated))
#else
# define DEPRECATED__kaiaai_msgs__msg__KaiaaiTelemetry2 __declspec(deprecated)
#endif

namespace kaiaai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KaiaaiTelemetry2_
{
  using Type = KaiaaiTelemetry2_<ContainerAllocator>;

  explicit KaiaaiTelemetry2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
      this->odom_pos_x = 0.0f;
      this->odom_pos_y = 0.0f;
      this->odom_pos_yaw = 0.0f;
      this->odom_vel_x = 0.0f;
      this->odom_vel_yaw = 0.0f;
      this->wifi_rssi_dbm = 0;
      this->battery_mv = 0;
      this->scan_start_hint = false;
    }
  }

  explicit KaiaaiTelemetry2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seq = 0ul;
      this->odom_pos_x = 0.0f;
      this->odom_pos_y = 0.0f;
      this->odom_pos_yaw = 0.0f;
      this->odom_vel_x = 0.0f;
      this->odom_vel_yaw = 0.0f;
      this->wifi_rssi_dbm = 0;
      this->battery_mv = 0;
      this->scan_start_hint = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _odom_pos_x_type =
    float;
  _odom_pos_x_type odom_pos_x;
  using _odom_pos_y_type =
    float;
  _odom_pos_y_type odom_pos_y;
  using _odom_pos_yaw_type =
    float;
  _odom_pos_yaw_type odom_pos_yaw;
  using _odom_vel_x_type =
    float;
  _odom_vel_x_type odom_vel_x;
  using _odom_vel_yaw_type =
    float;
  _odom_vel_yaw_type odom_vel_yaw;
  using _joint_type =
    rosidl_runtime_cpp::BoundedVector<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>>>;
  _joint_type joint;
  using _wifi_rssi_dbm_type =
    int8_t;
  _wifi_rssi_dbm_type wifi_rssi_dbm;
  using _battery_mv_type =
    uint16_t;
  _battery_mv_type battery_mv;
  using _distance_mm_type =
    rosidl_runtime_cpp::BoundedVector<uint16_t, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _distance_mm_type distance_mm;
  using _bumper_type =
    rosidl_runtime_cpp::BoundedVector<bool, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _bumper_type bumper;
  using _cliff_type =
    rosidl_runtime_cpp::BoundedVector<bool, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _cliff_type cliff;
  using _touch_type =
    rosidl_runtime_cpp::BoundedVector<uint16_t, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _touch_type touch;
  using _scan_start_hint_type =
    bool;
  _scan_start_hint_type scan_start_hint;
  using _lds_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 511, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _lds_type lds;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__odom_pos_x(
    const float & _arg)
  {
    this->odom_pos_x = _arg;
    return *this;
  }
  Type & set__odom_pos_y(
    const float & _arg)
  {
    this->odom_pos_y = _arg;
    return *this;
  }
  Type & set__odom_pos_yaw(
    const float & _arg)
  {
    this->odom_pos_yaw = _arg;
    return *this;
  }
  Type & set__odom_vel_x(
    const float & _arg)
  {
    this->odom_vel_x = _arg;
    return *this;
  }
  Type & set__odom_vel_yaw(
    const float & _arg)
  {
    this->odom_vel_yaw = _arg;
    return *this;
  }
  Type & set__joint(
    const rosidl_runtime_cpp::BoundedVector<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kaiaai_msgs::msg::JointPosVel_<ContainerAllocator>>> & _arg)
  {
    this->joint = _arg;
    return *this;
  }
  Type & set__wifi_rssi_dbm(
    const int8_t & _arg)
  {
    this->wifi_rssi_dbm = _arg;
    return *this;
  }
  Type & set__battery_mv(
    const uint16_t & _arg)
  {
    this->battery_mv = _arg;
    return *this;
  }
  Type & set__distance_mm(
    const rosidl_runtime_cpp::BoundedVector<uint16_t, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->distance_mm = _arg;
    return *this;
  }
  Type & set__bumper(
    const rosidl_runtime_cpp::BoundedVector<bool, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->bumper = _arg;
    return *this;
  }
  Type & set__cliff(
    const rosidl_runtime_cpp::BoundedVector<bool, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->cliff = _arg;
    return *this;
  }
  Type & set__touch(
    const rosidl_runtime_cpp::BoundedVector<uint16_t, 15, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->touch = _arg;
    return *this;
  }
  Type & set__scan_start_hint(
    const bool & _arg)
  {
    this->scan_start_hint = _arg;
    return *this;
  }
  Type & set__lds(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 511, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->lds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator> *;
  using ConstRawPtr =
    const kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kaiaai_msgs__msg__KaiaaiTelemetry2
    std::shared_ptr<kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kaiaai_msgs__msg__KaiaaiTelemetry2
    std::shared_ptr<kaiaai_msgs::msg::KaiaaiTelemetry2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KaiaaiTelemetry2_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->odom_pos_x != other.odom_pos_x) {
      return false;
    }
    if (this->odom_pos_y != other.odom_pos_y) {
      return false;
    }
    if (this->odom_pos_yaw != other.odom_pos_yaw) {
      return false;
    }
    if (this->odom_vel_x != other.odom_vel_x) {
      return false;
    }
    if (this->odom_vel_yaw != other.odom_vel_yaw) {
      return false;
    }
    if (this->joint != other.joint) {
      return false;
    }
    if (this->wifi_rssi_dbm != other.wifi_rssi_dbm) {
      return false;
    }
    if (this->battery_mv != other.battery_mv) {
      return false;
    }
    if (this->distance_mm != other.distance_mm) {
      return false;
    }
    if (this->bumper != other.bumper) {
      return false;
    }
    if (this->cliff != other.cliff) {
      return false;
    }
    if (this->touch != other.touch) {
      return false;
    }
    if (this->scan_start_hint != other.scan_start_hint) {
      return false;
    }
    if (this->lds != other.lds) {
      return false;
    }
    return true;
  }
  bool operator!=(const KaiaaiTelemetry2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KaiaaiTelemetry2_

// alias to use template instance with default allocator
using KaiaaiTelemetry2 =
  kaiaai_msgs::msg::KaiaaiTelemetry2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__STRUCT_HPP_
