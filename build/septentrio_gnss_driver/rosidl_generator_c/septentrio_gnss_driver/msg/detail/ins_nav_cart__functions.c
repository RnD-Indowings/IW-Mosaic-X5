// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/INSNavCart.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/ins_nav_cart__functions.h"

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
septentrio_gnss_driver__msg__INSNavCart__init(septentrio_gnss_driver__msg__INSNavCart * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__INSNavCart__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__INSNavCart__fini(msg);
    return false;
  }
  // gnss_mode
  // error
  // info
  // gnss_age
  // x
  // y
  // z
  // accuracy
  // latency
  // datum
  // sb_list
  // x_std_dev
  // y_std_dev
  // z_std_dev
  // xy_cov
  // xz_cov
  // yz_cov
  // heading
  // pitch
  // roll
  // heading_std_dev
  // pitch_std_dev
  // roll_std_dev
  // heading_pitch_cov
  // heading_roll_cov
  // pitch_roll_cov
  // vx
  // vy
  // vz
  // vx_std_dev
  // vy_std_dev
  // vz_std_dev
  // vx_vy_cov
  // vx_vz_cov
  // vy_vz_cov
  return true;
}

void
septentrio_gnss_driver__msg__INSNavCart__fini(septentrio_gnss_driver__msg__INSNavCart * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // block_header
  septentrio_gnss_driver__msg__BlockHeader__fini(&msg->block_header);
  // gnss_mode
  // error
  // info
  // gnss_age
  // x
  // y
  // z
  // accuracy
  // latency
  // datum
  // sb_list
  // x_std_dev
  // y_std_dev
  // z_std_dev
  // xy_cov
  // xz_cov
  // yz_cov
  // heading
  // pitch
  // roll
  // heading_std_dev
  // pitch_std_dev
  // roll_std_dev
  // heading_pitch_cov
  // heading_roll_cov
  // pitch_roll_cov
  // vx
  // vy
  // vz
  // vx_std_dev
  // vy_std_dev
  // vz_std_dev
  // vx_vy_cov
  // vx_vz_cov
  // vy_vz_cov
}

