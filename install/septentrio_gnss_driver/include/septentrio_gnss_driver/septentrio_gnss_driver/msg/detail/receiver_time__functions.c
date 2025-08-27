// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/ReceiverTime.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/receiver_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `block_header`
#include "septentrio_gnss_driver/msg/detail/block_header__functions.h"

bool
septentrio_gnss_driver__msg__ReceiverTime__init(septentrio_gnss_driver__msg__ReceiverTime * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__ReceiverTime__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__ReceiverTime__fini(msg);
    return false;
  }
  // utc_year
  // utc_month
  // utc_day
  // utc_hour
  // utc_min
  // utc_second
  // delta_ls
  // sync_level
  return true;
}

void
septentrio_gnss_driver__msg__ReceiverTime__fini(septentrio_gnss_driver__msg__ReceiverTime * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // block_header
  septentrio_gnss_driver__msg__BlockHeader__fini(&msg->block_header);
  // utc_year
  // utc_month
  // utc_day
  // utc_hour
  // utc_min
  // utc_second
  // delta_ls
  // sync_level
}

bool
septentrio_gnss_driver__msg__ReceiverTime__are_equal(const septentrio_gnss_driver__msg__ReceiverTime * lhs, const septentrio_gnss_driver__msg__ReceiverTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__are_equal(
      &(lhs->block_header), &(rhs->block_header)))
  {
    return false;
  }
  // utc_year
  if (lhs->utc_year != rhs->utc_year) {
    return false;
  }
  // utc_month
  if (lhs->utc_month != rhs->utc_month) {
    return false;
  }
  // utc_day
  if (lhs->utc_day != rhs->utc_day) {
    return false;
  }
  // utc_hour
  if (lhs->utc_hour != rhs->utc_hour) {
    return false;
  }
  // utc_min
  if (lhs->utc_min != rhs->utc_min) {
    return false;
  }
  // utc_second
  if (lhs->utc_second != rhs->utc_second) {
    return false;
  }
  // delta_ls
  if (lhs->delta_ls != rhs->delta_ls) {
    return false;
  }
  // sync_level
  if (lhs->sync_level != rhs->sync_level) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__ReceiverTime__copy(
  const septentrio_gnss_driver__msg__ReceiverTime * input,
  septentrio_gnss_driver__msg__ReceiverTime * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__copy(
      &(input->block_header), &(output->block_header)))
  {
    return false;
  }
  // utc_year
  output->utc_year = input->utc_year;
  // utc_month
  output->utc_month = input->utc_month;
  // utc_day
  output->utc_day = input->utc_day;
  // utc_hour
  output->utc_hour = input->utc_hour;
  // utc_min
  output->utc_min = input->utc_min;
  // utc_second
  output->utc_second = input->utc_second;
  // delta_ls
  output->delta_ls = input->delta_ls;
  // sync_level
  output->sync_level = input->sync_level;
  return true;
}

septentrio_gnss_driver__msg__ReceiverTime *
septentrio_gnss_driver__msg__ReceiverTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__ReceiverTime * msg = (septentrio_gnss_driver__msg__ReceiverTime *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__ReceiverTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__ReceiverTime));
  bool success = septentrio_gnss_driver__msg__ReceiverTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__ReceiverTime__destroy(septentrio_gnss_driver__msg__ReceiverTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__ReceiverTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__ReceiverTime__Sequence__init(septentrio_gnss_driver__msg__ReceiverTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__ReceiverTime * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__ReceiverTime *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__ReceiverTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__ReceiverTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__ReceiverTime__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__ReceiverTime__Sequence__fini(septentrio_gnss_driver__msg__ReceiverTime__Sequence * array)
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
      septentrio_gnss_driver__msg__ReceiverTime__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__ReceiverTime__Sequence *
septentrio_gnss_driver__msg__ReceiverTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__ReceiverTime__Sequence * array = (septentrio_gnss_driver__msg__ReceiverTime__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__ReceiverTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__ReceiverTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__ReceiverTime__Sequence__destroy(septentrio_gnss_driver__msg__ReceiverTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__ReceiverTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__ReceiverTime__Sequence__are_equal(const septentrio_gnss_driver__msg__ReceiverTime__Sequence * lhs, const septentrio_gnss_driver__msg__ReceiverTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__ReceiverTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__ReceiverTime__Sequence__copy(
  const septentrio_gnss_driver__msg__ReceiverTime__Sequence * input,
  septentrio_gnss_driver__msg__ReceiverTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__ReceiverTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__ReceiverTime * data =
      (septentrio_gnss_driver__msg__ReceiverTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__ReceiverTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__ReceiverTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__ReceiverTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
