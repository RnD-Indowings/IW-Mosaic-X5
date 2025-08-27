// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/vel_cov_cartesian__functions.h"

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
septentrio_gnss_driver__msg__VelCovCartesian__init(septentrio_gnss_driver__msg__VelCovCartesian * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__VelCovCartesian__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__VelCovCartesian__fini(msg);
    return false;
  }
  // mode
  // error
  // cov_vxvx
  // cov_vyvy
  // cov_vzvz
  // cov_dtdt
  // cov_vxvy
  // cov_vxvz
  // cov_vxdt
  // cov_vyvz
  // cov_vydt
  // cov_vzdt
  return true;
}

void
septentrio_gnss_driver__msg__VelCovCartesian__fini(septentrio_gnss_driver__msg__VelCovCartesian * msg)
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
  // cov_vxvx
  // cov_vyvy
  // cov_vzvz
  // cov_dtdt
  // cov_vxvy
  // cov_vxvz
  // cov_vxdt
  // cov_vyvz
  // cov_vydt
  // cov_vzdt
}

bool
septentrio_gnss_driver__msg__VelCovCartesian__are_equal(const septentrio_gnss_driver__msg__VelCovCartesian * lhs, const septentrio_gnss_driver__msg__VelCovCartesian * rhs)
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
  // cov_vxvx
  if (lhs->cov_vxvx != rhs->cov_vxvx) {
    return false;
  }
  // cov_vyvy
  if (lhs->cov_vyvy != rhs->cov_vyvy) {
    return false;
  }
  // cov_vzvz
  if (lhs->cov_vzvz != rhs->cov_vzvz) {
    return false;
  }
  // cov_dtdt
  if (lhs->cov_dtdt != rhs->cov_dtdt) {
    return false;
  }
  // cov_vxvy
  if (lhs->cov_vxvy != rhs->cov_vxvy) {
    return false;
  }
  // cov_vxvz
  if (lhs->cov_vxvz != rhs->cov_vxvz) {
    return false;
  }
  // cov_vxdt
  if (lhs->cov_vxdt != rhs->cov_vxdt) {
    return false;
  }
  // cov_vyvz
  if (lhs->cov_vyvz != rhs->cov_vyvz) {
    return false;
  }
  // cov_vydt
  if (lhs->cov_vydt != rhs->cov_vydt) {
    return false;
  }
  // cov_vzdt
  if (lhs->cov_vzdt != rhs->cov_vzdt) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__VelCovCartesian__copy(
  const septentrio_gnss_driver__msg__VelCovCartesian * input,
  septentrio_gnss_driver__msg__VelCovCartesian * output)
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
  // cov_vxvx
  output->cov_vxvx = input->cov_vxvx;
  // cov_vyvy
  output->cov_vyvy = input->cov_vyvy;
  // cov_vzvz
  output->cov_vzvz = input->cov_vzvz;
  // cov_dtdt
  output->cov_dtdt = input->cov_dtdt;
  // cov_vxvy
  output->cov_vxvy = input->cov_vxvy;
  // cov_vxvz
  output->cov_vxvz = input->cov_vxvz;
  // cov_vxdt
  output->cov_vxdt = input->cov_vxdt;
  // cov_vyvz
  output->cov_vyvz = input->cov_vyvz;
  // cov_vydt
  output->cov_vydt = input->cov_vydt;
  // cov_vzdt
  output->cov_vzdt = input->cov_vzdt;
  return true;
}

septentrio_gnss_driver__msg__VelCovCartesian *
septentrio_gnss_driver__msg__VelCovCartesian__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VelCovCartesian * msg = (septentrio_gnss_driver__msg__VelCovCartesian *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__VelCovCartesian), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__VelCovCartesian));
  bool success = septentrio_gnss_driver__msg__VelCovCartesian__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__VelCovCartesian__destroy(septentrio_gnss_driver__msg__VelCovCartesian * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__VelCovCartesian__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__init(septentrio_gnss_driver__msg__VelCovCartesian__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VelCovCartesian * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__VelCovCartesian *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__VelCovCartesian), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__VelCovCartesian__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__VelCovCartesian__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__fini(septentrio_gnss_driver__msg__VelCovCartesian__Sequence * array)
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
      septentrio_gnss_driver__msg__VelCovCartesian__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__VelCovCartesian__Sequence *
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VelCovCartesian__Sequence * array = (septentrio_gnss_driver__msg__VelCovCartesian__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__VelCovCartesian__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__VelCovCartesian__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__destroy(septentrio_gnss_driver__msg__VelCovCartesian__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__VelCovCartesian__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__are_equal(const septentrio_gnss_driver__msg__VelCovCartesian__Sequence * lhs, const septentrio_gnss_driver__msg__VelCovCartesian__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__VelCovCartesian__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__VelCovCartesian__Sequence__copy(
  const septentrio_gnss_driver__msg__VelCovCartesian__Sequence * input,
  septentrio_gnss_driver__msg__VelCovCartesian__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__VelCovCartesian);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__VelCovCartesian * data =
      (septentrio_gnss_driver__msg__VelCovCartesian *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__VelCovCartesian__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__VelCovCartesian__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__VelCovCartesian__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
