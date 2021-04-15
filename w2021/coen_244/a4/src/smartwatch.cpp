#include "smartwatch.h"

Smartwatch::Smartwatch()
{

}

Smartwatch::Smartwatch(const Smartwatch& s)
{
    this->setBrand(s.getBrand());
    this->setSerialNumber(s.getSerialNumber());
    this->setColor(s.getColor());
    this->setPrice(s.getPrice());
}

Smartwatch::Smartwatch(string brand,
                        int serial,
                        string color,
                        double price,
                        int battery_life=0)
                        : ElectronicDevice(brand, serial, color, price)
{
    this->setBatteryLife(battery_life);
}

Smartwatch::~Smartwatch()
{

}

int Smartwatch::getBatteryLife() const
{
    return battery_life;
}

void Smartwatch::setBatteryLife(int hours)
{
    this->battery_life = hours;
}

void Smartwatch::printSmartwatch()
{
    cout << "\nSmartwatch #" << getSerialNumber() << "\n";
    cout << "brand,color,price,battery_life\n";
    cout << getBrand() << "," << getColor() << "," << getPrice() << "," << getBatteryLife() << "\n";
}