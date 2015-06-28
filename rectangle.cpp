#include <iostream>
#include <cmath>
#include "rectangle.h"
#include "Graph2D.h"

using namespace std;
using namespace graph;

CRectangle::CRectangle(double x1, double y1, double x2, double y2)
{
    p1.SetX(x1);
    p1.SetY(y1);
    p2.SetX(x2);
    p2.SetY(y2);
}

double CRectangle::Area()
{
    return abs((p2.GetX() - p1.GetX()) * (p1.GetY() - p2.GetY()));
}

double CRectangle::Circumference()
{
    return 2 * (fabs(p2.GetX() - p1.GetX()) + abs(p1.GetY() - p2.GetY()));
}

void CRectangle::LeftMove(double a)
{
    p1.Move(-a, 0);
    p2.Move(-a, 0);
}
void CRectangle::RightMove(double d)
{
    p1.Move(d, 0);
    p2.Move(d, 0);
}
void CRectangle::UpMove(double w)
{
    p1.Move(0, w);
    p2.Move(0, w);
}
void CRectangle::DownMove(double s)
{
    p1.Move(0, -s);
    p2.Move(0, -s);
}

void CRectangle::draw()
{
    setColor(BLACK);
    rectangle(p1.GetX(), p1.GetY(), p2.GetX(), p2.GetY());
}

CPoint CRectangle::GetP1()
{
    return p1;
}
CPoint CRectangle::GetP2()
{
    return p2;
}
