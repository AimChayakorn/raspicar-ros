// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rc_pwm_pkg:msg/Pwm.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rc_pwm_pkg/msg/detail/pwm__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rc_pwm_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pwm_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rc_pwm_pkg::msg::Pwm(_init);
}

void Pwm_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rc_pwm_pkg::msg::Pwm *>(message_memory);
  typed_message->~Pwm();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pwm_message_member_array[2] = {
  {
    "code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rc_pwm_pkg::msg::Pwm, code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rc_pwm_pkg::msg::Pwm, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pwm_message_members = {
  "rc_pwm_pkg::msg",  // message namespace
  "Pwm",  // message name
  2,  // number of fields
  sizeof(rc_pwm_pkg::msg::Pwm),
  Pwm_message_member_array,  // message members
  Pwm_init_function,  // function to initialize message memory (memory has to be allocated)
  Pwm_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pwm_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pwm_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rc_pwm_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rc_pwm_pkg::msg::Pwm>()
{
  return &::rc_pwm_pkg::msg::rosidl_typesupport_introspection_cpp::Pwm_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rc_pwm_pkg, msg, Pwm)() {
  return &::rc_pwm_pkg::msg::rosidl_typesupport_introspection_cpp::Pwm_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
