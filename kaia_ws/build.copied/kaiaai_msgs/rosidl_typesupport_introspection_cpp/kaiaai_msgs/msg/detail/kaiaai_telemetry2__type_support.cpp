// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__functions.h"
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__struct.hpp"
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

void KaiaaiTelemetry2_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kaiaai_msgs::msg::KaiaaiTelemetry2(_init);
}

void KaiaaiTelemetry2_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kaiaai_msgs::msg::KaiaaiTelemetry2 *>(message_memory);
  typed_message->~KaiaaiTelemetry2();
}

size_t size_function__KaiaaiTelemetry2__joint(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<kaiaai_msgs::msg::JointPosVel> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KaiaaiTelemetry2__joint(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<kaiaai_msgs::msg::JointPosVel> *>(untyped_member);
  return &member[index];
}

void * get_function__KaiaaiTelemetry2__joint(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<kaiaai_msgs::msg::JointPosVel> *>(untyped_member);
  return &member[index];
}

void fetch_function__KaiaaiTelemetry2__joint(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const kaiaai_msgs::msg::JointPosVel *>(
    get_const_function__KaiaaiTelemetry2__joint(untyped_member, index));
  auto & value = *reinterpret_cast<kaiaai_msgs::msg::JointPosVel *>(untyped_value);
  value = item;
}

void assign_function__KaiaaiTelemetry2__joint(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<kaiaai_msgs::msg::JointPosVel *>(
    get_function__KaiaaiTelemetry2__joint(untyped_member, index));
  const auto & value = *reinterpret_cast<const kaiaai_msgs::msg::JointPosVel *>(untyped_value);
  item = value;
}

void resize_function__KaiaaiTelemetry2__joint(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<kaiaai_msgs::msg::JointPosVel> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KaiaaiTelemetry2__distance_mm(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KaiaaiTelemetry2__distance_mm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__KaiaaiTelemetry2__distance_mm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__KaiaaiTelemetry2__distance_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__KaiaaiTelemetry2__distance_mm(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__KaiaaiTelemetry2__distance_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__KaiaaiTelemetry2__distance_mm(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__KaiaaiTelemetry2__distance_mm(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KaiaaiTelemetry2__bumper(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__KaiaaiTelemetry2__bumper(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__KaiaaiTelemetry2__bumper(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__KaiaaiTelemetry2__bumper(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KaiaaiTelemetry2__cliff(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__KaiaaiTelemetry2__cliff(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__KaiaaiTelemetry2__cliff(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__KaiaaiTelemetry2__cliff(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KaiaaiTelemetry2__touch(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KaiaaiTelemetry2__touch(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__KaiaaiTelemetry2__touch(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__KaiaaiTelemetry2__touch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__KaiaaiTelemetry2__touch(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__KaiaaiTelemetry2__touch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__KaiaaiTelemetry2__touch(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__KaiaaiTelemetry2__touch(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__KaiaaiTelemetry2__lds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KaiaaiTelemetry2__lds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__KaiaaiTelemetry2__lds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__KaiaaiTelemetry2__lds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__KaiaaiTelemetry2__lds(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__KaiaaiTelemetry2__lds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__KaiaaiTelemetry2__lds(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__KaiaaiTelemetry2__lds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KaiaaiTelemetry2_message_member_array[16] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, stamp),  // bytes offset in struct
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
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, seq),  // bytes offset in struct
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
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, odom_pos_x),  // bytes offset in struct
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
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, odom_pos_y),  // bytes offset in struct
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
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, odom_pos_yaw),  // bytes offset in struct
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
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, odom_vel_x),  // bytes offset in struct
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
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, odom_vel_yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kaiaai_msgs::msg::JointPosVel>(),  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, joint),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry2__joint,  // size() function pointer
    get_const_function__KaiaaiTelemetry2__joint,  // get_const(index) function pointer
    get_function__KaiaaiTelemetry2__joint,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry2__joint,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry2__joint,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry2__joint  // resize(index) function pointer
  },
  {
    "wifi_rssi_dbm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, wifi_rssi_dbm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery_mv",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, battery_mv),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance_mm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, distance_mm),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry2__distance_mm,  // size() function pointer
    get_const_function__KaiaaiTelemetry2__distance_mm,  // get_const(index) function pointer
    get_function__KaiaaiTelemetry2__distance_mm,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry2__distance_mm,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry2__distance_mm,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry2__distance_mm  // resize(index) function pointer
  },
  {
    "bumper",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, bumper),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry2__bumper,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry2__bumper,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry2__bumper,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry2__bumper  // resize(index) function pointer
  },
  {
    "cliff",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, cliff),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry2__cliff,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry2__cliff,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry2__cliff,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry2__cliff  // resize(index) function pointer
  },
  {
    "touch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    15,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, touch),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry2__touch,  // size() function pointer
    get_const_function__KaiaaiTelemetry2__touch,  // get_const(index) function pointer
    get_function__KaiaaiTelemetry2__touch,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry2__touch,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry2__touch,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry2__touch  // resize(index) function pointer
  },
  {
    "scan_start_hint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, scan_start_hint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    511,  // array size
    true,  // is upper bound
    offsetof(kaiaai_msgs::msg::KaiaaiTelemetry2, lds),  // bytes offset in struct
    nullptr,  // default value
    size_function__KaiaaiTelemetry2__lds,  // size() function pointer
    get_const_function__KaiaaiTelemetry2__lds,  // get_const(index) function pointer
    get_function__KaiaaiTelemetry2__lds,  // get(index) function pointer
    fetch_function__KaiaaiTelemetry2__lds,  // fetch(index, &value) function pointer
    assign_function__KaiaaiTelemetry2__lds,  // assign(index, value) function pointer
    resize_function__KaiaaiTelemetry2__lds  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KaiaaiTelemetry2_message_members = {
  "kaiaai_msgs::msg",  // message namespace
  "KaiaaiTelemetry2",  // message name
  16,  // number of fields
  sizeof(kaiaai_msgs::msg::KaiaaiTelemetry2),
  KaiaaiTelemetry2_message_member_array,  // message members
  KaiaaiTelemetry2_init_function,  // function to initialize message memory (memory has to be allocated)
  KaiaaiTelemetry2_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KaiaaiTelemetry2_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KaiaaiTelemetry2_message_members,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_hash,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description,
  &kaiaai_msgs__msg__KaiaaiTelemetry2__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kaiaai_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kaiaai_msgs::msg::KaiaaiTelemetry2>()
{
  return &::kaiaai_msgs::msg::rosidl_typesupport_introspection_cpp::KaiaaiTelemetry2_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kaiaai_msgs, msg, KaiaaiTelemetry2)() {
  return &::kaiaai_msgs::msg::rosidl_typesupport_introspection_cpp::KaiaaiTelemetry2_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
