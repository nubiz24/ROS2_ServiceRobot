// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kaiaai_msgs:msg/OnlineEvent.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__BUILDER_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kaiaai_msgs/msg/detail/online_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kaiaai_msgs
{

namespace msg
{

namespace builder
{

class Init_OnlineEvent_diag
{
public:
  explicit Init_OnlineEvent_diag(::kaiaai_msgs::msg::OnlineEvent & msg)
  : msg_(msg)
  {}
  ::kaiaai_msgs::msg::OnlineEvent diag(::kaiaai_msgs::msg::OnlineEvent::_diag_type arg)
  {
    msg_.diag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kaiaai_msgs::msg::OnlineEvent msg_;
};

class Init_OnlineEvent_comment
{
public:
  explicit Init_OnlineEvent_comment(::kaiaai_msgs::msg::OnlineEvent & msg)
  : msg_(msg)
  {}
  Init_OnlineEvent_diag comment(::kaiaai_msgs::msg::OnlineEvent::_comment_type arg)
  {
    msg_.comment = std::move(arg);
    return Init_OnlineEvent_diag(msg_);
  }

private:
  ::kaiaai_msgs::msg::OnlineEvent msg_;
};

class Init_OnlineEvent_event
{
public:
  Init_OnlineEvent_event()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OnlineEvent_comment event(::kaiaai_msgs::msg::OnlineEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_OnlineEvent_comment(msg_);
  }

private:
  ::kaiaai_msgs::msg::OnlineEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kaiaai_msgs::msg::OnlineEvent>()
{
  return kaiaai_msgs::msg::builder::Init_OnlineEvent_event();
}

}  // namespace kaiaai_msgs

#endif  // KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__BUILDER_HPP_
