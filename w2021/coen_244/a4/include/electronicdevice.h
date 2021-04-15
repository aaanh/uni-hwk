#ifndef ELECTRONIC_DEVICE_H
#define ELECTRONIC_DEVICE_H

#include <string>
#include <iostream>

using namespace std;

class ElectronicDevice
{
    public:
        ElectronicDevice();
        ElectronicDevice(string brand, int serial, string color, double price);
        ElectronicDevice(const ElectronicDevice& ed);
        virtual ~ElectronicDevice();
        // getters
        string getBrand() const;
        int getSerialNumber() const;
        string getColor() const;
        double getPrice() const;
        //setters
        void setBrand(string brand);
        void setSerialNumber(int serial);
        void setColor(string color);
        void setPrice(double price);
        // printer
        virtual void print();
        
    private:
        string brand;
        int serial_number;
        string color;
        double price;
};

#endif