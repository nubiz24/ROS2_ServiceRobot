// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "kaiaai_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace kaiaai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
cdr_serialize(
  const kaiaai_msgs::msg::KaiaaiTelemetry & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kaiaai_msgs::msg::KaiaaiTelemetry & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
get_serialized_size(
  const kaiaai_msgs::msg::KaiaaiTelemetry & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
max_serialized_size_KaiaaiTelemetry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kaiaai_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kaiaai_msgs, msg, KaiaaiTelemetry)();

#ifdef __cplusplus
}
#endif

#endif  // KAIAAI_MSGS__MSG__DETAIL__KAIAAI_TELEMETRY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
