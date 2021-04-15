#include "electronicdevice.h"

ElectronicDevice::ElectronicDevice() 
{
    
}

ElectronicDevice::ElectronicDevice(const ElectronicDevice& ed)
{
    this->setBrand(ed.getBrand());
    this->setSerialNumber(ed.getSerialNumber());
    this->setColor(ed.getColor());
    this->setPrice(ed.getPrice());
}

ElectronicDevice::~ElectronicDevice() 
{
    
}

string ElectronicDevice::getBrand() const
{
    return brand;
}

int ElectronicDevice::getSerialNumber() const
{
    return serial_number;
}

string ElectronicDevice::getColor() const
{
    return color;
}

double ElectronicDevice::getPrice() const
{
    return price;
}

void ElectronicDevice::setBrand(string brand) 
{
    this->brand = brand;
}

void ElectronicDevice::setSerialNumber(int serial) 
{
    this->serial_number = serial;
}

void ElectronicDevice::setColor(string color) 
{
    this->color = color;
}

void ElectronicDevice::setPrice(double price) 
{
    this->price = price;
}

void ElectronicDevice::print() 
{

}
