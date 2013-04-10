/* Auto-generated by genmsg_cpp for file /home/ekelley/ros_workspace/sandbox/ccny_vision/ar_pose/msg/ARMarker.msg */
#ifndef AR_POSE_MESSAGE_ARMARKER_H
#define AR_POSE_MESSAGE_ARMARKER_H
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

#include "std_msgs/Header.h"
#include "geometry_msgs/PoseWithCovariance.h"

namespace ar_pose
{
template <class ContainerAllocator>
struct ARMarker_ {
  typedef ARMarker_<ContainerAllocator> Type;

  ARMarker_()
  : header()
  , id(0)
  , pose()
  , confidence(0)
  {
  }

  ARMarker_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , id(0)
  , pose(_alloc)
  , confidence(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint32_t _id_type;
  uint32_t id;

  typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _pose_type;
   ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  pose;

  typedef uint32_t _confidence_type;
  uint32_t confidence;


  typedef boost::shared_ptr< ::ar_pose::ARMarker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ar_pose::ARMarker_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ARMarker
typedef  ::ar_pose::ARMarker_<std::allocator<void> > ARMarker;

typedef boost::shared_ptr< ::ar_pose::ARMarker> ARMarkerPtr;
typedef boost::shared_ptr< ::ar_pose::ARMarker const> ARMarkerConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ar_pose::ARMarker_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ar_pose::ARMarker_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ar_pose

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ar_pose::ARMarker_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ar_pose::ARMarker_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ar_pose::ARMarker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "93c4ce9061a70bc30293e52ac4675f76";
  }

  static const char* value(const  ::ar_pose::ARMarker_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x93c4ce9061a70bc3ULL;
  static const uint64_t static_value2 = 0x0293e52ac4675f76ULL;
};

template<class ContainerAllocator>
struct DataType< ::ar_pose::ARMarker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ar_pose/ARMarker";
  }

  static const char* value(const  ::ar_pose::ARMarker_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ar_pose::ARMarker_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint32 id\n\
geometry_msgs/PoseWithCovariance pose\n\
uint32 confidence\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::ar_pose::ARMarker_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::ar_pose::ARMarker_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::ar_pose::ARMarker_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ar_pose::ARMarker_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.id);
    stream.next(m.pose);
    stream.next(m.confidence);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ARMarker_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ar_pose::ARMarker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ar_pose::ARMarker_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "pose: ";
s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "confidence: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.confidence);
  }
};


} // namespace message_operations
} // namespace ros

#endif // AR_POSE_MESSAGE_ARMARKER_H

