// Generated by gencpp from file flood_fill/Command.msg
// DO NOT EDIT!


#ifndef FLOOD_FILL_MESSAGE_COMMAND_H
#define FLOOD_FILL_MESSAGE_COMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace flood_fill
{
template <class ContainerAllocator>
struct Command_
{
  typedef Command_<ContainerAllocator> Type;

  Command_()
    : type()
    , value(0.0)  {
    }
  Command_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;

   typedef float _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::flood_fill::Command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::flood_fill::Command_<ContainerAllocator> const> ConstPtr;

}; // struct Command_

typedef ::flood_fill::Command_<std::allocator<void> > Command;

typedef boost::shared_ptr< ::flood_fill::Command > CommandPtr;
typedef boost::shared_ptr< ::flood_fill::Command const> CommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::flood_fill::Command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::flood_fill::Command_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::flood_fill::Command_<ContainerAllocator1> & lhs, const ::flood_fill::Command_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::flood_fill::Command_<ContainerAllocator1> & lhs, const ::flood_fill::Command_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace flood_fill

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::flood_fill::Command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::flood_fill::Command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flood_fill::Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::flood_fill::Command_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flood_fill::Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::flood_fill::Command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::flood_fill::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8165a05b6e90580d5249802a83c873ea";
  }

  static const char* value(const ::flood_fill::Command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8165a05b6e90580dULL;
  static const uint64_t static_value2 = 0x5249802a83c873eaULL;
};

template<class ContainerAllocator>
struct DataType< ::flood_fill::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "flood_fill/Command";
  }

  static const char* value(const ::flood_fill::Command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::flood_fill::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string type\n"
"float32 value \n"
;
  }

  static const char* value(const ::flood_fill::Command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::flood_fill::Command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::flood_fill::Command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::flood_fill::Command_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FLOOD_FILL_MESSAGE_COMMAND_H