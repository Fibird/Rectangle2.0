#include <iostream>
#include "rectangle.h"
#include "Graph2D.h"
using namespace std;
using namespace graph;

CRectangle *r1;
char infoArea[20];
char infoCirc[20];

void display()
{
    CPoint point1, point2;
    char str1[20], str2[20];

    r1->draw();
    point1 = r1->GetP1();
    point2 = r1->GetP2();
    sprintf(str1, "%c%.2f%c%.2f%c", '(', point1.GetX(), ',', point1.GetY(), ')');
    sprintf(str2, "%c%.2f%c%.2f%c", '(', point2.GetX(), ',', point2.GetY(), ')');
    showCoordinate();
    putText(point1.GetX(), point1.GetY()+5, str1);
    putText(point2.GetX(), point2.GetY(), str2);
    putText(700, 500, infoArea);
    putText(700, 485, infoCirc);
}
void keyboard(unsigned char key)
{
    if (key == 'a') r1->LeftMove(2);
    else if (key == 'd') r1->RightMove(2);
    else if (key == 'w') r1->UpMove(2);
    else if (key == 's') r1->DownMove(2);
}
int main()
{
    double X1, Y1, X2, Y2;

    cout << "Please enter the coordinates of the rectangle: ";
    cin >> X1 >> Y1 >> X2 >> Y2;
    r1 = new CRectangle(X1, Y1, X2, Y2);

    sprintf(infoArea, "%s%.2f", "Area: ", r1->Area());
    sprintf(infoCirc, "%s%.2f",  "Circumference: ", r1->Circumference());
    setWinTitle("Rectangle");
    setWinSize(900, 600);
    initGraph(display, keyboard);

    return 0;
    delete r1;
}
