// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/BaseVectorGeod.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/base_vector_geod__functions.h"

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
// Member `vector_info_geod`
#include "septentrio_gnss_driver/msg/detail/vector_info_geod__functions.h"

bool
septentrio_gnss_driver__msg__BaseVectorGeod__init(septentrio_gnss_driver__msg__BaseVectorGeod * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__BaseVectorGeod__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__BaseVectorGeod__fini(msg);
    return false;
  }
  // n
  // sb_length
  // vector_info_geod
  if (!septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__init(&msg->vector_info_geod, 0)) {
    septentrio_gnss_driver__msg__BaseVectorGeod__fini(msg);
    return false;
  }
  return true;
}

void
septentrio_gnss_driver__msg__BaseVectorGeod__fini(septentrio_gnss_driver__msg__BaseVectorGeod * msg)
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
  // vector_info_geod
  septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__fini(&msg->vector_info_geod);
}

bool
septentrio_gnss_driver__msg__BaseVectorGeod__are_equal(const septentrio_gnss_driver__msg__BaseVectorGeod * lhs, const septentrio_gnss_driver__msg__BaseVectorGeod * rhs)
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
  // vector_info_geod
  if (!septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__are_equal(
      &(lhs->vector_info_geod), &(rhs->vector_info_geod)))
  {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__BaseVectorGeod__copy(
  const septentrio_gnss_driver__msg__BaseVectorGeod * input,
  septentrio_gnss_driver__msg__BaseVectorGeod * output)
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
  // vector_info_geod
  if (!septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__copy(
      &(input->vector_info_geod), &(output->vector_info_geod)))
  {
    return false;
  }
  return true;
}

septentrio_gnss_driver__msg__BaseVectorGeod *
septentrio_gnss_driver__msg__BaseVectorGeod__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__BaseVectorGeod * msg = (septentrio_gnss_driver__msg__BaseVectorGeod *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__BaseVectorGeod), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__BaseVectorGeod));
  bool success = septentrio_gnss_driver__msg__BaseVectorGeod__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__BaseVectorGeod__destroy(septentrio_gnss_driver__msg__BaseVectorGeod * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__BaseVectorGeod__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__BaseVectorGeod__Sequence__init(septentrio_gnss_driver__msg__BaseVectorGeod__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__BaseVectorGeod * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__BaseVectorGeod *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__BaseVectorGeod), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__BaseVectorGeod__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__BaseVectorGeod__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__BaseVectorGeod__Sequence__fini(septentrio_gnss_driver__msg__BaseVectorGeod__Sequence * array)
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
      septentrio_gnss_driver__msg__BaseVectorGeod__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__BaseVectorGeod__Sequence *
septentrio_gnss_driver__msg__BaseVectorGeod__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__BaseVectorGeod__Sequence * array = (septentrio_gnss_driver__msg__BaseVectorGeod__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__BaseVectorGeod__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__BaseVectorGeod__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__BaseVectorGeod__Sequence__destroy(septentrio_gnss_driver__msg__BaseVectorGeod__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__BaseVectorGeod__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__BaseVectorGeod__Sequence__are_equal(const septentrio_gnss_driver__msg__BaseVectorGeod__Sequence * lhs, const septentrio_gnss_driver__msg__BaseVectorGeod__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__BaseVectorGeod__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__BaseVectorGeod__Sequence__copy(
  const septentrio_gnss_driver__msg__BaseVectorGeod__Sequence * input,
  septentrio_gnss_driver__msg__BaseVectorGeod__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__BaseVectorGeod);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__BaseVectorGeod * data =
      (septentrio_gnss_driver__msg__BaseVectorGeod *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__BaseVectorGeod__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__BaseVectorGeod__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__BaseVectorGeod__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
