#include <iostream>
#include "point.h"

int main() 
{
    Point p1 (1.0, 1.0), p2(2.0, 2.0);
    p1.translate (1.0, 0.0);
    p2.rotate (90);
    std::cout <<distBetween (p1, p2)<< "\n"; 
}
