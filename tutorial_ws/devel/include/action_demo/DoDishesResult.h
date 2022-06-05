// Generated by gencpp from file action_demo/DoDishesResult.msg
// DO NOT EDIT!


#ifndef ACTION_DEMO_MESSAGE_DODISHESRESULT_H
#define ACTION_DEMO_MESSAGE_DODISHESRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace action_demo
{
template <class ContainerAllocator>
struct DoDishesResult_
{
  typedef DoDishesResult_<ContainerAllocator> Type;

  DoDishesResult_()
    : total_dishes_cleaned(0)  {
    }
  DoDishesResult_(const ContainerAllocator& _alloc)
    : total_dishes_cleaned(0)  {
  (void)_alloc;
    }



   typedef uint32_t _total_dishes_cleaned_type;
  _total_dishes_cleaned_type total_dishes_cleaned;





  typedef boost::shared_ptr< ::action_demo::DoDishesResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::action_demo::DoDishesResult_<ContainerAllocator> const> ConstPtr;

}; // struct DoDishesResult_

typedef ::action_demo::DoDishesResult_<std::allocator<void> > DoDishesResult;

typedef boost::shared_ptr< ::action_demo::DoDishesResult > DoDishesResultPtr;
typedef boost::shared_ptr< ::action_demo::DoDishesResult const> DoDishesResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::action_demo::DoDishesResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::action_demo::DoDishesResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace action_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'action_demo': ['/home/ros/tutorial_ws/devel/share/action_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::action_demo::DoDishesResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::action_demo::DoDishesResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_demo::DoDishesResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_demo::DoDishesResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_demo::DoDishesResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_demo::DoDishesResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::action_demo::DoDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58faa44dda59c6545bea63ff57491cbe";
  }

  static const char* value(const ::action_demo::DoDishesResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58faa44dda59c654ULL;
  static const uint64_t static_value2 = 0x5bea63ff57491cbeULL;
};

template<class ContainerAllocator>
struct DataType< ::action_demo::DoDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "action_demo/DoDishesResult";
  }

  static const char* value(const ::action_demo::DoDishesResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::action_demo::DoDishesResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the result\n\
uint32 total_dishes_cleaned\n\
";
  }

  static const char* value(const ::action_demo::DoDishesResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::action_demo::DoDishesResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.total_dishes_cleaned);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoDishesResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::action_demo::DoDishesResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::action_demo::DoDishesResult_<ContainerAllocator>& v)
  {
    s << indent << "total_dishes_cleaned: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.total_dishes_cleaned);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTION_DEMO_MESSAGE_DODISHESRESULT_H
