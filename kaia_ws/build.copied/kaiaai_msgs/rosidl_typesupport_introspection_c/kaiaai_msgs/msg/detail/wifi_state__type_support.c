// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kaiaai_msgs:msg/WifiState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kaiaai_msgs/msg/detail/wifi_state__rosidl_typesupport_introspection_c.h"
#include "kaiaai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kaiaai_msgs/msg/detail/wifi_state__functions.h"
#include "kaiaai_msgs/msg/detail/wifi_state__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kaiaai_msgs__msg__WifiState__init(message_memory);
}

void kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_fini_function(void * message_memory)
{
  kaiaai_msgs__msg__WifiState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__WifiState, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rssi_dbm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__WifiState, rssi_dbm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_members = {
  "kaiaai_msgs__msg",  // message namespace
  "WifiState",  // message name
  2,  // number of fields
  sizeof(kaiaai_msgs__msg__WifiState),
  kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_member_array,  // message members
  kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_init_function,  // function to initialize message memory (memory has to be allocated)
  kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_type_support_handle = {
  0,
  &kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_members,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__WifiState__get_type_hash,
  &kaiaai_msgs__msg__WifiState__get_type_description,
  &kaiaai_msgs__msg__WifiState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kaiaai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kaiaai_msgs, msg, WifiState)() {
  kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_type_support_handle.typesupport_identifier) {
    kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kaiaai_msgs__msg__WifiState__rosidl_typesupport_introspection_c__WifiState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
