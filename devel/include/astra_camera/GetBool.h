// Generated by gencpp from file astra_camera/GetBool.msg
// DO NOT EDIT!


#ifndef ASTRA_CAMERA_MESSAGE_GETBOOL_H
#define ASTRA_CAMERA_MESSAGE_GETBOOL_H

#include <ros/service_traits.h>


#include <astra_camera/GetBoolRequest.h>
#include <astra_camera/GetBoolResponse.h>


namespace astra_camera
{

struct GetBool
{

typedef GetBoolRequest Request;
typedef GetBoolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetBool
} // namespace astra_camera


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::astra_camera::GetBool > {
  static const char* value()
  {
    return "43f76a855b16e988566e147b692f2fab";
  }

  static const char* value(const ::astra_camera::GetBool&) { return value(); }
};

template<>
struct DataType< ::astra_camera::GetBool > {
  static const char* value()
  {
    return "astra_camera/GetBool";
  }

  static const char* value(const ::astra_camera::GetBool&) { return value(); }
};


// service_traits::MD5Sum< ::astra_camera::GetBoolRequest> should match
// service_traits::MD5Sum< ::astra_camera::GetBool >
template<>
struct MD5Sum< ::astra_camera::GetBoolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::astra_camera::GetBool >::value();
  }
  static const char* value(const ::astra_camera::GetBoolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::astra_camera::GetBoolRequest> should match
// service_traits::DataType< ::astra_camera::GetBool >
template<>
struct DataType< ::astra_camera::GetBoolRequest>
{
  static const char* value()
  {
    return DataType< ::astra_camera::GetBool >::value();
  }
  static const char* value(const ::astra_camera::GetBoolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::astra_camera::GetBoolResponse> should match
// service_traits::MD5Sum< ::astra_camera::GetBool >
template<>
struct MD5Sum< ::astra_camera::GetBoolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::astra_camera::GetBool >::value();
  }
  static const char* value(const ::astra_camera::GetBoolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::astra_camera::GetBoolResponse> should match
// service_traits::DataType< ::astra_camera::GetBool >
template<>
struct DataType< ::astra_camera::GetBoolResponse>
{
  static const char* value()
  {
    return DataType< ::astra_camera::GetBool >::value();
  }
  static const char* value(const ::astra_camera::GetBoolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ASTRA_CAMERA_MESSAGE_GETBOOL_H
