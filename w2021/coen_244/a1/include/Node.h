#include <iostream>
#include "Event.h"

#pragma once

using namespace std;

class Node {
    public:
        // constructor and overloaded
        Node();
        Node(short id, Event value);

        // accessing methods for data member value
        void setValue(Event e);
        Event getValue();

        // accessing methods for data member id
        void setData(short id);
        short getId();

        // Returning a new node object, same value, new id
        Node clone();

    private:
        short id;
        Event value;
};