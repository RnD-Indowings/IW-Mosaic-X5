// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/PosCovGeodetic.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/pos_cov_geodetic__functions.h"

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
septentrio_gnss_driver__msg__PosCovGeodetic__init(septentrio_gnss_driver__msg__PosCovGeodetic * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__PosCovGeodetic__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__PosCovGeodetic__fini(msg);
    return false;
  }
  // mode
  // error
  // cov_latlat
  // cov_lonlon
  // cov_hgthgt
  // cov_bb
  // cov_latlon
  // cov_lathgt
  // cov_latb
  // cov_lonhgt
  // cov_lonb
  // cov_hb
  return true;
}

void
septentrio_gnss_driver__msg__PosCovGeodetic__fini(septentrio_gnss_driver__msg__PosCovGeodetic * msg)
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
  // cov_latlat
  // cov_lonlon
  // cov_hgthgt
  // cov_bb
  // cov_latlon
  // cov_lathgt
  // cov_latb
  // cov_lonhgt
  // cov_lonb
  // cov_hb
}

bool
septentrio_gnss_driver__msg__PosCovGeodetic__are_equal(const septentrio_gnss_driver__msg__PosCovGeodetic * lhs, const septentrio_gnss_driver__msg__PosCovGeodetic * rhs)
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
  // cov_latlat
  if (lhs->cov_latlat != rhs->cov_latlat) {
    return false;
  }
  // cov_lonlon
  if (lhs->cov_lonlon != rhs->cov_lonlon) {
    return false;
  }
  // cov_hgthgt
  if (lhs->cov_hgthgt != rhs->cov_hgthgt) {
    return false;
  }
  // cov_bb
  if (lhs->cov_bb != rhs->cov_bb) {
    return false;
  }
  // cov_latlon
  if (lhs->cov_latlon != rhs->cov_latlon) {
    return false;
  }
  // cov_lathgt
  if (lhs->cov_lathgt != rhs->cov_lathgt) {
    return false;
  }
  // cov_latb
  if (lhs->cov_latb != rhs->cov_latb) {
    return false;
  }
  // cov_lonhgt
  if (lhs->cov_lonhgt != rhs->cov_lonhgt) {
    return false;
  }
  // cov_lonb
  if (lhs->cov_lonb != rhs->cov_lonb) {
    return false;
  }
  // cov_hb
  if (lhs->cov_hb != rhs->cov_hb) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__PosCovGeodetic__copy(
  const septentrio_gnss_driver__msg__PosCovGeodetic * input,
  septentrio_gnss_driver__msg__PosCovGeodetic * output)
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
  // cov_latlat
  output->cov_latlat = input->cov_latlat;
  // cov_lonlon
  output->cov_lonlon = input->cov_lonlon;
  // cov_hgthgt
  output->cov_hgthgt = input->cov_hgthgt;
  // cov_bb
  output->cov_bb = input->cov_bb;
  // cov_latlon
  output->cov_latlon = input->cov_latlon;
  // cov_lathgt
  output->cov_lathgt = input->cov_lathgt;
  // cov_latb
  output->cov_latb = input->cov_latb;
  // cov_lonhgt
  output->cov_lonhgt = input->cov_lonhgt;
  // cov_lonb
  output->cov_lonb = input->cov_lonb;
  // cov_hb
  output->cov_hb = input->cov_hb;
  return true;
}

septentrio_gnss_driver__msg__PosCovGeodetic *
septentrio_gnss_driver__msg__PosCovGeodetic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PosCovGeodetic * msg = (septentrio_gnss_driver__msg__PosCovGeodetic *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__PosCovGeodetic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__PosCovGeodetic));
  bool success = septentrio_gnss_driver__msg__PosCovGeodetic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__PosCovGeodetic__destroy(septentrio_gnss_driver__msg__PosCovGeodetic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__PosCovGeodetic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__PosCovGeodetic__Sequence__init(septentrio_gnss_driver__msg__PosCovGeodetic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PosCovGeodetic * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__PosCovGeodetic *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__PosCovGeodetic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__PosCovGeodetic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__PosCovGeodetic__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__PosCovGeodetic__Sequence__fini(septentrio_gnss_driver__msg__PosCovGeodetic__Sequence * array)
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
      septentrio_gnss_driver__msg__PosCovGeodetic__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__PosCovGeodetic__Sequence *
septentrio_gnss_driver__msg__PosCovGeodetic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PosCovGeodetic__Sequence * array = (septentrio_gnss_driver__msg__PosCovGeodetic__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__PosCovGeodetic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__PosCovGeodetic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__PosCovGeodetic__Sequence__destroy(septentrio_gnss_driver__msg__PosCovGeodetic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__PosCovGeodetic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__PosCovGeodetic__Sequence__are_equal(const septentrio_gnss_driver__msg__PosCovGeodetic__Sequence * lhs, const septentrio_gnss_driver__msg__PosCovGeodetic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__PosCovGeodetic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__PosCovGeodetic__Sequence__copy(
  const septentrio_gnss_driver__msg__PosCovGeodetic__Sequence * input,
  septentrio_gnss_driver__msg__PosCovGeodetic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__PosCovGeodetic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__PosCovGeodetic * data =
      (septentrio_gnss_driver__msg__PosCovGeodetic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__PosCovGeodetic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__PosCovGeodetic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__PosCovGeodetic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
