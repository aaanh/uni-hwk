#include "electronicdevice.h"

Laptop::Laptop()
{

}

Laptop::Laptop(const Laptop& l)
{
    this->setBrand(l.getBrand());
    this->setSerialNumber(l.getSerialNumber());
    this->setColor(l.getColor());
    this->setPrice(l.getPrice());

    this->setCoreCount(l.getCoreCount());
    this->setTouchscreen(l.getTouchscreen());
}

Laptop::Laptop(string brand, 
                int serial, 
                string color, 
                double price, 
                int core_count=0, 
                bool touchscreen=false)
                : ElectronicDevice(brand, serial, color, price)
{
    this->setCoreCount(core_count);
    this->setTouchscreen(touchscreen);
}

Laptop::~Laptop()
{

}

int Laptop::getCoreCount() const
{
    return core_count;
}

bool Laptop::getTouchscreen() const
{
    return touchscreen;
}

void  Laptop::setCoreCount(int cores)
{
    this->core_count = cores;
}

void Laptop::setTouchscreen(bool touch)
{
    this->touchscreen = touch;
}

void Laptop::printLaptop()
{
    cout << "\nLaptop #" << getSerialNumber() << "\n";
    cout << "brand,color,price,core_count,touchscreen\n";
    cout << getBrand() << "," << getColor() << "," << getPrice() << "," << getCoreCount() << "," << getTouchscreen() << "\n";
}