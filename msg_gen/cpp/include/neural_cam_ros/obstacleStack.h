/* Auto-generated by genmsg_cpp for file /home/hxhx/darknet/haixun00/neural_cam_ros/msg/obstacleStack.msg */
#ifndef NEURAL_CAM_ROS_MESSAGE_OBSTACLESTACK_H
#define NEURAL_CAM_ROS_MESSAGE_OBSTACLESTACK_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "neural_cam_ros/obstacle.h"

namespace neural_cam_ros
{
template <class ContainerAllocator>
struct obstacleStack_ {
  typedef obstacleStack_<ContainerAllocator> Type;

  obstacleStack_()
  : stack_name()
  , stack_len(0)
  , stack_obstacles()
  {
  }

  obstacleStack_(const ContainerAllocator& _alloc)
  : stack_name(_alloc)
  , stack_len(0)
  , stack_obstacles(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _stack_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  stack_name;

  typedef uint32_t _stack_len_type;
  uint32_t stack_len;

  typedef std::vector< ::neural_cam_ros::obstacle_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::neural_cam_ros::obstacle_<ContainerAllocator> >::other >  _stack_obstacles_type;
  std::vector< ::neural_cam_ros::obstacle_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::neural_cam_ros::obstacle_<ContainerAllocator> >::other >  stack_obstacles;


  typedef boost::shared_ptr< ::neural_cam_ros::obstacleStack_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neural_cam_ros::obstacleStack_<ContainerAllocator>  const> ConstPtr;
}; // struct obstacleStack
typedef  ::neural_cam_ros::obstacleStack_<std::allocator<void> > obstacleStack;

typedef boost::shared_ptr< ::neural_cam_ros::obstacleStack> obstacleStackPtr;
typedef boost::shared_ptr< ::neural_cam_ros::obstacleStack const> obstacleStackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::neural_cam_ros::obstacleStack_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::neural_cam_ros::obstacleStack_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace neural_cam_ros

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::neural_cam_ros::obstacleStack_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::neural_cam_ros::obstacleStack_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::neural_cam_ros::obstacleStack_<ContainerAllocator> > {
  static const char* value() 
  {
    return "78f69d2c2bc1534a704126e4efe4e06e";
  }

  static const char* value(const  ::neural_cam_ros::obstacleStack_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x78f69d2c2bc1534aULL;
  static const uint64_t static_value2 = 0x704126e4efe4e06eULL;
};

template<class ContainerAllocator>
struct DataType< ::neural_cam_ros::obstacleStack_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neural_cam_ros/obstacleStack";
  }

  static const char* value(const  ::neural_cam_ros::obstacleStack_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::neural_cam_ros::obstacleStack_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string stack_name\n\
uint32 stack_len\n\
obstacle[] stack_obstacles\n\
\n\
================================================================================\n\
MSG: neural_cam_ros/obstacle\n\
#info: topleft_, bottomright_ refering to image\n\
#info: planar_ is plane position information\n\
\n\
string name\n\
geometry_msgs/Point topleft\n\
geometry_msgs/Point bottomright\n\
\n\
#string name\n\
#float32 depth\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::neural_cam_ros::obstacleStack_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::neural_cam_ros::obstacleStack_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.stack_name);
    stream.next(m.stack_len);
    stream.next(m.stack_obstacles);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct obstacleStack_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::neural_cam_ros::obstacleStack_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::neural_cam_ros::obstacleStack_<ContainerAllocator> & v) 
  {
    s << indent << "stack_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.stack_name);
    s << indent << "stack_len: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.stack_len);
    s << indent << "stack_obstacles[]" << std::endl;
    for (size_t i = 0; i < v.stack_obstacles.size(); ++i)
    {
      s << indent << "  stack_obstacles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::neural_cam_ros::obstacle_<ContainerAllocator> >::stream(s, indent + "    ", v.stack_obstacles[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // NEURAL_CAM_ROS_MESSAGE_OBSTACLESTACK_H

