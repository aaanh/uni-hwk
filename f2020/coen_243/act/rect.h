#ifndef RECT_H
#define RECT_H

#include <iostream>

using namespace std;

class Rect {
    private:
        int x;
        int y;

    public:
        Rect();
        double GetArea();
        double GetParameter();
        void GetRectInfo();
};

#endif