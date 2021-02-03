#include "Rectangle.h"

int Rectangle::instantCount = 0;

Rectangle::Rectangle():AREA_SIZE(100) { // this is the member initialization method
    instantCount++;
}

Rectangle::Rectangle(const Point &pt1, const Point &pt2):AREA_SIZE(100) {
    this->p1 = pt1;
    this->p2 = pt2;
    instantCount++;
}

Rectangle clone(const Rectangle&other) {
}

Rectangle::Rectangle(const Rectangle&other):AREA_SIZE(other.AREA_SIZE) {

}