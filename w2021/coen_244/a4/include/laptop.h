#ifndef LAPTOP_H
#define LAPTOP_H

#include "electronicdevice.h"

class Laptop : public ElectronicDevice
{
    public:
        Laptop();
        Laptop(string brand, int serial, string color, double price, int core_count, bool touchscreen);
        Laptop(const Laptop& l);
        virtual ~Laptop();
        // getters
        int getCoreCount() const;
        bool getTouchscreen() const;
        // setters
        void setCoreCount(int);
        void setTouchscreen(bool);
        // printer
        void printLaptop();
        // get type
        string getType() { return "laptop"; };

    private:
        int core_count;
        bool touchscreen;
};


#endif