bool
septentrio_gnss_driver__msg__INSNavCart__are_equal(const septentrio_gnss_driver__msg__INSNavCart * lhs, const septentrio_gnss_driver__msg__INSNavCart * rhs)
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
  // gnss_mode
  if (lhs->gnss_mode != rhs->gnss_mode) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // info
  if (lhs->info != rhs->info) {
    return false;
  }
  // gnss_age
  if (lhs->gnss_age != rhs->gnss_age) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // accuracy
  if (lhs->accuracy != rhs->accuracy) {
    return false;
  }
  // latency
  if (lhs->latency != rhs->latency) {
    return false;
  }
  // datum
  if (lhs->datum != rhs->datum) {
    return false;
  }
  // sb_list
  if (lhs->sb_list != rhs->sb_list) {
    return false;
  }
  // x_std_dev
  if (lhs->x_std_dev != rhs->x_std_dev) {
    return false;
  }
  // y_std_dev
  if (lhs->y_std_dev != rhs->y_std_dev) {
    return false;
  }
  // z_std_dev
  if (lhs->z_std_dev != rhs->z_std_dev) {
    return false;
  }
  // xy_cov
  if (lhs->xy_cov != rhs->xy_cov) {
    return false;
  }
  // xz_cov
  if (lhs->xz_cov != rhs->xz_cov) {
    return false;
  }
  // yz_cov
  if (lhs->yz_cov != rhs->yz_cov) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // heading_std_dev
  if (lhs->heading_std_dev != rhs->heading_std_dev) {
    return false;
  }
  // pitch_std_dev
  if (lhs->pitch_std_dev != rhs->pitch_std_dev) {
    return false;
  }
  // roll_std_dev
  if (lhs->roll_std_dev != rhs->roll_std_dev) {
    return false;
  }
  // heading_pitch_cov
  if (lhs->heading_pitch_cov != rhs->heading_pitch_cov) {
    return false;
  }
  // heading_roll_cov
  if (lhs->heading_roll_cov != rhs->heading_roll_cov) {
    return false;
  }
  // pitch_roll_cov
  if (lhs->pitch_roll_cov != rhs->pitch_roll_cov) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // vx_std_dev
  if (lhs->vx_std_dev != rhs->vx_std_dev) {
    return false;
  }
  // vy_std_dev
  if (lhs->vy_std_dev != rhs->vy_std_dev) {
    return false;
  }
  // vz_std_dev
  if (lhs->vz_std_dev != rhs->vz_std_dev) {
    return false;
  }
  // vx_vy_cov
  if (lhs->vx_vy_cov != rhs->vx_vy_cov) {
    return false;
  }
  // vx_vz_cov
  if (lhs->vx_vz_cov != rhs->vx_vz_cov) {
    return false;
  }
  // vy_vz_cov
  if (lhs->vy_vz_cov != rhs->vy_vz_cov) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__INSNavCart__copy(
  const septentrio_gnss_driver__msg__INSNavCart * input,
  septentrio_gnss_driver__msg__INSNavCart * output)
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
  // gnss_mode
  output->gnss_mode = input->gnss_mode;
  // error
  output->error = input->error;
  // info
  output->info = input->info;
  // gnss_age
  output->gnss_age = input->gnss_age;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // accuracy
  output->accuracy = input->accuracy;
  // latency
  output->latency = input->latency;
  // datum
  output->datum = input->datum;
  // sb_list
  output->sb_list = input->sb_list;
  // x_std_dev
  output->x_std_dev = input->x_std_dev;
  // y_std_dev
  output->y_std_dev = input->y_std_dev;
  // z_std_dev
  output->z_std_dev = input->z_std_dev;
  // xy_cov
  output->xy_cov = input->xy_cov;
  // xz_cov
  output->xz_cov = input->xz_cov;
  // yz_cov
  output->yz_cov = input->yz_cov;
  // heading
  output->heading = input->heading;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // heading_std_dev
  output->heading_std_dev = input->heading_std_dev;
  // pitch_std_dev
  output->pitch_std_dev = input->pitch_std_dev;
  // roll_std_dev
  output->roll_std_dev = input->roll_std_dev;
  // heading_pitch_cov
  output->heading_pitch_cov = input->heading_pitch_cov;
  // heading_roll_cov
  output->heading_roll_cov = input->heading_roll_cov;
  // pitch_roll_cov
  output->pitch_roll_cov = input->pitch_roll_cov;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // vx_std_dev
  output->vx_std_dev = input->vx_std_dev;
  // vy_std_dev
  output->vy_std_dev = input->vy_std_dev;
  // vz_std_dev
  output->vz_std_dev = input->vz_std_dev;
  // vx_vy_cov
  output->vx_vy_cov = input->vx_vy_cov;
  // vx_vz_cov
  output->vx_vz_cov = input->vx_vz_cov;
  // vy_vz_cov
  output->vy_vz_cov = input->vy_vz_cov;
  return true;
}

septentrio_gnss_driver__msg__INSNavCart *
septentrio_gnss_driver__msg__INSNavCart__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__INSNavCart * msg = (septentrio_gnss_driver__msg__INSNavCart *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__INSNavCart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__INSNavCart));
  bool success = septentrio_gnss_driver__msg__INSNavCart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__INSNavCart__destroy(septentrio_gnss_driver__msg__INSNavCart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__INSNavCart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__INSNavCart__Sequence__init(septentrio_gnss_driver__msg__INSNavCart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__INSNavCart * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__INSNavCart *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__INSNavCart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__INSNavCart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__INSNavCart__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__INSNavCart__Sequence__fini(septentrio_gnss_driver__msg__INSNavCart__Sequence * array)
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
      septentrio_gnss_driver__msg__INSNavCart__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__INSNavCart__Sequence *
septentrio_gnss_driver__msg__INSNavCart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__INSNavCart__Sequence * array = (septentrio_gnss_driver__msg__INSNavCart__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__INSNavCart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__INSNavCart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__INSNavCart__Sequence__destroy(septentrio_gnss_driver__msg__INSNavCart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__INSNavCart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__INSNavCart__Sequence__are_equal(const septentrio_gnss_driver__msg__INSNavCart__Sequence * lhs, const septentrio_gnss_driver__msg__INSNavCart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__INSNavCart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__INSNavCart__Sequence__copy(
  const septentrio_gnss_driver__msg__INSNavCart__Sequence * input,
  septentrio_gnss_driver__msg__INSNavCart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__INSNavCart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__INSNavCart * data =
      (septentrio_gnss_driver__msg__INSNavCart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__INSNavCart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__INSNavCart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__INSNavCart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
