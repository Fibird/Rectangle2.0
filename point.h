#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>

class CPoint
{
    double x, y;
public:
    CPoint(double x = 0, double y = 0);       //constructor
    ~CPoint(void);                      //destructor
    double Distance(double x = 0, double y = 0);           //computes the distance of two points
    double GetX(void);                     //gets the value of x
    double GetY(void);                     //gets the value of y
    void SetX(double _x);                   //sets the value of x
    void SetY(double _y);                   //sets the vslue of y
    void Move(double dx, double dy);           //moves the point
};

#endif // POINT_H_INCLUDED
