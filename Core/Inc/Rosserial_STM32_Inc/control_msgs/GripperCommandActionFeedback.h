#ifndef _ROS_control_msgs_GripperCommandActionFeedback_h
#define _ROS_control_msgs_GripperCommandActionFeedback_h

#include <Rosserial_STM32_Inc/actionlib_msgs/GoalStatus.h>
#include <Rosserial_STM32_Inc/control_msgs/GripperCommandFeedback.h>
#include <Rosserial_STM32_Inc/ros/msg.h>
#include <Rosserial_STM32_Inc/std_msgs/Header.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

namespace control_msgs
{

  class GripperCommandActionFeedback : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef actionlib_msgs::GoalStatus _status_type;
      _status_type status;
      typedef control_msgs::GripperCommandFeedback _feedback_type;
      _feedback_type feedback;

    GripperCommandActionFeedback():
      header(),
      status(),
      feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->feedback.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->feedback.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "control_msgs/GripperCommandActionFeedback"; };
    const char * getMD5(){ return "653dff30c045f5e6ff3feb3409f4558d"; };

  };

}
#endif
