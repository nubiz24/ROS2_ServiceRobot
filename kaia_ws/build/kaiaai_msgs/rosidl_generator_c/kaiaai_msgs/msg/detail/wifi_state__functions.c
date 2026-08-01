// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kaiaai_msgs:msg/WifiState.idl
// generated code does not contain a copyright notice
#include "kaiaai_msgs/msg/detail/wifi_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
kaiaai_msgs__msg__WifiState__init(kaiaai_msgs__msg__WifiState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    kaiaai_msgs__msg__WifiState__fini(msg);
    return false;
  }
  // rssi_dbm
  return true;
}

void
kaiaai_msgs__msg__WifiState__fini(kaiaai_msgs__msg__WifiState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // rssi_dbm
}

bool
kaiaai_msgs__msg__WifiState__are_equal(const kaiaai_msgs__msg__WifiState * lhs, const kaiaai_msgs__msg__WifiState * rhs)
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
  // rssi_dbm
  if (lhs->rssi_dbm != rhs->rssi_dbm) {
    return false;
  }
  return true;
}

bool
kaiaai_msgs__msg__WifiState__copy(
  const kaiaai_msgs__msg__WifiState * input,
  kaiaai_msgs__msg__WifiState * output)
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
  // rssi_dbm
  output->rssi_dbm = input->rssi_dbm;
  return true;
}

kaiaai_msgs__msg__WifiState *
kaiaai_msgs__msg__WifiState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__WifiState * msg = (kaiaai_msgs__msg__WifiState *)allocator.allocate(sizeof(kaiaai_msgs__msg__WifiState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kaiaai_msgs__msg__WifiState));
  bool success = kaiaai_msgs__msg__WifiState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kaiaai_msgs__msg__WifiState__destroy(kaiaai_msgs__msg__WifiState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kaiaai_msgs__msg__WifiState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kaiaai_msgs__msg__WifiState__Sequence__init(kaiaai_msgs__msg__WifiState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__WifiState * data = NULL;

  if (size) {
    data = (kaiaai_msgs__msg__WifiState *)allocator.zero_allocate(size, sizeof(kaiaai_msgs__msg__WifiState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kaiaai_msgs__msg__WifiState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kaiaai_msgs__msg__WifiState__fini(&data[i - 1]);
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
kaiaai_msgs__msg__WifiState__Sequence__fini(kaiaai_msgs__msg__WifiState__Sequence * array)
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
      kaiaai_msgs__msg__WifiState__fini(&array->data[i]);
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

kaiaai_msgs__msg__WifiState__Sequence *
kaiaai_msgs__msg__WifiState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__WifiState__Sequence * array = (kaiaai_msgs__msg__WifiState__Sequence *)allocator.allocate(sizeof(kaiaai_msgs__msg__WifiState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kaiaai_msgs__msg__WifiState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kaiaai_msgs__msg__WifiState__Sequence__destroy(kaiaai_msgs__msg__WifiState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kaiaai_msgs__msg__WifiState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kaiaai_msgs__msg__WifiState__Sequence__are_equal(const kaiaai_msgs__msg__WifiState__Sequence * lhs, const kaiaai_msgs__msg__WifiState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kaiaai_msgs__msg__WifiState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kaiaai_msgs__msg__WifiState__Sequence__copy(
  const kaiaai_msgs__msg__WifiState__Sequence * input,
  kaiaai_msgs__msg__WifiState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kaiaai_msgs__msg__WifiState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kaiaai_msgs__msg__WifiState * data =
      (kaiaai_msgs__msg__WifiState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kaiaai_msgs__msg__WifiState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kaiaai_msgs__msg__WifiState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kaiaai_msgs__msg__WifiState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
