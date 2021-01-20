#include <iostream>
#include <string>

#pragma once

using namespace std;

class Event {
    public:
        Event();

    private:
        string description;
        long id;
};