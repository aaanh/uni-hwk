#include "Rectangle.h"
#include "Point.h"
#include <iostream>

using namespace std;

int main() {
    Point pt1(20,40), pt2(70,90);

    Rectangle r(pt1, pt2);

    cout << "Point instances count: " << Point::getInstantCount() << endl;
    cout << "Rectange instances count: " << Rectangle::getInstantCount() << endl;
}