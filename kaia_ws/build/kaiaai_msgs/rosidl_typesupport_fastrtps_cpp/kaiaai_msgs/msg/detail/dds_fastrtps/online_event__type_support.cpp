// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kaiaai_msgs:msg/OnlineEvent.idl
// generated code does not contain a copyright notice
#include "kaiaai_msgs/msg/detail/online_event__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kaiaai_msgs/msg/detail/online_event__functions.h"
#include "kaiaai_msgs/msg/detail/online_event__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace diagnostic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const diagnostic_msgs::msg::DiagnosticArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  diagnostic_msgs::msg::DiagnosticArray &);
size_t get_serialized_size(
  const diagnostic_msgs::msg::DiagnosticArray &,
  size_t current_alignment);
size_t
max_serialized_size_DiagnosticArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace diagnostic_msgs


namespace kaiaai_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
cdr_serialize(
  const kaiaai_msgs::msg::OnlineEvent & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: event
  cdr << ros_message.event;
  // Member: comment
  cdr << ros_message.comment;
  // Member: diag
  diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.diag,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kaiaai_msgs::msg::OnlineEvent & ros_message)
{
  // Member: event
  cdr >> ros_message.event;

  // Member: comment
  cdr >> ros_message.comment;

  // Member: diag
  diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.diag);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
get_serialized_size(
  const kaiaai_msgs::msg::OnlineEvent & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: event
  {
    size_t item_size = sizeof(ros_message.event);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: comment
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.comment.size() + 1);
  // Member: diag

  current_alignment +=
    diagnostic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.diag, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kaiaai_msgs
max_serialized_size_OnlineEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: event
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: comment
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: diag
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DiagnosticArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kaiaai_msgs::msg::OnlineEvent;
    is_plain =
      (
      offsetof(DataType, diag) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OnlineEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kaiaai_msgs::msg::OnlineEvent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OnlineEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kaiaai_msgs::msg::OnlineEvent *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OnlineEvent__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kaiaai_msgs::msg::OnlineEvent *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OnlineEvent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OnlineEvent(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OnlineEvent__callbacks = {
  "kaiaai_msgs::msg",
  "OnlineEvent",
  _OnlineEvent__cdr_serialize,
  _OnlineEvent__cdr_deserialize,
  _OnlineEvent__get_serialized_size,
  _OnlineEvent__max_serialized_size
};

static rosidl_message_type_support_t _OnlineEvent__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OnlineEvent__callbacks,
  get_message_typesupport_handle_function,
  &kaiaai_msgs__msg__OnlineEvent__get_type_hash,
  &kaiaai_msgs__msg__OnlineEvent__get_type_description,
  &kaiaai_msgs__msg__OnlineEvent__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kaiaai_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kaiaai_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<kaiaai_msgs::msg::OnlineEvent>()
{
  return &kaiaai_msgs::msg::typesupport_fastrtps_cpp::_OnlineEvent__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kaiaai_msgs, msg, OnlineEvent)() {
  return &kaiaai_msgs::msg::typesupport_fastrtps_cpp::_OnlineEvent__handle;
}

#ifdef __cplusplus
}
#endif
