// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from septentrio_gnss_driver:msg/VelCovCartesian.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "septentrio_gnss_driver/msg/detail/vel_cov_cartesian__struct.h"
#include "septentrio_gnss_driver/msg/detail/vel_cov_cartesian__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace septentrio_gnss_driver
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _VelCovCartesian_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VelCovCartesian_type_support_ids_t;

static const _VelCovCartesian_type_support_ids_t _VelCovCartesian_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VelCovCartesian_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VelCovCartesian_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VelCovCartesian_type_support_symbol_names_t _VelCovCartesian_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, VelCovCartesian)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, septentrio_gnss_driver, msg, VelCovCartesian)),
  }
};

typedef struct _VelCovCartesian_type_support_data_t
{
  void * data[2];
} _VelCovCartesian_type_support_data_t;

static _VelCovCartesian_type_support_data_t _VelCovCartesian_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VelCovCartesian_message_typesupport_map = {
  2,
  "septentrio_gnss_driver",
  &_VelCovCartesian_message_typesupport_ids.typesupport_identifier[0],
  &_VelCovCartesian_message_typesupport_symbol_names.symbol_name[0],
  &_VelCovCartesian_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VelCovCartesian_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VelCovCartesian_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace septentrio_gnss_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, septentrio_gnss_driver, msg, VelCovCartesian)() {
  return &::septentrio_gnss_driver::msg::rosidl_typesupport_c::VelCovCartesian_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
