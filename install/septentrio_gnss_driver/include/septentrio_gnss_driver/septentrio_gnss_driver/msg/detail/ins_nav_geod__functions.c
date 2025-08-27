// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/INSNavGeod.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/ins_nav_geod__functions.h"

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
septentrio_gnss_driver__msg__INSNavGeod__init(septentrio_gnss_driver__msg__INSNavGeod * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__INSNavGeod__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__INSNavGeod__fini(msg);
    return false;
  }
  // gnss_mode
  // error
  // info
  // gnss_age
  // latitude
  // longitude
  // height
  // undulation
  // accuracy
  // latency
  // datum
  // sb_list
  // latitude_std_dev
  // longitude_std_dev
  // height_std_dev
  // latitude_longitude_cov
  // latitude_height_cov
  // longitude_height_cov
  // heading
  // pitch
  // roll
  // heading_std_dev
  // pitch_std_dev
  // roll_std_dev
  // heading_pitch_cov
  // heading_roll_cov
  // pitch_roll_cov
  // ve
  // vn
  // vu
  // ve_std_dev
  // vn_std_dev
  // vu_std_dev
  // ve_vn_cov
  // ve_vu_cov
  // vn_vu_cov
  return true;
}

void
septentrio_gnss_driver__msg__INSNavGeod__fini(septentrio_gnss_driver__msg__INSNavGeod * msg)
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
  // latitude
  // longitude
  // height
  // undulation
  // accuracy
  // latency
  // datum
  // sb_list
  // latitude_std_dev
  // longitude_std_dev
  // height_std_dev
  // latitude_longitude_cov
  // latitude_height_cov
  // longitude_height_cov
  // heading
  // pitch
  // roll
  // heading_std_dev
  // pitch_std_dev
  // roll_std_dev
  // heading_pitch_cov
  // heading_roll_cov
  // pitch_roll_cov
  // ve
  // vn
  // vu
  // ve_std_dev
  // vn_std_dev
  // vu_std_dev
  // ve_vn_cov
  // ve_vu_cov
  // vn_vu_cov
}

bool
septentrio_gnss_driver__msg__INSNavGeod__are_equal(const septentrio_gnss_driver__msg__INSNavGeod * lhs, const septentrio_gnss_driver__msg__INSNavGeod * rhs)
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
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // undulation
  if (lhs->undulation != rhs->undulation) {
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
  // latitude_std_dev
  if (lhs->latitude_std_dev != rhs->latitude_std_dev) {
    return false;
  }
  // longitude_std_dev
  if (lhs->longitude_std_dev != rhs->longitude_std_dev) {
    return false;
  }
  // height_std_dev
  if (lhs->height_std_dev != rhs->height_std_dev) {
    return false;
  }
  // latitude_longitude_cov
  if (lhs->latitude_longitude_cov != rhs->latitude_longitude_cov) {
    return false;
  }
  // latitude_height_cov
  if (lhs->latitude_height_cov != rhs->latitude_height_cov) {
    return false;
  }
  // longitude_height_cov
  if (lhs->longitude_height_cov != rhs->longitude_height_cov) {
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
  // ve
  if (lhs->ve != rhs->ve) {
    return false;
  }
  // vn
  if (lhs->vn != rhs->vn) {
    return false;
  }
  // vu
  if (lhs->vu != rhs->vu) {
    return false;
  }
  // ve_std_dev
  if (lhs->ve_std_dev != rhs->ve_std_dev) {
    return false;
  }
  // vn_std_dev
  if (lhs->vn_std_dev != rhs->vn_std_dev) {
    return false;
  }
  // vu_std_dev
  if (lhs->vu_std_dev != rhs->vu_std_dev) {
    return false;
  }
  // ve_vn_cov
  if (lhs->ve_vn_cov != rhs->ve_vn_cov) {
    return false;
  }
  // ve_vu_cov
  if (lhs->ve_vu_cov != rhs->ve_vu_cov) {
    return false;
  }
  // vn_vu_cov
  if (lhs->vn_vu_cov != rhs->vn_vu_cov) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__INSNavGeod__copy(
  const septentrio_gnss_driver__msg__INSNavGeod * input,
  septentrio_gnss_driver__msg__INSNavGeod * output)
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
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // height
  output->height = input->height;
  // undulation
  output->undulation = input->undulation;
  // accuracy
  output->accuracy = input->accuracy;
  // latency
  output->latency = input->latency;
  // datum
  output->datum = input->datum;
  // sb_list
  output->sb_list = input->sb_list;
  // latitude_std_dev
  output->latitude_std_dev = input->latitude_std_dev;
  // longitude_std_dev
  output->longitude_std_dev = input->longitude_std_dev;
  // height_std_dev
  output->height_std_dev = input->height_std_dev;
  // latitude_longitude_cov
  output->latitude_longitude_cov = input->latitude_longitude_cov;
  // latitude_height_cov
  output->latitude_height_cov = input->latitude_height_cov;
  // longitude_height_cov
  output->longitude_height_cov = input->longitude_height_cov;
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
  // ve
  output->ve = input->ve;
  // vn
  output->vn = input->vn;
  // vu
  output->vu = input->vu;
  // ve_std_dev
  output->ve_std_dev = input->ve_std_dev;
  // vn_std_dev
  output->vn_std_dev = input->vn_std_dev;
  // vu_std_dev
  output->vu_std_dev = input->vu_std_dev;
  // ve_vn_cov
  output->ve_vn_cov = input->ve_vn_cov;
  // ve_vu_cov
  output->ve_vu_cov = input->ve_vu_cov;
  // vn_vu_cov
  output->vn_vu_cov = input->vn_vu_cov;
  return true;
}

septentrio_gnss_driver__msg__INSNavGeod *
septentrio_gnss_driver__msg__INSNavGeod__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__INSNavGeod * msg = (septentrio_gnss_driver__msg__INSNavGeod *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__INSNavGeod), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__INSNavGeod));
  bool success = septentrio_gnss_driver__msg__INSNavGeod__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__INSNavGeod__destroy(septentrio_gnss_driver__msg__INSNavGeod * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__INSNavGeod__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__INSNavGeod__Sequence__init(septentrio_gnss_driver__msg__INSNavGeod__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__INSNavGeod * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__INSNavGeod *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__INSNavGeod), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__INSNavGeod__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__INSNavGeod__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__INSNavGeod__Sequence__fini(septentrio_gnss_driver__msg__INSNavGeod__Sequence * array)
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
      septentrio_gnss_driver__msg__INSNavGeod__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__INSNavGeod__Sequence *
septentrio_gnss_driver__msg__INSNavGeod__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__INSNavGeod__Sequence * array = (septentrio_gnss_driver__msg__INSNavGeod__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__INSNavGeod__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__INSNavGeod__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__INSNavGeod__Sequence__destroy(septentrio_gnss_driver__msg__INSNavGeod__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__INSNavGeod__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__INSNavGeod__Sequence__are_equal(const septentrio_gnss_driver__msg__INSNavGeod__Sequence * lhs, const septentrio_gnss_driver__msg__INSNavGeod__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__INSNavGeod__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__INSNavGeod__Sequence__copy(
  const septentrio_gnss_driver__msg__INSNavGeod__Sequence * input,
  septentrio_gnss_driver__msg__INSNavGeod__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__INSNavGeod);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__INSNavGeod * data =
      (septentrio_gnss_driver__msg__INSNavGeod *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__INSNavGeod__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__INSNavGeod__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__INSNavGeod__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
