// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_sdk_custom_interfaces/srv/detail/get_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_position__traits.hpp"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_sdk_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_sdk_custom_interfaces::srv::GetPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_custom_interfaces::srv::GetPosition_Request & msg)
{
  return dynamixel_sdk_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_custom_interfaces::srv::GetPosition_Request>()
{
  return "dynamixel_sdk_custom_interfaces::srv::GetPosition_Request";
}

template<>
inline const char * name<dynamixel_sdk_custom_interfaces::srv::GetPosition_Request>()
{
  return "dynamixel_sdk_custom_interfaces/srv/GetPosition_Request";
}

template<>
struct has_fixed_size<dynamixel_sdk_custom_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, has_fixed_size<dynamixel_sdk_custom_interfaces::msg::SetPosition>::value> {};

template<>
struct has_bounded_size<dynamixel_sdk_custom_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, has_bounded_size<dynamixel_sdk_custom_interfaces::msg::SetPosition>::value> {};

template<>
struct is_message<dynamixel_sdk_custom_interfaces::srv::GetPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'out_data'
// already included above
// #include "dynamixel_sdk_custom_interfaces/msg/detail/set_position__traits.hpp"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: out_data
  {
    out << "out_data: ";
    to_flow_style_yaml(msg.out_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: out_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "out_data:\n";
    to_block_style_yaml(msg.out_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_sdk_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_sdk_custom_interfaces::srv::GetPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_custom_interfaces::srv::GetPosition_Response & msg)
{
  return dynamixel_sdk_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_custom_interfaces::srv::GetPosition_Response>()
{
  return "dynamixel_sdk_custom_interfaces::srv::GetPosition_Response";
}

template<>
inline const char * name<dynamixel_sdk_custom_interfaces::srv::GetPosition_Response>()
{
  return "dynamixel_sdk_custom_interfaces/srv/GetPosition_Response";
}

template<>
struct has_fixed_size<dynamixel_sdk_custom_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, has_fixed_size<dynamixel_sdk_custom_interfaces::msg::SetPosition>::value> {};

template<>
struct has_bounded_size<dynamixel_sdk_custom_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, has_bounded_size<dynamixel_sdk_custom_interfaces::msg::SetPosition>::value> {};

template<>
struct is_message<dynamixel_sdk_custom_interfaces::srv::GetPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_sdk_custom_interfaces::srv::GetPosition>()
{
  return "dynamixel_sdk_custom_interfaces::srv::GetPosition";
}

template<>
inline const char * name<dynamixel_sdk_custom_interfaces::srv::GetPosition>()
{
  return "dynamixel_sdk_custom_interfaces/srv/GetPosition";
}

template<>
struct has_fixed_size<dynamixel_sdk_custom_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamixel_sdk_custom_interfaces::srv::GetPosition_Request>::value &&
    has_fixed_size<dynamixel_sdk_custom_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamixel_sdk_custom_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamixel_sdk_custom_interfaces::srv::GetPosition_Request>::value &&
    has_bounded_size<dynamixel_sdk_custom_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct is_service<dynamixel_sdk_custom_interfaces::srv::GetPosition>
  : std::true_type
{
};

template<>
struct is_service_request<dynamixel_sdk_custom_interfaces::srv::GetPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamixel_sdk_custom_interfaces::srv::GetPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
