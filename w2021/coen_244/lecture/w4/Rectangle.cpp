#include "Rectangle.h"

int Rectangle::instantCount = 0;

Rectangle::Rectangle():AREA_SIZE(100) { // this is the member initialization method
    instantCount++;
}

Rectangle::Rectangle(const Point &pt1, const Point &pt2):AREA_SIZE(100),p1(pt1),p2(pt2) { // data member list initlization
    // this->p1 = pt1; // this method creates multiple new object which increases the instant count
    // this->p2 = pt2;
    instantCount++;
}

Rectangle clone(const Rectangle&other) {
    Rectangle clonedRectangle(other);
    return clonedRectangle;
}

Rectangle::Rectangle(const Rectangle&other):AREA_SIZE(other.AREA_SIZE), p1(other.pt1), p2(other.pt2) {
    // this->p1 = other.p1;
    // this->p2 = other.p2;
    instantCount++;
}