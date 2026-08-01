// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kaiaai_msgs:msg/WifiState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kaiaai_msgs/msg/detail/wifi_state__functions.h"
#include "kaiaai_msgs/msg/detail/wifi_state__struct.hpp"
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

void WifiState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kaiaai_msgs::msg::WifiState(_init);
}

void WifiState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kaiaai_msgs::msg::WifiState *>(message_memory);
  typed_message->~WifiState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WifiState_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::WifiState, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rssi_dbm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs::msg::WifiState, rssi_dbm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WifiState_message_members = {
  "kaiaai_msgs::msg",  // message namespace
  "WifiState",  // message name
  2,  // number of fields
  sizeof(kaiaai_msgs::msg::WifiState),
  WifiState_message_member_array,  // message members
  WifiState_init_function,  // function to initialize message memory (memory has to be allocated)
  WifiState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WifiState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WifiState_message_members,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__WifiState__get_type_hash,
  &kaiaai_msgs__msg__WifiState__get_type_description,
  &kaiaai_msgs__msg__WifiState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kaiaai_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kaiaai_msgs::msg::WifiState>()
{
  return &::kaiaai_msgs::msg::rosidl_typesupport_introspection_cpp::WifiState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kaiaai_msgs, msg, WifiState)() {
  return &::kaiaai_msgs::msg::rosidl_typesupport_introspection_cpp::WifiState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
