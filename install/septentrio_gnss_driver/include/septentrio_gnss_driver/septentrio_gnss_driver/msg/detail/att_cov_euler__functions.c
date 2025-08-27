// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/AttCovEuler.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/att_cov_euler__functions.h"

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
septentrio_gnss_driver__msg__AttCovEuler__init(septentrio_gnss_driver__msg__AttCovEuler * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__AttCovEuler__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__AttCovEuler__fini(msg);
    return false;
  }
  // error
  // cov_headhead
  // cov_pitchpitch
  // cov_rollroll
  // cov_headpitch
  // cov_headroll
  // cov_pitchroll
  return true;
}

void
septentrio_gnss_driver__msg__AttCovEuler__fini(septentrio_gnss_driver__msg__AttCovEuler * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // block_header
  septentrio_gnss_driver__msg__BlockHeader__fini(&msg->block_header);
  // error
  // cov_headhead
  // cov_pitchpitch
  // cov_rollroll
  // cov_headpitch
  // cov_headroll
  // cov_pitchroll
}

bool
septentrio_gnss_driver__msg__AttCovEuler__are_equal(const septentrio_gnss_driver__msg__AttCovEuler * lhs, const septentrio_gnss_driver__msg__AttCovEuler * rhs)
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
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // cov_headhead
  if (lhs->cov_headhead != rhs->cov_headhead) {
    return false;
  }
  // cov_pitchpitch
  if (lhs->cov_pitchpitch != rhs->cov_pitchpitch) {
    return false;
  }
  // cov_rollroll
  if (lhs->cov_rollroll != rhs->cov_rollroll) {
    return false;
  }
  // cov_headpitch
  if (lhs->cov_headpitch != rhs->cov_headpitch) {
    return false;
  }
  // cov_headroll
  if (lhs->cov_headroll != rhs->cov_headroll) {
    return false;
  }
  // cov_pitchroll
  if (lhs->cov_pitchroll != rhs->cov_pitchroll) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__AttCovEuler__copy(
  const septentrio_gnss_driver__msg__AttCovEuler * input,
  septentrio_gnss_driver__msg__AttCovEuler * output)
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
  // error
  output->error = input->error;
  // cov_headhead
  output->cov_headhead = input->cov_headhead;
  // cov_pitchpitch
  output->cov_pitchpitch = input->cov_pitchpitch;
  // cov_rollroll
  output->cov_rollroll = input->cov_rollroll;
  // cov_headpitch
  output->cov_headpitch = input->cov_headpitch;
  // cov_headroll
  output->cov_headroll = input->cov_headroll;
  // cov_pitchroll
  output->cov_pitchroll = input->cov_pitchroll;
  return true;
}

septentrio_gnss_driver__msg__AttCovEuler *
septentrio_gnss_driver__msg__AttCovEuler__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__AttCovEuler * msg = (septentrio_gnss_driver__msg__AttCovEuler *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__AttCovEuler), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__AttCovEuler));
  bool success = septentrio_gnss_driver__msg__AttCovEuler__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__AttCovEuler__destroy(septentrio_gnss_driver__msg__AttCovEuler * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__AttCovEuler__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__AttCovEuler__Sequence__init(septentrio_gnss_driver__msg__AttCovEuler__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__AttCovEuler * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__AttCovEuler *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__AttCovEuler), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__AttCovEuler__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__AttCovEuler__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__AttCovEuler__Sequence__fini(septentrio_gnss_driver__msg__AttCovEuler__Sequence * array)
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
      septentrio_gnss_driver__msg__AttCovEuler__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__AttCovEuler__Sequence *
septentrio_gnss_driver__msg__AttCovEuler__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__AttCovEuler__Sequence * array = (septentrio_gnss_driver__msg__AttCovEuler__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__AttCovEuler__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__AttCovEuler__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__AttCovEuler__Sequence__destroy(septentrio_gnss_driver__msg__AttCovEuler__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__AttCovEuler__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__AttCovEuler__Sequence__are_equal(const septentrio_gnss_driver__msg__AttCovEuler__Sequence * lhs, const septentrio_gnss_driver__msg__AttCovEuler__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__AttCovEuler__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__AttCovEuler__Sequence__copy(
  const septentrio_gnss_driver__msg__AttCovEuler__Sequence * input,
  septentrio_gnss_driver__msg__AttCovEuler__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__AttCovEuler);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__AttCovEuler * data =
      (septentrio_gnss_driver__msg__AttCovEuler *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__AttCovEuler__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__AttCovEuler__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__AttCovEuler__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
