#pragma once

#include "Point.h"

class Rectangle {
    public:
        Rectangle();
        Rectangle(const Point&, const Point&);
        Rectangle(const Rectangle &other);

        virtual ~Rectangle();

        static int getInstantCount();
        friend Rectangle clone(const Rectangle&);

    private:
        Point p1;
        Point p2;
        const double AREA_SIZE; // this const needs to be initialized first
        static int instantCount;
};