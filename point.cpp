// File point.cpp
// This file contains the implementation of methods of the point class.
// CLASS: three dimensional point (see point.h) for documentation.

#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

namespace Jarrett_Greig
{
  point::point(float initx, float inity, float initz)
  //Precondition: A point object is created.
  //Postcondition: The point is set by default to have 0 for all coordinates.
  {
    x = 0;
    y = 0;
    z = 0;
  }
  
  void point::shift_x(float amount)
  //Precondition: A point has an existing x coordinate.
  //Postcondition: The point's x coordinate is shifted by amount.
  {
    x += amount;
  }
  
  void point::shift_y(float amount)
  //Precondition: A point has an existing y coordinate.
  //Postcondition: The point's y coordinate is shifted by amount.
  {
    y += amount;
  }
  
  void point::shift_z(float amount)
  //Precondition: A point has an existing z coordinate.
  //Postcondition: The point's z coordinate is shifted by amount.
  {
    z += amount;
  }
  
  void point::rotate_x(float a)
  //Precondition: A point has x, y, z coordinates.
  //Postcondition: The point is rotated a degrees about x axis.
  {
    float yprime, zprime;
    yprime = (y * cos( a * 3.14159 / 180.0)) - (z * sin( a * 3.14159 / 180.0));
    zprime = (y * sin( a * 3.14159 / 180.0)) + (z * cos( a * 2.14159 / 180.0));
    y = yprime;
    z = zprime;
  }
  
  void point::rotate_y(float a)
  //Precondition: A point has x, y, z coordinates.
  //Postcondition: The point is rotated a degrees about y axis.
  {
    float xprime, zprime;
    xprime = (x * cos( a * 3.14159 / 180.0)) + (z * sin( a * 3.14159 / 180.0));
    zprime = (z * cos( a * 3.14159 / 180.0)) - (x * sin( a * 3.14159 / 180.0));
    x = xprime;
    z = zprime;
  }
  
  void point::rotate_z(float a)
  //Precondition: A point has x, y, z coordinates.
  //Postcondition: The point is rotated a degrees about z axis.
  {
    float xprime, yprime;
    xprime = (x * cos( a * 3.14159 / 180.0)) - (y * sin( a * 3.14159 / 180.0));
    yprime = (x * sin( a * 3.14159 / 180.0)) + (y * cos( a * 3.14159 / 180.0));
    x = xprime;
    y = yprime;
  }
  
  float point::get_x() const
  //Precondition: A point has x coordinate.
  //Postcondition: The value of the x cordinate is returned as a float.
  {
    return x;
  }
  
  float point::get_y() const
  //Precondition: A point has y coordinate.
  //Postcondition: The value of the y coordinate is returned as a float.
  {
    return y;
  }
  
  float point::get_z() const
  //Precondition: A point has z coordinate.
  //Postcondition: The value of the z coordinate is returned as a float.
  {
    return z;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
