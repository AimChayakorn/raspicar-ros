// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rc_pwm_pkg:msg/Pwm.idl
// generated code does not contain a copyright notice

#ifndef RC_PWM_PKG__MSG__DETAIL__PWM__STRUCT_HPP_
#define RC_PWM_PKG__MSG__DETAIL__PWM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rc_pwm_pkg__msg__Pwm __attribute__((deprecated))
#else
# define DEPRECATED__rc_pwm_pkg__msg__Pwm __declspec(deprecated)
#endif

namespace rc_pwm_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pwm_
{
  using Type = Pwm_<ContainerAllocator>;

  explicit Pwm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0ll;
      this->value = 0ll;
    }
  }

  explicit Pwm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0ll;
      this->value = 0ll;
    }
  }

  // field types and members
  using _code_type =
    int64_t;
  _code_type code;
  using _value_type =
    int64_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__code(
    const int64_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__value(
    const int64_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rc_pwm_pkg::msg::Pwm_<ContainerAllocator> *;
  using ConstRawPtr =
    const rc_pwm_pkg::msg::Pwm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rc_pwm_pkg::msg::Pwm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rc_pwm_pkg::msg::Pwm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rc_pwm_pkg::msg::Pwm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rc_pwm_pkg::msg::Pwm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rc_pwm_pkg::msg::Pwm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rc_pwm_pkg::msg::Pwm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rc_pwm_pkg::msg::Pwm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rc_pwm_pkg::msg::Pwm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rc_pwm_pkg__msg__Pwm
    std::shared_ptr<rc_pwm_pkg::msg::Pwm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rc_pwm_pkg__msg__Pwm
    std::shared_ptr<rc_pwm_pkg::msg::Pwm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pwm_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pwm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pwm_

// alias to use template instance with default allocator
using Pwm =
  rc_pwm_pkg::msg::Pwm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rc_pwm_pkg

#endif  // RC_PWM_PKG__MSG__DETAIL__PWM__STRUCT_HPP_
