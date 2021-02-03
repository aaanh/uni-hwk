#pragma once

class Point {
    public:
        Point();
        Point(double, double);
        Point(const Point &other); // copy constructor
        
        virtual ~Point();
        
        Point& operator = (const Point &other);
        static int getInstantCount();
        friend Point clone(const Point&);

    private:
        static int instantCount;

};