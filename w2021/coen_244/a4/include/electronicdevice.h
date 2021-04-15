#ifndef ELECTRONIC_DEVICE_H
#define ELECTRONIC_DECICE_H

#include <string>
#include <iostream>

using namespace std;

class ElectronicDevice
{
    public:
        ElectronicDevice();
        ElectronicDevice(string brand, int serial, string color, double price);
        ElectronicDevice(const ElectronicDevice& ed);
        ~ElectronicDevice();
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

    private:
        int core_count;
        bool touchscreen;
};

#endif