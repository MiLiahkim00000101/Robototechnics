// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sum_full_name_service:srv/SumFullName.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sum_full_name_service/srv/sum_full_name.hpp"


#ifndef SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__STRUCT_HPP_
#define SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sum_full_name_service__srv__SumFullName_Request __attribute__((deprecated))
#else
# define DEPRECATED__sum_full_name_service__srv__SumFullName_Request __declspec(deprecated)
#endif

namespace sum_full_name_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SumFullName_Request_
{
  using Type = SumFullName_Request_<ContainerAllocator>;

  explicit SumFullName_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f_name = "";
      this->s_name = "";
      this->patronymic = "";
    }
  }

  explicit SumFullName_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : f_name(_alloc),
    s_name(_alloc),
    patronymic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f_name = "";
      this->s_name = "";
      this->patronymic = "";
    }
  }

  // field types and members
  using _f_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _f_name_type f_name;
  using _s_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _s_name_type s_name;
  using _patronymic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _patronymic_type patronymic;

  // setters for named parameter idiom
  Type & set__f_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->f_name = _arg;
    return *this;
  }
  Type & set__s_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->s_name = _arg;
    return *this;
  }
  Type & set__patronymic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->patronymic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sum_full_name_service__srv__SumFullName_Request
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sum_full_name_service__srv__SumFullName_Request
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SumFullName_Request_ & other) const
  {
    if (this->f_name != other.f_name) {
      return false;
    }
    if (this->s_name != other.s_name) {
      return false;
    }
    if (this->patronymic != other.patronymic) {
      return false;
    }
    return true;
  }
  bool operator!=(const SumFullName_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SumFullName_Request_

// alias to use template instance with default allocator
using SumFullName_Request =
  sum_full_name_service::srv::SumFullName_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sum_full_name_service


#ifndef _WIN32
# define DEPRECATED__sum_full_name_service__srv__SumFullName_Response __attribute__((deprecated))
#else
# define DEPRECATED__sum_full_name_service__srv__SumFullName_Response __declspec(deprecated)
#endif

namespace sum_full_name_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SumFullName_Response_
{
  using Type = SumFullName_Response_<ContainerAllocator>;

  explicit SumFullName_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_name = "";
    }
  }

  explicit SumFullName_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : full_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_name = "";
    }
  }

  // field types and members
  using _full_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _full_name_type full_name;

  // setters for named parameter idiom
  Type & set__full_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->full_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sum_full_name_service__srv__SumFullName_Response
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sum_full_name_service__srv__SumFullName_Response
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SumFullName_Response_ & other) const
  {
    if (this->full_name != other.full_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SumFullName_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SumFullName_Response_

// alias to use template instance with default allocator
using SumFullName_Response =
  sum_full_name_service::srv::SumFullName_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sum_full_name_service


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sum_full_name_service__srv__SumFullName_Event __attribute__((deprecated))
#else
# define DEPRECATED__sum_full_name_service__srv__SumFullName_Event __declspec(deprecated)
#endif

namespace sum_full_name_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SumFullName_Event_
{
  using Type = SumFullName_Event_<ContainerAllocator>;

  explicit SumFullName_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SumFullName_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sum_full_name_service::srv::SumFullName_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sum_full_name_service::srv::SumFullName_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sum_full_name_service__srv__SumFullName_Event
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sum_full_name_service__srv__SumFullName_Event
    std::shared_ptr<sum_full_name_service::srv::SumFullName_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SumFullName_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SumFullName_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SumFullName_Event_

// alias to use template instance with default allocator
using SumFullName_Event =
  sum_full_name_service::srv::SumFullName_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sum_full_name_service

namespace sum_full_name_service
{

namespace srv
{

struct SumFullName
{
  using Request = sum_full_name_service::srv::SumFullName_Request;
  using Response = sum_full_name_service::srv::SumFullName_Response;
  using Event = sum_full_name_service::srv::SumFullName_Event;
};

}  // namespace srv

}  // namespace sum_full_name_service

#endif  // SUM_FULL_NAME_SERVICE__SRV__DETAIL__SUM_FULL_NAME__STRUCT_HPP_
