// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rc_pwm_pkg:msg/PubPwm.idl
// generated code does not contain a copyright notice
#include "rc_pwm_pkg/msg/detail/pub_pwm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rc_pwm_pkg/msg/detail/pub_pwm__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rc_pwm_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
cdr_serialize(
  const rc_pwm_pkg::msg::PubPwm & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_pwm
  cdr << ros_message.left_pwm;
  // Member: right_pwm
  cdr << ros_message.right_pwm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rc_pwm_pkg::msg::PubPwm & ros_message)
{
  // Member: left_pwm
  cdr >> ros_message.left_pwm;

  // Member: right_pwm
  cdr >> ros_message.right_pwm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
get_serialized_size(
  const rc_pwm_pkg::msg::PubPwm & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_pwm
  {
    size_t item_size = sizeof(ros_message.left_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_pwm
  {
    size_t item_size = sizeof(ros_message.right_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rc_pwm_pkg
max_serialized_size_PubPwm(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: left_pwm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_pwm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rc_pwm_pkg::msg::PubPwm;
    is_plain =
      (
      offsetof(DataType, right_pwm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PubPwm__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rc_pwm_pkg::msg::PubPwm *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PubPwm__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rc_pwm_pkg::msg::PubPwm *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PubPwm__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rc_pwm_pkg::msg::PubPwm *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PubPwm__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PubPwm(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PubPwm__callbacks = {
  "rc_pwm_pkg::msg",
  "PubPwm",
  _PubPwm__cdr_serialize,
  _PubPwm__cdr_deserialize,
  _PubPwm__get_serialized_size,
  _PubPwm__max_serialized_size
};

static rosidl_message_type_support_t _PubPwm__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PubPwm__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rc_pwm_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rc_pwm_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<rc_pwm_pkg::msg::PubPwm>()
{
  return &rc_pwm_pkg::msg::typesupport_fastrtps_cpp::_PubPwm__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rc_pwm_pkg, msg, PubPwm)() {
  return &rc_pwm_pkg::msg::typesupport_fastrtps_cpp::_PubPwm__handle;
}

#ifdef __cplusplus
}
#endif
