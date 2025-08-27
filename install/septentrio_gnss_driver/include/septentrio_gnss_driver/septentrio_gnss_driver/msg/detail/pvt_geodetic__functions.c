// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from septentrio_gnss_driver:msg/PVTGeodetic.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/pvt_geodetic__functions.h"

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
septentrio_gnss_driver__msg__PVTGeodetic__init(septentrio_gnss_driver__msg__PVTGeodetic * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    septentrio_gnss_driver__msg__PVTGeodetic__fini(msg);
    return false;
  }
  // block_header
  if (!septentrio_gnss_driver__msg__BlockHeader__init(&msg->block_header)) {
    septentrio_gnss_driver__msg__PVTGeodetic__fini(msg);
    return false;
  }
  // mode
  // error
  // latitude
  // longitude
  // height
  // undulation
  // vn
  // ve
  // vu
  // cog
  // rx_clk_bias
  // rx_clk_drift
  // time_system
  // datum
  // nr_sv
  // wa_corr_info
  // reference_id
  // mean_corr_age
  // signal_info
  // alert_flag
  // nr_bases
  // ppp_info
  // latency
  // h_accuracy
  // v_accuracy
  // misc
  return true;
}

void
septentrio_gnss_driver__msg__PVTGeodetic__fini(septentrio_gnss_driver__msg__PVTGeodetic * msg)
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
  // latitude
  // longitude
  // height
  // undulation
  // vn
  // ve
  // vu
  // cog
  // rx_clk_bias
  // rx_clk_drift
  // time_system
  // datum
  // nr_sv
  // wa_corr_info
  // reference_id
  // mean_corr_age
  // signal_info
  // alert_flag
  // nr_bases
  // ppp_info
  // latency
  // h_accuracy
  // v_accuracy
  // misc
}

bool
septentrio_gnss_driver__msg__PVTGeodetic__are_equal(const septentrio_gnss_driver__msg__PVTGeodetic * lhs, const septentrio_gnss_driver__msg__PVTGeodetic * rhs)
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
  // vn
  if (lhs->vn != rhs->vn) {
    return false;
  }
  // ve
  if (lhs->ve != rhs->ve) {
    return false;
  }
  // vu
  if (lhs->vu != rhs->vu) {
    return false;
  }
  // cog
  if (lhs->cog != rhs->cog) {
    return false;
  }
  // rx_clk_bias
  if (lhs->rx_clk_bias != rhs->rx_clk_bias) {
    return false;
  }
  // rx_clk_drift
  if (lhs->rx_clk_drift != rhs->rx_clk_drift) {
    return false;
  }
  // time_system
  if (lhs->time_system != rhs->time_system) {
    return false;
  }
  // datum
  if (lhs->datum != rhs->datum) {
    return false;
  }
  // nr_sv
  if (lhs->nr_sv != rhs->nr_sv) {
    return false;
  }
  // wa_corr_info
  if (lhs->wa_corr_info != rhs->wa_corr_info) {
    return false;
  }
  // reference_id
  if (lhs->reference_id != rhs->reference_id) {
    return false;
  }
  // mean_corr_age
  if (lhs->mean_corr_age != rhs->mean_corr_age) {
    return false;
  }
  // signal_info
  if (lhs->signal_info != rhs->signal_info) {
    return false;
  }
  // alert_flag
  if (lhs->alert_flag != rhs->alert_flag) {
    return false;
  }
  // nr_bases
  if (lhs->nr_bases != rhs->nr_bases) {
    return false;
  }
  // ppp_info
  if (lhs->ppp_info != rhs->ppp_info) {
    return false;
  }
  // latency
  if (lhs->latency != rhs->latency) {
    return false;
  }
  // h_accuracy
  if (lhs->h_accuracy != rhs->h_accuracy) {
    return false;
  }
  // v_accuracy
  if (lhs->v_accuracy != rhs->v_accuracy) {
    return false;
  }
  // misc
  if (lhs->misc != rhs->misc) {
    return false;
  }
  return true;
}

