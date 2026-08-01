// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__functions.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kaiaai_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KaiaaiTelemetry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kaiaai_msgs::msg::KaiaaiTelemetry(_init);
}

void KaiaaiTelemetry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kaiaai_msgs::msg::KaiaaiTelemetry *>(message_memory);
  typed_message->~KaiaaiTelemetry();
}

size_t size_function__KaiaaiTelemetry__joint_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KaiaaiTelemetry__joint_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__KaiaaiTelemetry__joint_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__KaiaaiTelemetry__joint_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__KaiaaiTelemetry__joint_pos(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__KaiaaiTelemetry__joint_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__KaiaaiTelemetry__joint_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__KaiaaiTelemetry__joint_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KaiaaiTelemetry__joint_vel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KaiaaiTelemetry__joint_vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__KaiaaiTelemetry__joint_vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__KaiaaiTelemetry__joint_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__KaiaaiTelemetry__joint_vel(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__KaiaaiTelemetry__joint_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__KaiaaiTelemetry__joint_vel(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__KaiaaiTelemetry__joint_vel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KaiaaiTelemetry__lds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KaiaaiTelemetry__lds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__KaiaaiTelemetry__lds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__KaiaaiTelemetry__lds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__KaiaaiTelemetry__lds(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__KaiaaiTelemetry__lds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__KaiaaiTelemetry__lds(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__KaiaaiTelemetry__lds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KaiaaiTelemetry_message_member_array[10] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "seq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, seq),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "odom_pos_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, odom_pos_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "odom_pos_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, odom_pos_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "odom_pos_yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, odom_pos_yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "odom_vel_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, odom_vel_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "odom_vel_yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, odom_vel_yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, joint_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry__joint_pos,  // size() function pointer
    get_const_function__KaiaaiTelemetry__joint_pos,  // get_const(index) function pointer
    get_function__KaiaaiTelemetry__joint_pos,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry__joint_pos,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry__joint_pos,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry__joint_pos  // resize(index) function pointer
  },
  {
    "joint_vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, joint_vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry__joint_vel,  // size() function pointer
    get_const_function__KaiaaiTelemetry__joint_vel,  // get_const(index) function pointer
    get_function__KaiaaiTelemetry__joint_vel,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry__joint_vel,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry__joint_vel,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry__joint_vel  // resize(index) function pointer
  },
  {
    "lds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry, lds),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry__lds,  // size() function pointer
    get_const_function__KaiaaiTelemetry__lds,  // get_const(index) function pointer
    get_function__KaiaaiTelemetry__lds,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry__lds,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry__lds,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry__lds  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KaiaaiTelemetry_message_members = {
  "kaiaai_msgs::msg",  // message namespace
  "KaiaaiTelemetry",  // message name
  10,  // number of fields
  sizeof(kaiaai_msgs::msg::KaiaaiTelemetry),
  KaiaaiTelemetry_message_member_array,  // message members
  KaiaaiTelemetry_init_function,  // function to initialize message memory (memory has to be allocated)
  KaiaaiTelemetry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KaiaaiTelemetry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KaiaaiTelemetry_message_members,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_hash,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_description,
  &kaiaai_msgs__msg__KaiaaiTelemetry__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kaiaai_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kaiaai_msgs::msg::KaiaaiTelemetry>()
{
  return &::kaiaai_msgs::msg::rosidl_typesupport_introspection_cpp::KaiaaiTelemetry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kaiaai_msgs, msg, KaiaaiTelemetry)() {
  return &::kaiaai_msgs::msg::rosidl_typesupport_introspection_cpp::KaiaaiTelemetry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
