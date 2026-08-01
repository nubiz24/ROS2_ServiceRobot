// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__BUILDER_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kaiaai_msgs
{

namespace msg
{

namespace builder
{

class Init_KaiaaiTelemetry_lds
{
public:
  explicit Init_KaiaaiTelemetry_lds(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  ::kaiaai_msgs::msg::KaiaaiTelemetry lds(::kaiaai_msgs::msg::KaiaaiTelemetry::_lds_type arg)
  {
    msg_.lds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_joint_vel
{
public:
  explicit Init_KaiaaiTelemetry_joint_vel(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry_lds joint_vel(::kaiaai_msgs::msg::KaiaaiTelemetry::_joint_vel_type arg)
  {
    msg_.joint_vel = std::move(arg);
    return Init_KaiaaiTelemetry_lds(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_joint_pos
{
public:
  explicit Init_KaiaaiTelemetry_joint_pos(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry_joint_vel joint_pos(::kaiaai_msgs::msg::KaiaaiTelemetry::_joint_pos_type arg)
  {
    msg_.joint_pos = std::move(arg);
    return Init_KaiaaiTelemetry_joint_vel(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_odom_vel_yaw
{
public:
  explicit Init_KaiaaiTelemetry_odom_vel_yaw(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry_joint_pos odom_vel_yaw(::kaiaai_msgs::msg::KaiaaiTelemetry::_odom_vel_yaw_type arg)
  {
    msg_.odom_vel_yaw = std::move(arg);
    return Init_KaiaaiTelemetry_joint_pos(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_odom_vel_x
{
public:
  explicit Init_KaiaaiTelemetry_odom_vel_x(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry_odom_vel_yaw odom_vel_x(::kaiaai_msgs::msg::KaiaaiTelemetry::_odom_vel_x_type arg)
  {
    msg_.odom_vel_x = std::move(arg);
    return Init_KaiaaiTelemetry_odom_vel_yaw(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_odom_pos_yaw
{
public:
  explicit Init_KaiaaiTelemetry_odom_pos_yaw(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry_odom_vel_x odom_pos_yaw(::kaiaai_msgs::msg::KaiaaiTelemetry::_odom_pos_yaw_type arg)
  {
    msg_.odom_pos_yaw = std::move(arg);
    return Init_KaiaaiTelemetry_odom_vel_x(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_odom_pos_y
{
public:
  explicit Init_KaiaaiTelemetry_odom_pos_y(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry_odom_pos_yaw odom_pos_y(::kaiaai_msgs::msg::KaiaaiTelemetry::_odom_pos_y_type arg)
  {
    msg_.odom_pos_y = std::move(arg);
    return Init_KaiaaiTelemetry_odom_pos_yaw(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_odom_pos_x
{
public:
  explicit Init_KaiaaiTelemetry_odom_pos_x(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry_odom_pos_y odom_pos_x(::kaiaai_msgs::msg::KaiaaiTelemetry::_odom_pos_x_type arg)
  {
    msg_.odom_pos_x = std::move(arg);
    return Init_KaiaaiTelemetry_odom_pos_y(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_seq
{
public:
  explicit Init_KaiaaiTelemetry_seq(::kaiaai_msgs::msg::KaiaaiTelemetry & msg)
  : msg_(msg)
  {}
  Init_KaiaaiTelemetry_odom_pos_x seq(::kaiaai_msgs::msg::KaiaaiTelemetry::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_KaiaaiTelemetry_odom_pos_x(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

class Init_KaiaaiTelemetry_stamp
{
public:
  Init_KaiaaiTelemetry_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KaiaaiTelemetry_seq stamp(::kaiaai_msgs::msg::KaiaaiTelemetry::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_KaiaaiTelemetry_seq(msg_);
  }

private:
  ::kaiaai_msgs::msg::KaiaaiTelemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kaiaai_msgs::msg::KaiaaiTelemetry>()
{
  return kaiaai_msgs::msg::builder::Init_KaiaaiTelemetry_stamp();
}

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__BUILDER_HPP_
