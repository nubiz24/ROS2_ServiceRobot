// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kaiaai_msgs:msg/OnlineEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kaiaai_msgs/msg/detail/online_event__rosidl_typesupport_introspection_c.h"
#include "kaiaai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kaiaai_msgs/msg/detail/online_event__functions.h"
#include "kaiaai_msgs/msg/detail/online_event__struct.h"


// Include directives for member types
// Member `comment`
#include "rosidl_runtime_c/string_functions.h"
// Member `diag`
#include "diagnostic_msgs/msg/diagnostic_array.h"
// Member `diag`
#include "diagnostic_msgs/msg/detail/diagnostic_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kaiaai_msgs__msg__OnlineEvent__init(message_memory);
}

void kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_fini_function(void * message_memory)
{
  kaiaai_msgs__msg__OnlineEvent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_member_array[3] = {
  {
    "event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__OnlineEvent, event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "comment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__OnlineEvent, comment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kaiaai_msgs__msg__OnlineEvent, diag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_members = {
  "kaiaai_msgs__msg",  // message namespace
  "OnlineEvent",  // message name
  3,  // number of fields
  sizeof(kaiaai_msgs__msg__OnlineEvent),
  kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_member_array,  // message members
  kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_type_support_handle = {
  0,
  &kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_members,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__OnlineEvent__get_type_hash,
  &kaiaai_msgs__msg__OnlineEvent__get_type_description,
  &kaiaai_msgs__msg__OnlineEvent__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kaiaai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kaiaai_msgs, msg, OnlineEvent)() {
  kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticArray)();
  if (!kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_type_support_handle.typesupport_identifier) {
    kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kaiaai_msgs__msg__OnlineEvent__rosidl_typesupport_introspection_c__OnlineEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
