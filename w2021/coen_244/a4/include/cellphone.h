#ifndef CELLPHONE_H
#define CELLPHONE_H

#include "electronicdevice.h"

class Cellphone : public ElectronicDevice
{
    public:
        Cellphone();
        Cellphone(string brand, int serial, string color, double price, int num_of_cameras);
        Cellphone(const Cellphone& c);
        virtual ~Cellphone();
        // getters
        int getNumberOfCameras() const;
        // setters
        void setNumberOfCameras(int);
        // printer
        void printCellphone();

    private:
        int num_of_cameras;
};


#endif