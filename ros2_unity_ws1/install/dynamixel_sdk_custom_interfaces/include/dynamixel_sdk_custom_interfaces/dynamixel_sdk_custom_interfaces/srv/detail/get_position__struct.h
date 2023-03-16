// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_custom_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_position__struct.h"

/// Struct defined in srv/GetPosition in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__GetPosition_Request
{
  dynamixel_sdk_custom_interfaces__msg__SetPosition data;
} dynamixel_sdk_custom_interfaces__srv__GetPosition_Request;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__GetPosition_Request.
typedef struct dynamixel_sdk_custom_interfaces__srv__GetPosition_Request__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__GetPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__GetPosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'out_data'
// already included above
// #include "dynamixel_sdk_custom_interfaces/msg/detail/set_position__struct.h"

/// Struct defined in srv/GetPosition in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__GetPosition_Response
{
  dynamixel_sdk_custom_interfaces__msg__SetPosition out_data;
} dynamixel_sdk_custom_interfaces__srv__GetPosition_Response;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__GetPosition_Response.
typedef struct dynamixel_sdk_custom_interfaces__srv__GetPosition_Response__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__GetPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__GetPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_
