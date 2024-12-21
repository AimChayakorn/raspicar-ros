// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rc_pwm_pkg:msg/PubPwm.idl
// generated code does not contain a copyright notice

#ifndef RC_PWM_PKG__MSG__DETAIL__PUB_PWM__STRUCT_HPP_
#define RC_PWM_PKG__MSG__DETAIL__PUB_PWM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rc_pwm_pkg__msg__PubPwm __attribute__((deprecated))
#else
# define DEPRECATED__rc_pwm_pkg__msg__PubPwm __declspec(deprecated)
#endif

namespace rc_pwm_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PubPwm_
{
  using Type = PubPwm_<ContainerAllocator>;

  explicit PubPwm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dirr = 0ll;
      this->left_pwm = 0ll;
      this->right_pwm = 0ll;
    }
  }

  explicit PubPwm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dirr = 0ll;
      this->left_pwm = 0ll;
      this->right_pwm = 0ll;
    }
  }

  // field types and members
  using _dirr_type =
    int64_t;
  _dirr_type dirr;
  using _left_pwm_type =
    int64_t;
  _left_pwm_type left_pwm;
  using _right_pwm_type =
    int64_t;
  _right_pwm_type right_pwm;

  // setters for named parameter idiom
  Type & set__dirr(
    const int64_t & _arg)
  {
    this->dirr = _arg;
    return *this;
  }
  Type & set__left_pwm(
    const int64_t & _arg)
  {
    this->left_pwm = _arg;
    return *this;
  }
  Type & set__right_pwm(
    const int64_t & _arg)
  {
    this->right_pwm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rc_pwm_pkg::msg::PubPwm_<ContainerAllocator> *;
  using ConstRawPtr =
    const rc_pwm_pkg::msg::PubPwm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rc_pwm_pkg::msg::PubPwm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rc_pwm_pkg::msg::PubPwm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rc_pwm_pkg::msg::PubPwm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rc_pwm_pkg::msg::PubPwm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rc_pwm_pkg::msg::PubPwm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rc_pwm_pkg::msg::PubPwm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rc_pwm_pkg::msg::PubPwm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rc_pwm_pkg::msg::PubPwm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rc_pwm_pkg__msg__PubPwm
    std::shared_ptr<rc_pwm_pkg::msg::PubPwm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rc_pwm_pkg__msg__PubPwm
    std::shared_ptr<rc_pwm_pkg::msg::PubPwm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PubPwm_ & other) const
  {
    if (this->dirr != other.dirr) {
      return false;
    }
    if (this->left_pwm != other.left_pwm) {
      return false;
    }
    if (this->right_pwm != other.right_pwm) {
      return false;
    }
    return true;
  }
  bool operator!=(const PubPwm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PubPwm_

// alias to use template instance with default allocator
using PubPwm =
  rc_pwm_pkg::msg::PubPwm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rc_pwm_pkg

#endif  // RC_PWM_PKG__MSG__DETAIL__PUB_PWM__STRUCT_HPP_
