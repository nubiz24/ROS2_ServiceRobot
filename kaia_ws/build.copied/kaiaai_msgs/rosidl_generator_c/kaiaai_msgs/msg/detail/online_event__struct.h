// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kaiaai_msgs:msg/OnlineEvent.idl
// generated code does not contain a copyright notice

#ifndef KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__STRUCT_H_
#define KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'EVENT_ONLINE'.
enum
{
  kaiaai_msgs__msg__OnlineEvent__EVENT_ONLINE = 0
};

/// Constant 'EVENT_OFFLINE'.
enum
{
  kaiaai_msgs__msg__OnlineEvent__EVENT_OFFLINE = 1
};

// Include directives for member types
// Member 'comment'
#include "rosidl_runtime_c/string.h"
// Member 'diag'
#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.h"

/// Struct defined in msg/OnlineEvent in the package kaiaai_msgs.
/**
  * Message signals event(s) when a robot comes online or goes offline
 */
typedef struct kaiaai_msgs__msg__OnlineEvent
{
  /// byte EVENT_DOCKED=2
  /// Online event
  uint8_t event;
  /// Human-readable explanation of what happened
  rosidl_runtime_c__String comment;
  /// A copy of robot's diagnostic message with additional info
  diagnostic_msgs__msg__DiagnosticArray diag;
} kaiaai_msgs__msg__OnlineEvent;

// Struct for a sequence of kaiaai_msgs__msg__OnlineEvent.
typedef struct kaiaai_msgs__msg__OnlineEvent__Sequence
{
  kaiaai_msgs__msg__OnlineEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kaiaai_msgs__msg__OnlineEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KAIAAI_MSGS__MSG__DETAIL__ONLINE_EVENT__STRUCT_H_
