// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kaiaai_msgs:msg/OnlineEvent.idl
// generated code does not contain a copyright notice
#include "kaiaai_msgs/msg/detail/online_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `comment`
#include "rosidl_runtime_c/string_functions.h"
// Member `diag`
#include "diagnostic_msgs/msg/detail/diagnostic_array__functions.h"

bool
kaiaai_msgs__msg__OnlineEvent__init(kaiaai_msgs__msg__OnlineEvent * msg)
{
  if (!msg) {
    return false;
  }
  // event
  // comment
  if (!rosidl_runtime_c__String__init(&msg->comment)) {
    kaiaai_msgs__msg__OnlineEvent__fini(msg);
    return false;
  }
  // diag
  if (!diagnostic_msgs__msg__DiagnosticArray__init(&msg->diag)) {
    kaiaai_msgs__msg__OnlineEvent__fini(msg);
    return false;
  }
  return true;
}

void
kaiaai_msgs__msg__OnlineEvent__fini(kaiaai_msgs__msg__OnlineEvent * msg)
{
  if (!msg) {
    return;
  }
  // event
  // comment
  rosidl_runtime_c__String__fini(&msg->comment);
  // diag
  diagnostic_msgs__msg__DiagnosticArray__fini(&msg->diag);
}

bool
kaiaai_msgs__msg__OnlineEvent__are_equal(const kaiaai_msgs__msg__OnlineEvent * lhs, const kaiaai_msgs__msg__OnlineEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event
  if (lhs->event != rhs->event) {
    return false;
  }
  // comment
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->comment), &(rhs->comment)))
  {
    return false;
  }
  // diag
  if (!diagnostic_msgs__msg__DiagnosticArray__are_equal(
      &(lhs->diag), &(rhs->diag)))
  {
    return false;
  }
  return true;
}

bool
kaiaai_msgs__msg__OnlineEvent__copy(
  const kaiaai_msgs__msg__OnlineEvent * input,
  kaiaai_msgs__msg__OnlineEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // event
  output->event = input->event;
  // comment
  if (!rosidl_runtime_c__String__copy(
      &(input->comment), &(output->comment)))
  {
    return false;
  }
  // diag
  if (!diagnostic_msgs__msg__DiagnosticArray__copy(
      &(input->diag), &(output->diag)))
  {
    return false;
  }
  return true;
}

kaiaai_msgs__msg__OnlineEvent *
kaiaai_msgs__msg__OnlineEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__OnlineEvent * msg = (kaiaai_msgs__msg__OnlineEvent *)allocator.allocate(sizeof(kaiaai_msgs__msg__OnlineEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kaiaai_msgs__msg__OnlineEvent));
  bool success = kaiaai_msgs__msg__OnlineEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kaiaai_msgs__msg__OnlineEvent__destroy(kaiaai_msgs__msg__OnlineEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kaiaai_msgs__msg__OnlineEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kaiaai_msgs__msg__OnlineEvent__Sequence__init(kaiaai_msgs__msg__OnlineEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__OnlineEvent * data = NULL;

  if (size) {
    data = (kaiaai_msgs__msg__OnlineEvent *)allocator.zero_allocate(size, sizeof(kaiaai_msgs__msg__OnlineEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kaiaai_msgs__msg__OnlineEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kaiaai_msgs__msg__OnlineEvent__fini(&data[i - 1]);
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
kaiaai_msgs__msg__OnlineEvent__Sequence__fini(kaiaai_msgs__msg__OnlineEvent__Sequence * array)
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
      kaiaai_msgs__msg__OnlineEvent__fini(&array->data[i]);
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

kaiaai_msgs__msg__OnlineEvent__Sequence *
kaiaai_msgs__msg__OnlineEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kaiaai_msgs__msg__OnlineEvent__Sequence * array = (kaiaai_msgs__msg__OnlineEvent__Sequence *)allocator.allocate(sizeof(kaiaai_msgs__msg__OnlineEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kaiaai_msgs__msg__OnlineEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kaiaai_msgs__msg__OnlineEvent__Sequence__destroy(kaiaai_msgs__msg__OnlineEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kaiaai_msgs__msg__OnlineEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kaiaai_msgs__msg__OnlineEvent__Sequence__are_equal(const kaiaai_msgs__msg__OnlineEvent__Sequence * lhs, const kaiaai_msgs__msg__OnlineEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kaiaai_msgs__msg__OnlineEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kaiaai_msgs__msg__OnlineEvent__Sequence__copy(
  const kaiaai_msgs__msg__OnlineEvent__Sequence * input,
  kaiaai_msgs__msg__OnlineEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kaiaai_msgs__msg__OnlineEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kaiaai_msgs__msg__OnlineEvent * data =
      (kaiaai_msgs__msg__OnlineEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kaiaai_msgs__msg__OnlineEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kaiaai_msgs__msg__OnlineEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kaiaai_msgs__msg__OnlineEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
