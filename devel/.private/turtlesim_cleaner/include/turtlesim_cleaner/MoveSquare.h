// Generated by gencpp from file turtlesim_cleaner/MoveSquare.msg
// DO NOT EDIT!


#ifndef TURTLESIM_CLEANER_MESSAGE_MOVESQUARE_H
#define TURTLESIM_CLEANER_MESSAGE_MOVESQUARE_H

#include <ros/service_traits.h>


#include <turtlesim_cleaner/MoveSquareRequest.h>
#include <turtlesim_cleaner/MoveSquareResponse.h>


namespace turtlesim_cleaner
{

struct MoveSquare
{

typedef MoveSquareRequest Request;
typedef MoveSquareResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveSquare
} // namespace turtlesim_cleaner


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::turtlesim_cleaner::MoveSquare > {
  static const char* value()
  {
    return "af0b48fe9187ad9b8874f8bb3dcfb81d";
  }

  static const char* value(const ::turtlesim_cleaner::MoveSquare&) { return value(); }
};

template<>
struct DataType< ::turtlesim_cleaner::MoveSquare > {
  static const char* value()
  {
    return "turtlesim_cleaner/MoveSquare";
  }

  static const char* value(const ::turtlesim_cleaner::MoveSquare&) { return value(); }
};


// service_traits::MD5Sum< ::turtlesim_cleaner::MoveSquareRequest> should match
// service_traits::MD5Sum< ::turtlesim_cleaner::MoveSquare >
template<>
struct MD5Sum< ::turtlesim_cleaner::MoveSquareRequest>
{
  static const char* value()
  {
    return MD5Sum< ::turtlesim_cleaner::MoveSquare >::value();
  }
  static const char* value(const ::turtlesim_cleaner::MoveSquareRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::turtlesim_cleaner::MoveSquareRequest> should match
// service_traits::DataType< ::turtlesim_cleaner::MoveSquare >
template<>
struct DataType< ::turtlesim_cleaner::MoveSquareRequest>
{
  static const char* value()
  {
    return DataType< ::turtlesim_cleaner::MoveSquare >::value();
  }
  static const char* value(const ::turtlesim_cleaner::MoveSquareRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::turtlesim_cleaner::MoveSquareResponse> should match
// service_traits::MD5Sum< ::turtlesim_cleaner::MoveSquare >
template<>
struct MD5Sum< ::turtlesim_cleaner::MoveSquareResponse>
{
  static const char* value()
  {
    return MD5Sum< ::turtlesim_cleaner::MoveSquare >::value();
  }
  static const char* value(const ::turtlesim_cleaner::MoveSquareResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::turtlesim_cleaner::MoveSquareResponse> should match
// service_traits::DataType< ::turtlesim_cleaner::MoveSquare >
template<>
struct DataType< ::turtlesim_cleaner::MoveSquareResponse>
{
  static const char* value()
  {
    return DataType< ::turtlesim_cleaner::MoveSquare >::value();
  }
  static const char* value(const ::turtlesim_cleaner::MoveSquareResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TURTLESIM_CLEANER_MESSAGE_MOVESQUARE_H