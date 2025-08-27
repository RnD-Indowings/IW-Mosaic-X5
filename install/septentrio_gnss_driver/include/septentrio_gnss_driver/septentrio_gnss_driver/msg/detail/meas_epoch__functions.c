// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/MeasEpoch.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/meas_epoch__functions.h"

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
// Member `type1`
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__functions.h"

bool
septentrio_gnss_driver__msg__MeasEpoch__init(septentrio_gnss_driver__msg__MeasEpoch * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__MeasEpoch__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__MeasEpoch__fini(msg);
    return false;
  }
  // n
  // sb1_length
  // sb2_length
  // common_flags
  // cum_clk_jumps
  // type1
  if (!septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__init(&msg->type1, 0)) {
    septentrio_gnss_driver__msg__MeasEpoch__fini(msg);
    return false;
  }
  return true;
}

void
septentrio_gnss_driver__msg__MeasEpoch__fini(septentrio_gnss_driver__msg__MeasEpoch * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // block_header
  septentrio_gnss_driver__msg__BlockHeader__fini(&msg->block_header);
  // n
  // sb1_length
  // sb2_length
  // common_flags
  // cum_clk_jumps
  // type1
  septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__fini(&msg->type1);
}

bool
septentrio_gnss_driver__msg__MeasEpoch__are_equal(const septentrio_gnss_driver__msg__MeasEpoch * lhs, const septentrio_gnss_driver__msg__MeasEpoch * rhs)
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
  // sb1_length
  if (lhs->sb1_length != rhs->sb1_length) {
    return false;
  }
  // sb2_length
  if (lhs->sb2_length != rhs->sb2_length) {
    return false;
  }
  // common_flags
  if (lhs->common_flags != rhs->common_flags) {
    return false;
  }
  // cum_clk_jumps
  if (lhs->cum_clk_jumps != rhs->cum_clk_jumps) {
    return false;
  }
  // type1
  if (!septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__are_equal(
      &(lhs->type1), &(rhs->type1)))
  {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__MeasEpoch__copy(
  const septentrio_gnss_driver__msg__MeasEpoch * input,
  septentrio_gnss_driver__msg__MeasEpoch * output)
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
  // sb1_length
  output->sb1_length = input->sb1_length;
  // sb2_length
  output->sb2_length = input->sb2_length;
  // common_flags
  output->common_flags = input->common_flags;
  // cum_clk_jumps
  output->cum_clk_jumps = input->cum_clk_jumps;
  // type1
  if (!septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence__copy(
      &(input->type1), &(output->type1)))
  {
    return false;
  }
  return true;
}

septentrio_gnss_driver__msg__MeasEpoch *
septentrio_gnss_driver__msg__MeasEpoch__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpoch * msg = (septentrio_gnss_driver__msg__MeasEpoch *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__MeasEpoch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__MeasEpoch));
  bool success = septentrio_gnss_driver__msg__MeasEpoch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__MeasEpoch__destroy(septentrio_gnss_driver__msg__MeasEpoch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__MeasEpoch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__MeasEpoch__Sequence__init(septentrio_gnss_driver__msg__MeasEpoch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpoch * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__MeasEpoch *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__MeasEpoch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__MeasEpoch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__MeasEpoch__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__MeasEpoch__Sequence__fini(septentrio_gnss_driver__msg__MeasEpoch__Sequence * array)
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
      septentrio_gnss_driver__msg__MeasEpoch__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__MeasEpoch__Sequence *
septentrio_gnss_driver__msg__MeasEpoch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__MeasEpoch__Sequence * array = (septentrio_gnss_driver__msg__MeasEpoch__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__MeasEpoch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__MeasEpoch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__MeasEpoch__Sequence__destroy(septentrio_gnss_driver__msg__MeasEpoch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__MeasEpoch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__MeasEpoch__Sequence__are_equal(const septentrio_gnss_driver__msg__MeasEpoch__Sequence * lhs, const septentrio_gnss_driver__msg__MeasEpoch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__MeasEpoch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__MeasEpoch__Sequence__copy(
  const septentrio_gnss_driver__msg__MeasEpoch__Sequence * input,
  septentrio_gnss_driver__msg__MeasEpoch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__MeasEpoch);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__MeasEpoch * data =
      (septentrio_gnss_driver__msg__MeasEpoch *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__MeasEpoch__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__MeasEpoch__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__MeasEpoch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
