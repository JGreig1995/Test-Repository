// File point.h
// This file is the header file for assignment three.
// CLASS PROVDED: three dimensional point
//
// Constructor
// point(float initx = 0.0, float inity = 0.0, float initz = 0.0)
//
// MODIFICATION MEMBER FUNCTIONS for the point class
// void shift_x(float amount)
//    Postcondition: The point is moved by amount along the x axis.
// void shift_y(float amount)
//    Postcondition: The point is moved by amount along the y axis.
// void shift_z(float amount)
//    Postcondition: The point is moved by amount along the z axis.
// void rotate_x(float a)
//    Postcondition: The point is rotated by a degrees about the x axis.
// void rotate_y(float a)
//    Postcondition: The point is rotated by a degrees about the y axis.
// void rotate_z(float a)
//    Postcondition: The point is rotated by a degrees about the z axis.
//
// CONSTANT MEMBER FUNCTIONS for the point class
// float get_x()
//    Postcondition: The value returned is the x coordinate of the point.
// float get_y()
//    Postcondition: The value returned is the y coordinate of the point.
// float get_z()
//    Postconditoin: The value returned is the z coordinate of the point.
//
// VALUE SEMANTICES for the point class
//    Assignments and the copy constructor may be used with point objects.

#ifndef GREIG_POINT_H
#define GREIG_POINT_H
#include <iostream>

using namespace std;

namespace Jarrett_Greig
{
  class point
  {
  public:
  
    // Constructors
    point(float initx = 0.0, float inity = 0.0, float initz = 0.0);
  
    // MODIFICATION MEMBER FUNCTIONS
    void shift_x(float amount);
    void shift_y(float amount);
    void rotate_x(float a);
    void rotate_y(float a);
    void rotate_z(float a);
  
    // CONSTANT MEMBER FUNCTIONS
    float get_x() const;
    float get_y() const;
    float get_z() const;
  
  private:
    float x, y, z;
  };
}

#endif
