#include <iostream>
#include <cmath>
#include "point.h"

CPoint::CPoint(double x, double y)
{
    this->x = x;
    this->y = y;
}

double CPoint::GetX()
{
    return x;
}

double CPoint::GetY()
{
    return y;
}

void CPoint::SetX(double _x)
{
    x = _x;
}

void CPoint::SetY(double _y)
{
    y = _y;
}

void CPoint::Move(double dx, double dy)
{
    x += dx;
    y += dy;
}

double CPoint::Distance(double x, double y)
{
    return sqrt((this->x - x)*(this->x - x) + (this->y - y)*(this->y - y));
}

CPoint::~CPoint(){};
