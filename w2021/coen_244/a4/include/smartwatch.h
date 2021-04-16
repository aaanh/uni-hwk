#ifndef SMARTWATCH_H
#define SMARTWATCH_H

#include "electronicdevice.h"

class Smartwatch : public ElectronicDevice
{
    public:
        Smartwatch();
        Smartwatch(string brand, int serial, string color, double price, int battery_life);
        Smartwatch(const Smartwatch& s);
        virtual ~Smartwatch();
        // getters
        int getBatteryLife() const;
        // setters
        void setBatteryLife(int);
        // printer
        void printSmartwatch();

    private:
        int battery_life;
};

#endif