// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kaiaai_msgs:msg/KaiaaiTelemetry2.idl
// generated code does not contain a copyright notice
#include "kaiaai_msgs/msg/detail/kaiaai_telemetry2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `joint`
#include "kaiaai_msgs/msg/detail/joint_pos_vel__functions.h"
// Member `distance_mm`
// Member `bumper`
// Member `cliff`
// Member `touch`
// Member `lds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kaiaai_msgs__msg__KaiaaiTelemetry2__init(kaiaai_msgs__msg__KaiaaiTelemetry2 * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__fini(msg);
    return false;
  }
  // seq
  // odom_pos_x
  // odom_pos_y
  // odom_pos_yaw
  // odom_vel_x
  // odom_vel_yaw
  // joint
  if (!kaiaai_msgs__msg__JointPosVel__Sequence__init(&msg->joint, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__fini(msg);
    return false;
  }
  // wifi_rssi_dbm
  // battery_mv
  // distance_mm
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->distance_mm, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__fini(msg);
    return false;
  }
  // bumper
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->bumper, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__fini(msg);
    return false;
  }
  // cliff
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->cliff, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__fini(msg);
    return false;
  }
  // touch
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->touch, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__fini(msg);
    return false;
  }
  // scan_start_hint
  // lds
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->lds, 0)) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__fini(msg);
    return false;
  }
  return true;
}

void
kaiaai_msgs__msg__KaiaaiTelemetry2__fini(kaiaai_msgs__msg__KaiaaiTelemetry2 * msg)
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
  // joint
  kaiaai_msgs__msg__JointPosVel__Sequence__fini(&msg->joint);
  // wifi_rssi_dbm
  // battery_mv
  // distance_mm
  rosidl_runtime_c__uint16__Sequence__fini(&msg->distance_mm);
  // bumper
  rosidl_runtime_c__boolean__Sequence__fini(&msg->bumper);
  // cliff
  rosidl_runtime_c__boolean__Sequence__fini(&msg->cliff);
  // touch
  rosidl_runtime_c__uint16__Sequence__fini(&msg->touch);
  // scan_start_hint
  // lds
  rosidl_runtime_c__uint8__Sequence__fini(&msg->lds);
}

bool
kaiaai_msgs__msg__KaiaaiTelemetry2__are_equal(const kaiaai_msgs__msg__KaiaaiTelemetry2 * lhs, const kaiaai_msgs__msg__KaiaaiTelemetry2 * rhs)
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
  // joint
  if (!kaiaai_msgs__msg__JointPosVel__Sequence__are_equal(
      &(lhs->joint), &(rhs->joint)))
  {
    return false;
  }
  // wifi_rssi_dbm
  if (lhs->wifi_rssi_dbm != rhs->wifi_rssi_dbm) {
    return false;
  }
  // battery_mv
  if (lhs->battery_mv != rhs->battery_mv) {
    return false;
  }
  // distance_mm
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->distance_mm), &(rhs->distance_mm)))
  {
    return false;
  }
  // bumper
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->bumper), &(rhs->bumper)))
  {
    return false;
  }
  // cliff
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->cliff), &(rhs->cliff)))
  {
    return false;
  }
  // touch
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->touch), &(rhs->touch)))
  {
    return false;
  }
  // scan_start_hint
  if (lhs->scan_start_hint != rhs->scan_start_hint) {
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
kaiaai_msgs__msg__KaiaaiTelemetry2__copy(
  const kaiaai_msgs__msg__KaiaaiTelemetry2 * input,
  kaiaai_msgs__msg__KaiaaiTelemetry2 * output)
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
  // joint
  if (!kaiaai_msgs__msg__JointPosVel__Sequence__copy(
      &(input->joint), &(output->joint)))
  {
    return false;
  }
  // wifi_rssi_dbm
  output->wifi_rssi_dbm = input->wifi_rssi_dbm;
  // battery_mv
  output->battery_mv = input->battery_mv;
  // distance_mm
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->distance_mm), &(output->distance_mm)))
  {
    return false;
  }
  // bumper
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->bumper), &(output->bumper)))
  {
    return false;
  }
  // cliff
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->cliff), &(output->cliff)))
  {
    return false;
  }
  // touch
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->touch), &(output->touch)))
  {
    return false;
  }
  // scan_start_hint
  output->scan_start_hint = input->scan_start_hint;
  // lds
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->lds), &(output->lds)))
  {
    return false;
  }
  return true;
}

kaiaai_msgs__msg__KaiaaiTelemetry2 *
kaiaai_msgs__msg__KaiaaiTelemetry2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__KaiaaiTelemetry2 * msg = (kaiaai_msgs__msg__KaiaaiTelemetry2 *)allocator.allocate(sizeof(kaiaai_msgs__msg__KaiaaiTelemetry2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kaiaai_msgs__msg__KaiaaiTelemetry2));
  bool success = kaiaai_msgs__msg__KaiaaiTelemetry2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kaiaai_msgs__msg__KaiaaiTelemetry2__destroy(kaiaai_msgs__msg__KaiaaiTelemetry2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence__init(kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__KaiaaiTelemetry2 * data = NULL;

  if (size) {
    data = (kaiaai_msgs__msg__KaiaaiTelemetry2 *)allocator.zero_allocate(size, sizeof(kaiaai_msgs__msg__KaiaaiTelemetry2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kaiaai_msgs__msg__KaiaaiTelemetry2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kaiaai_msgs__msg__KaiaaiTelemetry2__fini(&data[i - 1]);
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
kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence__fini(kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence * array)
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
      kaiaai_msgs__msg__KaiaaiTelemetry2__fini(&array->data[i]);
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

kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence *
kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence * array = (kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence *)allocator.allocate(sizeof(kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence__destroy(kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence__are_equal(const kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence * lhs, const kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kaiaai_msgs__msg__KaiaaiTelemetry2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence__copy(
  const kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence * input,
  kaiaai_msgs__msg__KaiaaiTelemetry2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kaiaai_msgs__msg__KaiaaiTelemetry2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kaiaai_msgs__msg__KaiaaiTelemetry2 * data =
      (kaiaai_msgs__msg__KaiaaiTelemetry2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kaiaai_msgs__msg__KaiaaiTelemetry2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kaiaai_msgs__msg__KaiaaiTelemetry2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kaiaai_msgs__msg__KaiaaiTelemetry2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
