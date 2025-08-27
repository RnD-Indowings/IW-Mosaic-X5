// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/RFStatus.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/rf_status__functions.h"

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
// Member `rfband`
#include "septentrio_gnss_driver/msg/detail/rf_band__functions.h"

bool
septentrio_gnss_driver__msg__RFStatus__init(septentrio_gnss_driver__msg__RFStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__RFStatus__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__RFStatus__fini(msg);
    return false;
  }
  // n
  // sb_length
  // flags
  // rfband
  if (!septentrio_gnss_driver__msg__RFBand__Sequence__init(&msg->rfband, 0)) {
    septentrio_gnss_driver__msg__RFStatus__fini(msg);
    return false;
  }
  return true;
}

void
septentrio_gnss_driver__msg__RFStatus__fini(septentrio_gnss_driver__msg__RFStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // block_header
  septentrio_gnss_driver__msg__BlockHeader__fini(&msg->block_header);
  // n
  // sb_length
  // flags
  // rfband
  septentrio_gnss_driver__msg__RFBand__Sequence__fini(&msg->rfband);
}

bool
septentrio_gnss_driver__msg__RFStatus__are_equal(const septentrio_gnss_driver__msg__RFStatus * lhs, const septentrio_gnss_driver__msg__RFStatus * rhs)
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
  // n
  if (lhs->n != rhs->n) {
    return false;
  }
  // sb_length
  if (lhs->sb_length != rhs->sb_length) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // rfband
  if (!septentrio_gnss_driver__msg__RFBand__Sequence__are_equal(
      &(lhs->rfband), &(rhs->rfband)))
  {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__RFStatus__copy(
  const septentrio_gnss_driver__msg__RFStatus * input,
  septentrio_gnss_driver__msg__RFStatus * output)
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
  // n
  output->n = input->n;
  // sb_length
  output->sb_length = input->sb_length;
  // flags
  output->flags = input->flags;
  // rfband
  if (!septentrio_gnss_driver__msg__RFBand__Sequence__copy(
      &(input->rfband), &(output->rfband)))
  {
    return false;
  }
  return true;
}

septentrio_gnss_driver__msg__RFStatus *
septentrio_gnss_driver__msg__RFStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__RFStatus * msg = (septentrio_gnss_driver__msg__RFStatus *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__RFStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__RFStatus));
  bool success = septentrio_gnss_driver__msg__RFStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__RFStatus__destroy(septentrio_gnss_driver__msg__RFStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__RFStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__RFStatus__Sequence__init(septentrio_gnss_driver__msg__RFStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__RFStatus * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__RFStatus *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__RFStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__RFStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__RFStatus__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__RFStatus__Sequence__fini(septentrio_gnss_driver__msg__RFStatus__Sequence * array)
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
      septentrio_gnss_driver__msg__RFStatus__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__RFStatus__Sequence *
septentrio_gnss_driver__msg__RFStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__RFStatus__Sequence * array = (septentrio_gnss_driver__msg__RFStatus__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__RFStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__RFStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__RFStatus__Sequence__destroy(septentrio_gnss_driver__msg__RFStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__RFStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__RFStatus__Sequence__are_equal(const septentrio_gnss_driver__msg__RFStatus__Sequence * lhs, const septentrio_gnss_driver__msg__RFStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__RFStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__RFStatus__Sequence__copy(
  const septentrio_gnss_driver__msg__RFStatus__Sequence * input,
  septentrio_gnss_driver__msg__RFStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__RFStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__RFStatus * data =
      (septentrio_gnss_driver__msg__RFStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__RFStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__RFStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__RFStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
