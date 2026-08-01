// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry.idl
// generated code does not contain a copyright notice
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `joint_pos`
// Member `joint_vel`
// Member `lds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kaiaai_msgs__msg__KaiaaiTelemetry__init(kaiaai_msgs__msg__KaiaaiTelemetry * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    kaiaai_msgs__msg__KaiaaiTelemetry__fini(msg);
    return false;
  }
  // seq
  // odom_pos_x
  // odom_pos_y
  // odom_pos_yaw
  // odom_vel_x
  // odom_vel_yaw
  // joint_pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_pos, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry__fini(msg);
    return false;
  }
  // joint_vel
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_vel, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry__fini(msg);
    return false;
  }
  // lds
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->lds, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry__fini(msg);
    return false;
  }
  return true;
}

void
kaiaai_msgs__msg__KaiaaiTelemetry__fini(kaiaai_msgs__msg__KaiaaiTelemetry * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // seq
  // odom_pos_x
  // odom_pos_y
  // odom_pos_yaw
  // odom_vel_x
  // odom_vel_yaw
  // joint_pos
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_pos);
  // joint_vel
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_vel);
  // lds
  rosidl_runtime_c__uint8__Sequence__fini(&msg->lds);
}

bool
kaiaai_msgs__msg__KaiaaiTelemetry__are_equal(const kaiaai_msgs__msg__KaiaaiTelemetry * lhs, const kaiaai_msgs__msg__KaiaaiTelemetry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // odom_pos_x
  if (lhs->odom_pos_x != rhs->odom_pos_x) {
    return false;
  }
  // odom_pos_y
  if (lhs->odom_pos_y != rhs->odom_pos_y) {
    return false;
  }
  // odom_pos_yaw
  if (lhs->odom_pos_yaw != rhs->odom_pos_yaw) {
    return false;
  }
  // odom_vel_x
  if (lhs->odom_vel_x != rhs->odom_vel_x) {
    return false;
  }
  // odom_vel_yaw
  if (lhs->odom_vel_yaw != rhs->odom_vel_yaw) {
    return false;
  }
  // joint_pos
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_pos), &(rhs->joint_pos)))
  {
    return false;
  }
  // joint_vel
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_vel), &(rhs->joint_vel)))
  {
    return false;
  }
  // lds
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->lds), &(rhs->lds)))
  {
    return false;
  }
  return true;
}

bool
kaiaai_msgs__msg__KaiaaiTelemetry__copy(
  const kaiaai_msgs__msg__KaiaaiTelemetry * input,
  kaiaai_msgs__msg__KaiaaiTelemetry * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // seq
  output->seq = input->seq;
  // odom_pos_x
  output->odom_pos_x = input->odom_pos_x;
  // odom_pos_y
  output->odom_pos_y = input->odom_pos_y;
  // odom_pos_yaw
  output->odom_pos_yaw = input->odom_pos_yaw;
  // odom_vel_x
  output->odom_vel_x = input->odom_vel_x;
  // odom_vel_yaw
  output->odom_vel_yaw = input->odom_vel_yaw;
  // joint_pos
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_pos), &(output->joint_pos)))
  {
    return false;
  }
  // joint_vel
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_vel), &(output->joint_vel)))
  {
    return false;
  }
  // lds
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->lds), &(output->lds)))
  {
    return false;
  }
  return true;
}

kaiaai_msgs__msg__KaiaaiTelemetry *
kaiaai_msgs__msg__KaiaaiTelemetry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__KaiaaiTelemetry * msg = (kaiaai_msgs__msg__KaiaaiTelemetry *)allocator.allocate(sizeof(kaiaai_msgs__msg__KaiaaiTelemetry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kaiaai_msgs__msg__KaiaaiTelemetry));
  bool success = kaiaai_msgs__msg__KaiaaiTelemetry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kaiaai_msgs__msg__KaiaaiTelemetry__destroy(kaiaai_msgs__msg__KaiaaiTelemetry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kaiaai_msgs__msg__KaiaaiTelemetry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kaiaai_msgs__msg__KaiaaiTelemetry__Sequence__init(kaiaai_msgs__msg__KaiaaiTelemetry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__KaiaaiTelemetry * data = NULL;

  if (size) {
    data = (kaiaai_msgs__msg__KaiaaiTelemetry *)allocator.zero_allocate(size, sizeof(kaiaai_msgs__msg__KaiaaiTelemetry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kaiaai_msgs__msg__KaiaaiTelemetry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kaiaai_msgs__msg__KaiaaiTelemetry__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kaiaai_msgs__msg__KaiaaiTelemetry__Sequence__fini(kaiaai_msgs__msg__KaiaaiTelemetry__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kaiaai_msgs__msg__KaiaaiTelemetry__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kaiaai_msgs__msg__KaiaaiTelemetry__Sequence *
kaiaai_msgs__msg__KaiaaiTelemetry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__KaiaaiTelemetry__Sequence * array = (kaiaai_msgs__msg__KaiaaiTelemetry__Sequence *)allocator.allocate(sizeof(kaiaai_msgs__msg__KaiaaiTelemetry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kaiaai_msgs__msg__KaiaaiTelemetry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kaiaai_msgs__msg__KaiaaiTelemetry__Sequence__destroy(kaiaai_msgs__msg__KaiaaiTelemetry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kaiaai_msgs__msg__KaiaaiTelemetry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kaiaai_msgs__msg__KaiaaiTelemetry__Sequence__are_equal(const kaiaai_msgs__msg__KaiaaiTelemetry__Sequence * lhs, const kaiaai_msgs__msg__KaiaaiTelemetry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kaiaai_msgs__msg__KaiaaiTelemetry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kaiaai_msgs__msg__KaiaaiTelemetry__Sequence__copy(
  const kaiaai_msgs__msg__KaiaaiTelemetry__Sequence * input,
  kaiaai_msgs__msg__KaiaaiTelemetry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kaiaai_msgs__msg__KaiaaiTelemetry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kaiaai_msgs__msg__KaiaaiTelemetry * data =
      (kaiaai_msgs__msg__KaiaaiTelemetry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kaiaai_msgs__msg__KaiaaiTelemetry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kaiaai_msgs__msg__KaiaaiTelemetry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kaiaai_msgs__msg__KaiaaiTelemetry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