bool
septentrio_gnss_driver__msg__PVTGeodetic__copy(
  const septentrio_gnss_driver__msg__PVTGeodetic * input,
  septentrio_gnss_driver__msg__PVTGeodetic * output)
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
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // height
  output->height = input->height;
  // undulation
  output->undulation = input->undulation;
  // vn
  output->vn = input->vn;
  // ve
  output->ve = input->ve;
  // vu
  output->vu = input->vu;
  // cog
  output->cog = input->cog;
  // rx_clk_bias
  output->rx_clk_bias = input->rx_clk_bias;
  // rx_clk_drift
  output->rx_clk_drift = input->rx_clk_drift;
  // time_system
  output->time_system = input->time_system;
  // datum
  output->datum = input->datum;
  // nr_sv
  output->nr_sv = input->nr_sv;
  // wa_corr_info
  output->wa_corr_info = input->wa_corr_info;
  // reference_id
  output->reference_id = input->reference_id;
  // mean_corr_age
  output->mean_corr_age = input->mean_corr_age;
  // signal_info
  output->signal_info = input->signal_info;
  // alert_flag
  output->alert_flag = input->alert_flag;
  // nr_bases
  output->nr_bases = input->nr_bases;
  // ppp_info
  output->ppp_info = input->ppp_info;
  // latency
  output->latency = input->latency;
  // h_accuracy
  output->h_accuracy = input->h_accuracy;
  // v_accuracy
  output->v_accuracy = input->v_accuracy;
  // misc
  output->misc = input->misc;
  return true;
}

septentrio_gnss_driver__msg__PVTGeodetic *
septentrio_gnss_driver__msg__PVTGeodetic__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PVTGeodetic * msg = (septentrio_gnss_driver__msg__PVTGeodetic *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__PVTGeodetic), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(septentrio_gnss_driver__msg__PVTGeodetic));
  bool success = septentrio_gnss_driver__msg__PVTGeodetic__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
septentrio_gnss_driver__msg__PVTGeodetic__destroy(septentrio_gnss_driver__msg__PVTGeodetic * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    septentrio_gnss_driver__msg__PVTGeodetic__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
septentrio_gnss_driver__msg__PVTGeodetic__Sequence__init(septentrio_gnss_driver__msg__PVTGeodetic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PVTGeodetic * data = NULL;

  if (size) {
    data = (septentrio_gnss_driver__msg__PVTGeodetic *)allocator.zero_allocate(size, sizeof(septentrio_gnss_driver__msg__PVTGeodetic), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = septentrio_gnss_driver__msg__PVTGeodetic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        septentrio_gnss_driver__msg__PVTGeodetic__fini(&data[i - 1]);
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
septentrio_gnss_driver__msg__PVTGeodetic__Sequence__fini(septentrio_gnss_driver__msg__PVTGeodetic__Sequence * array)
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
      septentrio_gnss_driver__msg__PVTGeodetic__fini(&array->data[i]);
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

septentrio_gnss_driver__msg__PVTGeodetic__Sequence *
septentrio_gnss_driver__msg__PVTGeodetic__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  septentrio_gnss_driver__msg__PVTGeodetic__Sequence * array = (septentrio_gnss_driver__msg__PVTGeodetic__Sequence *)allocator.allocate(sizeof(septentrio_gnss_driver__msg__PVTGeodetic__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = septentrio_gnss_driver__msg__PVTGeodetic__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
septentrio_gnss_driver__msg__PVTGeodetic__Sequence__destroy(septentrio_gnss_driver__msg__PVTGeodetic__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    septentrio_gnss_driver__msg__PVTGeodetic__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
septentrio_gnss_driver__msg__PVTGeodetic__Sequence__are_equal(const septentrio_gnss_driver__msg__PVTGeodetic__Sequence * lhs, const septentrio_gnss_driver__msg__PVTGeodetic__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!septentrio_gnss_driver__msg__PVTGeodetic__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
septentrio_gnss_driver__msg__PVTGeodetic__Sequence__copy(
  const septentrio_gnss_driver__msg__PVTGeodetic__Sequence * input,
  septentrio_gnss_driver__msg__PVTGeodetic__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(septentrio_gnss_driver__msg__PVTGeodetic);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    septentrio_gnss_driver__msg__PVTGeodetic * data =
      (septentrio_gnss_driver__msg__PVTGeodetic *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!septentrio_gnss_driver__msg__PVTGeodetic__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          septentrio_gnss_driver__msg__PVTGeodetic__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!septentrio_gnss_driver__msg__PVTGeodetic__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
