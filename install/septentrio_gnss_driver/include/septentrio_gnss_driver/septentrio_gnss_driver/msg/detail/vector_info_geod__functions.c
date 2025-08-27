// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/VectorInfoGeod.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/vector_info_geod__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
septentrio_gnss_driver__msg__VectorInfoGeod__init(septentrio_gnss_driver__msg__VectorInfoGeod * msg)
{
  if (!msg) {
    return false;
  }
  // nr_sv
  // error
  // mode
  // misc
  // delta_east
  // delta_north
  // delta_up
  // delta_ve
  // delta_vn
  // delta_vu
  // azimuth
  // elevation
  // reference_id
  // corr_age
  // signal_info
  return true;
}

void
septentrio_gnss_driver__msg__VectorInfoGeod__fini(septentrio_gnss_driver__msg__VectorInfoGeod * msg)
{
  if (!msg) {
    return;
  }
  // nr_sv
  // error
  // mode
  // misc
  // delta_east
  // delta_north
  // delta_up
  // delta_ve
  // delta_vn
  // delta_vu
  // azimuth
  // elevation
  // reference_id
  // corr_age
  // signal_info
}

bool
septentrio_gnss_driver__msg__VectorInfoGeod__are_equal(const septentrio_gnss_driver__msg__VectorInfoGeod * lhs, const septentrio_gnss_driver__msg__VectorInfoGeod * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nr_sv
  if (lhs->nr_sv != rhs->nr_sv) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // misc
  if (lhs->misc != rhs->misc) {
    return false;
  }
  // delta_east
  if (lhs->delta_east != rhs->delta_east) {
    return false;
  }
  // delta_north
  if (lhs->delta_north != rhs->delta_north) {
    return false;
  }
  // delta_up
  if (lhs->delta_up != rhs->delta_up) {
    return false;
  }
  // delta_ve
  if (lhs->delta_ve != rhs->delta_ve) {
    return false;
  }
  // delta_vn
  if (lhs->delta_vn != rhs->delta_vn) {
    return false;
  }
  // delta_vu
  if (lhs->delta_vu != rhs->delta_vu) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // reference_id
  if (lhs->reference_id != rhs->reference_id) {
    return false;
  }
  // corr_age
  if (lhs->corr_age != rhs->corr_age) {
    return false;
  }
  // signal_info
  if (lhs->signal_info != rhs->signal_info) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__VectorInfoGeod__copy(
  const septentrio_gnss_driver__msg__VectorInfoGeod * input,
  septentrio_gnss_driver__msg__VectorInfoGeod * output)
{
  if (!input || !output) {
    return false;
  }
  // nr_sv
  output->nr_sv = input->nr_sv;
  // error
  output->error = input->error;
  // mode
  output->mode = input->mode;
  // misc
  output->misc = input->misc;
  // delta_east
  output->delta_east = input->delta_east;
  // delta_north
  output->delta_north = input->delta_north;
  // delta_up
  output->delta_up = input->delta_up;
  // delta_ve
  output->delta_ve = input->delta_ve;
  // delta_vn
  output->delta_vn = input->delta_vn;
  // delta_vu
  output->delta_vu = input->delta_vu;
  // azimuth
  output->azimuth = input->azimuth;
  // elevation
  output->elevation = input->elevation;
  // reference_id
  output->reference_id = input->reference_id;
  // corr_age
  output->corr_age = input->corr_age;
  // signal_info
  output->signal_info = input->signal_info;
  return true;
}

septentrio_gnss_driver__msg__VectorInfoGeod *
septentrio_gnss_driver__msg__VectorInfoGeod__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VectorInfoGeod * msg = (septentrio_gnss_driver__msg__VectorInfoGeod *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__VectorInfoGeod), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__VectorInfoGeod));
  bool success = septentrio_gnss_driver__msg__VectorInfoGeod__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__VectorInfoGeod__destroy(septentrio_gnss_driver__msg__VectorInfoGeod * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__VectorInfoGeod__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__init(septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VectorInfoGeod * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__VectorInfoGeod *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__VectorInfoGeod), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__VectorInfoGeod__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__VectorInfoGeod__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__fini(septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * array)
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
      septentrio_gnss_driver__msg__VectorInfoGeod__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__VectorInfoGeod__Sequence *
septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * array = (septentrio_gnss_driver__msg__VectorInfoGeod__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__VectorInfoGeod__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__destroy(septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__are_equal(const septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * lhs, const septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__VectorInfoGeod__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__copy(
  const septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * input,
  septentrio_gnss_driver__msg__VectorInfoGeod__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__VectorInfoGeod);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__VectorInfoGeod * data =
      (septentrio_gnss_driver__msg__VectorInfoGeod *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__VectorInfoGeod__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__VectorInfoGeod__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__VectorInfoGeod__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
