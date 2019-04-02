#include "point.h"
#include <cmath>
#include <iostream>
#define PI 3.1415926535897


using namespace std;
Point::Point(double x, double y)
{
    this->x=x;
    this->y=y;
}
void Point::show() const
{
    cout << "(" << this->x << ", " << this->y << ") ";
}

void Point::translate(double x, double y)
{
    this->x = this->x + x;//+=
    this->y = this->y + y;
}

void Point::rotate(double angle) 
{
    double rad = angle*PI/180.0;
    double x0 = this->x;
    double y0 = this->y;
    this->x = (x0)*cos(rad) - (y0)*sin(rad);
    this->y = (x0)*sin(rad) + (y0)*cos(rad);
}

double distBetween (const Point &p1, const Point &p2)
{
    double S = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return S;
}
