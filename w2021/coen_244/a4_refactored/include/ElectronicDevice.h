#ifndef ELECTRONIC_DEVICE_H
#define ELECTRONIC_DECICE_H

#include <string>

using namespace std;

class ElectronicDevice
{
    public:
        ElectronicDevice();
        ~ElectronicDevice();

        // getters
        string getBrand() const;
        int getSerialNumber() const;
        string getColor() const;
        double getPrice() const;
        //setters
        void setBrand();
        void setSerialNumber();
        void setColor();
        void setPrice();

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
        ~Cellphone();

        // getters
        int getNumberOfCameras() const;
        // setters
        void setNumberOfCameras();

    private:
        int num_of_cameras;
};

class Smartwatch : public ElectronicDevice
{
    public:
        // getters
        int getBatteryLife() const;
        // setters
        void setBatteryLife();

    private:
        int battery_life;
};

class Laptop : public ElectronicDevice
{
    public:
        // getters
        int getCoreCount() const;
        bool getTouchscreen() const;
        // setters
        void setCoreCount();
        void setTouchscreen();

    private:
        int core_count;
        bool touchscreen;
};

#endif