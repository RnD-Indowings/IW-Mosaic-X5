// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/VectorInfoCart.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/vector_info_cart__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
septentrio_gnss_driver__msg__VectorInfoCart__init(septentrio_gnss_driver__msg__VectorInfoCart * msg)
{
  if (!msg) {
    return false;
  }
  // nr_sv
  // error
  // mode
  // misc
  // delta_x
  // delta_y
  // delta_z
  // delta_vx
  // delta_vy
  // delta_vz
  // azimuth
  // elevation
  // reference_id
  // corr_age
  // signal_info
  return true;
}

void
septentrio_gnss_driver__msg__VectorInfoCart__fini(septentrio_gnss_driver__msg__VectorInfoCart * msg)
{
  if (!msg) {
    return;
  }
  // nr_sv
  // error
  // mode
  // misc
  // delta_x
  // delta_y
  // delta_z
  // delta_vx
  // delta_vy
  // delta_vz
  // azimuth
  // elevation
  // reference_id
  // corr_age
  // signal_info
}

bool
septentrio_gnss_driver__msg__VectorInfoCart__are_equal(const septentrio_gnss_driver__msg__VectorInfoCart * lhs, const septentrio_gnss_driver__msg__VectorInfoCart * rhs)
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
  // delta_x
  if (lhs->delta_x != rhs->delta_x) {
    return false;
  }
  // delta_y
  if (lhs->delta_y != rhs->delta_y) {
    return false;
  }
  // delta_z
  if (lhs->delta_z != rhs->delta_z) {
    return false;
  }
  // delta_vx
  if (lhs->delta_vx != rhs->delta_vx) {
    return false;
  }
  // delta_vy
  if (lhs->delta_vy != rhs->delta_vy) {
    return false;
  }
  // delta_vz
  if (lhs->delta_vz != rhs->delta_vz) {
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
septentrio_gnss_driver__msg__VectorInfoCart__copy(
  const septentrio_gnss_driver__msg__VectorInfoCart * input,
  septentrio_gnss_driver__msg__VectorInfoCart * output)
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
  // delta_x
  output->delta_x = input->delta_x;
  // delta_y
  output->delta_y = input->delta_y;
  // delta_z
  output->delta_z = input->delta_z;
  // delta_vx
  output->delta_vx = input->delta_vx;
  // delta_vy
  output->delta_vy = input->delta_vy;
  // delta_vz
  output->delta_vz = input->delta_vz;
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

septentrio_gnss_driver__msg__VectorInfoCart *
septentrio_gnss_driver__msg__VectorInfoCart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VectorInfoCart * msg = (septentrio_gnss_driver__msg__VectorInfoCart *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__VectorInfoCart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__VectorInfoCart));
  bool success = septentrio_gnss_driver__msg__VectorInfoCart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__VectorInfoCart__destroy(septentrio_gnss_driver__msg__VectorInfoCart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__VectorInfoCart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__VectorInfoCart__Sequence__init(septentrio_gnss_driver__msg__VectorInfoCart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VectorInfoCart * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__VectorInfoCart *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__VectorInfoCart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__VectorInfoCart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__VectorInfoCart__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__VectorInfoCart__Sequence__fini(septentrio_gnss_driver__msg__VectorInfoCart__Sequence * array)
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
      septentrio_gnss_driver__msg__VectorInfoCart__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__VectorInfoCart__Sequence *
septentrio_gnss_driver__msg__VectorInfoCart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__VectorInfoCart__Sequence * array = (septentrio_gnss_driver__msg__VectorInfoCart__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__VectorInfoCart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__VectorInfoCart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__VectorInfoCart__Sequence__destroy(septentrio_gnss_driver__msg__VectorInfoCart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__VectorInfoCart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__VectorInfoCart__Sequence__are_equal(const septentrio_gnss_driver__msg__VectorInfoCart__Sequence * lhs, const septentrio_gnss_driver__msg__VectorInfoCart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__VectorInfoCart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__VectorInfoCart__Sequence__copy(
  const septentrio_gnss_driver__msg__VectorInfoCart__Sequence * input,
  septentrio_gnss_driver__msg__VectorInfoCart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__VectorInfoCart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__VectorInfoCart * data =
      (septentrio_gnss_driver__msg__VectorInfoCart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__VectorInfoCart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__VectorInfoCart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__VectorInfoCart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
