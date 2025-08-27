// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/PosCovCartesian.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/pos_cov_cartesian__functions.h"

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
septentrio_gnss_driver__msg__PosCovCartesian__init(septentrio_gnss_driver__msg__PosCovCartesian * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__PosCovCartesian__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__PosCovCartesian__fini(msg);
    return false;
  }
  // mode
  // error
  // cov_xx
  // cov_yy
  // cov_zz
  // cov_bb
  // cov_xy
  // cov_xz
  // cov_xb
  // cov_yz
  // cov_yb
  // cov_zb
  return true;
}

void
septentrio_gnss_driver__msg__PosCovCartesian__fini(septentrio_gnss_driver__msg__PosCovCartesian * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // block_header
  septentrio_gnss_driver__msg__BlockHeader__fini(&msg->block_header);
  // mode
  // error
  // cov_xx
  // cov_yy
  // cov_zz
  // cov_bb
  // cov_xy
  // cov_xz
  // cov_xb
  // cov_yz
  // cov_yb
  // cov_zb
}

bool
septentrio_gnss_driver__msg__PosCovCartesian__are_equal(const septentrio_gnss_driver__msg__PosCovCartesian * lhs, const septentrio_gnss_driver__msg__PosCovCartesian * rhs)
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
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // cov_xx
  if (lhs->cov_xx != rhs->cov_xx) {
    return false;
  }
  // cov_yy
  if (lhs->cov_yy != rhs->cov_yy) {
    return false;
  }
  // cov_zz
  if (lhs->cov_zz != rhs->cov_zz) {
    return false;
  }
  // cov_bb
  if (lhs->cov_bb != rhs->cov_bb) {
    return false;
  }
  // cov_xy
  if (lhs->cov_xy != rhs->cov_xy) {
    return false;
  }
  // cov_xz
  if (lhs->cov_xz != rhs->cov_xz) {
    return false;
  }
  // cov_xb
  if (lhs->cov_xb != rhs->cov_xb) {
    return false;
  }
  // cov_yz
  if (lhs->cov_yz != rhs->cov_yz) {
    return false;
  }
  // cov_yb
  if (lhs->cov_yb != rhs->cov_yb) {
    return false;
  }
  // cov_zb
  if (lhs->cov_zb != rhs->cov_zb) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__PosCovCartesian__copy(
  const septentrio_gnss_driver__msg__PosCovCartesian * input,
  septentrio_gnss_driver__msg__PosCovCartesian * output)
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
  // mode
  output->mode = input->mode;
  // error
  output->error = input->error;
  // cov_xx
  output->cov_xx = input->cov_xx;
  // cov_yy
  output->cov_yy = input->cov_yy;
  // cov_zz
  output->cov_zz = input->cov_zz;
  // cov_bb
  output->cov_bb = input->cov_bb;
  // cov_xy
  output->cov_xy = input->cov_xy;
  // cov_xz
  output->cov_xz = input->cov_xz;
  // cov_xb
  output->cov_xb = input->cov_xb;
  // cov_yz
  output->cov_yz = input->cov_yz;
  // cov_yb
  output->cov_yb = input->cov_yb;
  // cov_zb
  output->cov_zb = input->cov_zb;
  return true;
}

septentrio_gnss_driver__msg__PosCovCartesian *
septentrio_gnss_driver__msg__PosCovCartesian__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PosCovCartesian * msg = (septentrio_gnss_driver__msg__PosCovCartesian *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__PosCovCartesian), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__PosCovCartesian));
  bool success = septentrio_gnss_driver__msg__PosCovCartesian__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__PosCovCartesian__destroy(septentrio_gnss_driver__msg__PosCovCartesian * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__PosCovCartesian__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__PosCovCartesian__Sequence__init(septentrio_gnss_driver__msg__PosCovCartesian__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PosCovCartesian * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__PosCovCartesian *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__PosCovCartesian), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__PosCovCartesian__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__PosCovCartesian__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__PosCovCartesian__Sequence__fini(septentrio_gnss_driver__msg__PosCovCartesian__Sequence * array)
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
      septentrio_gnss_driver__msg__PosCovCartesian__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__PosCovCartesian__Sequence *
septentrio_gnss_driver__msg__PosCovCartesian__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PosCovCartesian__Sequence * array = (septentrio_gnss_driver__msg__PosCovCartesian__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__PosCovCartesian__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__PosCovCartesian__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__PosCovCartesian__Sequence__destroy(septentrio_gnss_driver__msg__PosCovCartesian__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__PosCovCartesian__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__PosCovCartesian__Sequence__are_equal(const septentrio_gnss_driver__msg__PosCovCartesian__Sequence * lhs, const septentrio_gnss_driver__msg__PosCovCartesian__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__PosCovCartesian__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__PosCovCartesian__Sequence__copy(
  const septentrio_gnss_driver__msg__PosCovCartesian__Sequence * input,
  septentrio_gnss_driver__msg__PosCovCartesian__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__PosCovCartesian);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__PosCovCartesian * data =
      (septentrio_gnss_driver__msg__PosCovCartesian *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__PosCovCartesian__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__PosCovCartesian__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__PosCovCartesian__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
