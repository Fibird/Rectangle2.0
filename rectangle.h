#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <iostream>
#include "point.h"

using namespace std;

class CRectangle
{
    CPoint p1;
    CPoint p2;
public:
    CRectangle(double x1 = 0, double y1 = 200, double x2 = 324, double y2 = 0);
    double Area(void);              //computes the area of the rectangle
    double Circumference(void);         //computes the circumference of the rectangle
    void LeftMove(double a);                //moves the rectangle left
    void RightMove(double d);               //moves the rectangle right
    void UpMove(double w);                  //moves the rectangle up
    void DownMove(double s);            //moves the rectangle down
    void draw(void);
    CPoint GetP1(void);
    CPoint GetP2(void);
    ~CRectangle(){};
};

#endif // RECTANGLE_H_INCLUDED
