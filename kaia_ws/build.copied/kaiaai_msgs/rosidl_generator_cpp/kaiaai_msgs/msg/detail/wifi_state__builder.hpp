// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kaiaai_msgs:msg/WifiState.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__WIFI_STATE__BUILDER_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__WIFI_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kaiaai_msgs/msg/detail/wifi_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kaiaai_msgs
{

namespace msg
{

namespace builder
{

class Init_WifiState_rssi_dbm
{
public:
  explicit Init_WifiState_rssi_dbm(::kaiaai_msgs::msg::WifiState & msg)
  : msg_(msg)
  {}
  ::kaiaai_msgs::msg::WifiState rssi_dbm(::kaiaai_msgs::msg::WifiState::_rssi_dbm_type arg)
  {
    msg_.rssi_dbm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kaiaai_msgs::msg::WifiState msg_;
};

class Init_WifiState_stamp
{
public:
  Init_WifiState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiState_rssi_dbm stamp(::kaiaai_msgs::msg::WifiState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_WifiState_rssi_dbm(msg_);
  }

private:
  ::kaiaai_msgs::msg::WifiState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kaiaai_msgs::msg::WifiState>()
{
  return kaiaai_msgs::msg::builder::Init_WifiState_stamp();
}

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__WIFI_STATE__BUILDER_HPP_
