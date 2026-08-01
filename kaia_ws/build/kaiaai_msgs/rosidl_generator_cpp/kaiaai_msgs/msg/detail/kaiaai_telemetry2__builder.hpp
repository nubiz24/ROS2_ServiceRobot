// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__BUILDER_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kaiaai_msgs
{

namespace msg
{

namespace builder
{

class Init_KaiaaiTelemetry2_lds
{
public:
  explicit Init_KaiaaiTelemetry2_lds(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 lds(::kaiaai_msgs::msg::KaiaaiTelemetry2::_lds_type arg)
  {
    msg_.lds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_scan_start_hint
{
public:
  explicit Init_KaiaaiTelemetry2_scan_start_hint(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_lds scan_start_hint(::kaiaai_msgs::msg::KaiaaiTelemetry2::_scan_start_hint_type arg)
  {
    msg_.scan_start_hint = std::move(arg);
    return Init_KaiaaiTelemetry2_lds(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_touch
{
public:
  explicit Init_KaiaaiTelemetry2_touch(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_scan_start_hint touch(::kaiaai_msgs::msg::KaiaaiTelemetry2::_touch_type arg)
  {
    msg_.touch = std::move(arg);
    return Init_KaiaaiTelemetry2_scan_start_hint(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_cliff
{
public:
  explicit Init_KaiaaiTelemetry2_cliff(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_touch cliff(::kaiaai_msgs::msg::KaiaaiTelemetry2::_cliff_type arg)
  {
    msg_.cliff = std::move(arg);
    return Init_KaiaaiTelemetry2_touch(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_bumper
{
public:
  explicit Init_KaiaaiTelemetry2_bumper(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_cliff bumper(::kaiaai_msgs::msg::KaiaaiTelemetry2::_bumper_type arg)
  {
    msg_.bumper = std::move(arg);
    return Init_KaiaaiTelemetry2_cliff(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_distance_mm
{
public:
  explicit Init_KaiaaiTelemetry2_distance_mm(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_bumper distance_mm(::kaiaai_msgs::msg::KaiaaiTelemetry2::_distance_mm_type arg)
  {
    msg_.distance_mm = std::move(arg);
    return Init_KaiaaiTelemetry2_bumper(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_battery_mv
{
public:
  explicit Init_KaiaaiTelemetry2_battery_mv(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_distance_mm battery_mv(::kaiaai_msgs::msg::KaiaaiTelemetry2::_battery_mv_type arg)
  {
    msg_.battery_mv = std::move(arg);
    return Init_KaiaaiTelemetry2_distance_mm(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_wifi_rssi_dbm
{
public:
  explicit Init_KaiaaiTelemetry2_wifi_rssi_dbm(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_battery_mv wifi_rssi_dbm(::kaiaai_msgs::msg::KaiaaiTelemetry2::_wifi_rssi_dbm_type arg)
  {
    msg_.wifi_rssi_dbm = std::move(arg);
    return Init_KaiaaiTelemetry2_battery_mv(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_joint
{
public:
  explicit Init_KaiaaiTelemetry2_joint(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_wifi_rssi_dbm joint(::kaiaai_msgs::msg::KaiaaiTelemetry2::_joint_type arg)
  {
    msg_.joint = std::move(arg);
    return Init_KaiaaiTelemetry2_wifi_rssi_dbm(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_odom_vel_yaw
{
public:
  explicit Init_KaiaaiTelemetry2_odom_vel_yaw(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_joint odom_vel_yaw(::kaiaai_msgs::msg::KaiaaiTelemetry2::_odom_vel_yaw_type arg)
  {
    msg_.odom_vel_yaw = std::move(arg);
    return Init_KaiaaiTelemetry2_joint(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_odom_vel_x
{
public:
  explicit Init_KaiaaiTelemetry2_odom_vel_x(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_odom_vel_yaw odom_vel_x(::kaiaai_msgs::msg::KaiaaiTelemetry2::_odom_vel_x_type arg)
  {
    msg_.odom_vel_x = std::move(arg);
    return Init_KaiaaiTelemetry2_odom_vel_yaw(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_odom_pos_yaw
{
public:
  explicit Init_KaiaaiTelemetry2_odom_pos_yaw(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_odom_vel_x odom_pos_yaw(::kaiaai_msgs::msg::KaiaaiTelemetry2::_odom_pos_yaw_type arg)
  {
    msg_.odom_pos_yaw = std::move(arg);
    return Init_KaiaaiTelemetry2_odom_vel_x(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_odom_pos_y
{
public:
  explicit Init_KaiaaiTelemetry2_odom_pos_y(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_odom_pos_yaw odom_pos_y(::kaiaai_msgs::msg::KaiaaiTelemetry2::_odom_pos_y_type arg)
  {
    msg_.odom_pos_y = std::move(arg);
    return Init_KaiaaiTelemetry2_odom_pos_yaw(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_odom_pos_x
{
public:
  explicit Init_KaiaaiTelemetry2_odom_pos_x(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_odom_pos_y odom_pos_x(::kaiaai_msgs::msg::KaiaaiTelemetry2::_odom_pos_x_type arg)
  {
    msg_.odom_pos_x = std::move(arg);
    return Init_KaiaaiTelemetry2_odom_pos_y(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_seq
{
public:
  explicit Init_KaiaaiTelemetry2_seq(::kaiaai_msgs::msg::KaiaaiTelemetry2 & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry2_odom_pos_x seq(::kaiaai_msgs::msg::KaiaaiTelemetry2::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_KaiaaiTelemetry2_odom_pos_x(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

class Init_KaiaaiTelemetry2_stamp
{
public:
  Init_KaiaaiTelemetry2_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KaiaaiTelemetry2_seq stamp(::kaiaai_msgs::msg::KaiaaiTelemetry2::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_KaiaaiTelemetry2_seq(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kaiaai_msgs::msg::KaiaaiTelemetry2>()
{
  return kaiaai_msgs::msg::builder::Init_KaiaaiTelemetry2_stamp();
}

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY2__BUILDER_HPP_
