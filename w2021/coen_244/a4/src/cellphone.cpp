#include "cellphone.h"

Cellphone::Cellphone()
{

}

Cellphone::Cellphone(const Cellphone& c)
{
    this->setBrand(c.getBrand());
    this->setSerialNumber(c.getSerialNumber());
    this->setColor(c.getColor());
    this->setPrice(c.getPrice());

    this->setNumberOfCameras(c.getNumberOfCameras());
}

Cellphone::Cellphone(string brand, 
                        int serial, 
                        string color, 
                        double price, 
                        int num_of_cameras=0) 
                    : ElectronicDevice(brand, serial, color, price)
{
    this->setNumberOfCameras(num_of_cameras);
}

Cellphone::~Cellphone()
{

}

int Cellphone::getNumberOfCameras() const
{
    return this->num_of_cameras;
}

void Cellphone::setNumberOfCameras(int num_of_cameras)
{
    this->num_of_cameras = num_of_cameras;
}

void Cellphone::printCellphone()
{
    cout << "\nCellphone #" << getSerialNumber() << "\n";
    cout << "brand,color,price,num_of_cameras\n";
    cout << getBrand() << "," << getColor() << "," << getPrice() << "," << getNumberOfCameras() << "\n";
}

