// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/VelCovGeodetic.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/vel_cov_geodetic__functions.h"

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
septentrio_gnss_driver__msg__VelCovGeodetic__init(septentrio_gnss_driver__msg__VelCovGeodetic * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__VelCovGeodetic__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__VelCovGeodetic__fini(msg);
    return false;
  }
  // mode
  // error
  // cov_vnvn
  // cov_veve
  // cov_vuvu
  // cov_dtdt
  // cov_vnve
  // cov_vnvu
  // cov_vndt
  // cov_vevu
  // cov_vedt
  // cov_vudt
  return true;
}

void
septentrio_gnss_driver__msg__VelCovGeodetic__fini(septentrio_gnss_driver__msg__VelCovGeodetic * msg)
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
  // cov_vnvn
  // cov_veve
  // cov_vuvu
  // cov_dtdt
  // cov_vnve
  // cov_vnvu
  // cov_vndt
  // cov_vevu
  // cov_vedt
  // cov_vudt
}

bool
septentrio_gnss_driver__msg__VelCovGeodetic__are_equal(const septentrio_gnss_driver__msg__VelCovGeodetic * lhs, const septentrio_gnss_driver__msg__VelCovGeodetic * rhs)
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
  // cov_vnvn
  if (lhs->cov_vnvn != rhs->cov_vnvn) {
    return false;
  }
  // cov_veve
  if (lhs->cov_veve != rhs->cov_veve) {
    return false;
  }
  // cov_vuvu
  if (lhs->cov_vuvu != rhs->cov_vuvu) {
    return false;
  }
  // cov_dtdt
  if (lhs->cov_dtdt != rhs->cov_dtdt) {
    return false;
  }
  // cov_vnve
  if (lhs->cov_vnve != rhs->cov_vnve) {
    return false;
  }
  // cov_vnvu
  if (lhs->cov_vnvu != rhs->cov_vnvu) {
    return false;
  }
  // cov_vndt
  if (lhs->cov_vndt != rhs->cov_vndt) {
    return false;
  }
  // cov_vevu
  if (lhs->cov_vevu != rhs->cov_vevu) {
    return false;
  }
  // cov_vedt
  if (lhs->cov_vedt != rhs->cov_vedt) {
    return false;
  }
  // cov_vudt
  if (lhs->cov_vudt != rhs->cov_vudt) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__VelCovGeodetic__copy(
  const septentrio_gnss_driver__msg__VelCovGeodetic * input,
  septentrio_gnss_driver__msg__VelCovGeodetic * output)
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
  // cov_vnvn
  output->cov_vnvn = input->cov_vnvn;
  // cov_veve
  output->cov_veve = input->cov_veve;
  // cov_vuvu
  output->cov_vuvu = input->cov_vuvu;
  // cov_dtdt
  output->cov_dtdt = input->cov_dtdt;
  // cov_vnve
  output->cov_vnve = input->cov_vnve;
  // cov_vnvu
  output->cov_vnvu = input->cov_vnvu;
  // cov_vndt
  output->cov_vndt = input->cov_vndt;
  // cov_vevu
  output->cov_vevu = input->cov_vevu;
  // cov_vedt
  output->cov_vedt = input->cov_vedt;
  // cov_vudt
  output->cov_vudt = input->cov_vudt;
  return true;
}

septentrio_gnss_driver__msg__VelCovGeodetic *
septentrio_gnss_driver__msg__VelCovGeodetic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VelCovGeodetic * msg = (septentrio_gnss_driver__msg__VelCovGeodetic *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__VelCovGeodetic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__VelCovGeodetic));
  bool success = septentrio_gnss_driver__msg__VelCovGeodetic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__VelCovGeodetic__destroy(septentrio_gnss_driver__msg__VelCovGeodetic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__VelCovGeodetic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__VelCovGeodetic__Sequence__init(septentrio_gnss_driver__msg__VelCovGeodetic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VelCovGeodetic * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__VelCovGeodetic *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__VelCovGeodetic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__VelCovGeodetic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__VelCovGeodetic__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__VelCovGeodetic__Sequence__fini(septentrio_gnss_driver__msg__VelCovGeodetic__Sequence * array)
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
      septentrio_gnss_driver__msg__VelCovGeodetic__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__VelCovGeodetic__Sequence *
septentrio_gnss_driver__msg__VelCovGeodetic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VelCovGeodetic__Sequence * array = (septentrio_gnss_driver__msg__VelCovGeodetic__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__VelCovGeodetic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__VelCovGeodetic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__VelCovGeodetic__Sequence__destroy(septentrio_gnss_driver__msg__VelCovGeodetic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__VelCovGeodetic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__VelCovGeodetic__Sequence__are_equal(const septentrio_gnss_driver__msg__VelCovGeodetic__Sequence * lhs, const septentrio_gnss_driver__msg__VelCovGeodetic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__VelCovGeodetic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__VelCovGeodetic__Sequence__copy(
  const septentrio_gnss_driver__msg__VelCovGeodetic__Sequence * input,
  septentrio_gnss_driver__msg__VelCovGeodetic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__VelCovGeodetic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__VelCovGeodetic * data =
      (septentrio_gnss_driver__msg__VelCovGeodetic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__VelCovGeodetic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__VelCovGeodetic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__VelCovGeodetic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
