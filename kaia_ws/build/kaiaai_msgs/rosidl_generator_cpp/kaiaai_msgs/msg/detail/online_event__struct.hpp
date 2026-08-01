// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kaiaai_msgs:msg/OnlineEvent.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__STRUCT_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'diag'
#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kaiaai_msgs__msg__OnlineEvent __attribute__((deprecated))
#else
# define DEPRECATED__kaiaai_msgs__msg__OnlineEvent __declspec(deprecated)
#endif

namespace kaiaai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OnlineEvent_
{
  using Type = OnlineEvent_<ContainerAllocator>;

  explicit OnlineEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : diag(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event = 0;
      this->comment = "";
    }
  }

  explicit OnlineEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : comment(_alloc),
    diag(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event = 0;
      this->comment = "";
    }
  }

  // field types and members
  using _event_type =
    unsigned char;
  _event_type event;
  using _comment_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _comment_type comment;
  using _diag_type =
    diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator>;
  _diag_type diag;

  // setters for named parameter idiom
  Type & set__event(
    const unsigned char & _arg)
  {
    this->event = _arg;
    return *this;
  }
  Type & set__comment(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->comment = _arg;
    return *this;
  }
  Type & set__diag(
    const diagnostic_msgs::msg::DiagnosticArray_<ContainerAllocator> & _arg)
  {
    this->diag = _arg;
    return *this;
  }

  // constant declarations
  static constexpr unsigned char EVENT_ONLINE =
    0;
  static constexpr unsigned char EVENT_OFFLINE =
    1;

  // pointer types
  using RawPtr =
    kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kaiaai_msgs__msg__OnlineEvent
    std::shared_ptr<kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kaiaai_msgs__msg__OnlineEvent
    std::shared_ptr<kaiaai_msgs::msg::OnlineEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OnlineEvent_ & other) const
  {
    if (this->event != other.event) {
      return false;
    }
    if (this->comment != other.comment) {
      return false;
    }
    if (this->diag != other.diag) {
      return false;
    }
    return true;
  }
  bool operator!=(const OnlineEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OnlineEvent_

// alias to use template instance with default allocator
using OnlineEvent =
  kaiaai_msgs::msg::OnlineEvent_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char OnlineEvent_<ContainerAllocator>::EVENT_ONLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr unsigned char OnlineEvent_<ContainerAllocator>::EVENT_OFFLINE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__STRUCT_HPP_
