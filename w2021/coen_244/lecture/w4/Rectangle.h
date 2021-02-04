#pragma once

#include "Point.h"

class Rectangle {
    public:
        Rectangle();
        Rectangle(const Point&, const Point&);
        Rectangle(const Rectangle &other);

        virtual ~Rectangle();

        static int getInstantCount();
        // clone is not a member function, defined outside of the class, but since it's declared as friend, it's able to access those members in the private space
        friend Rectangle clone(const Rectangle&); // grants another function or class access to private data members

    private:
        Point p1;
        Point p2;
        const double AREA_SIZE; // this const needs to be initialized first
        static int instantCount;
};