#include "device_utils.h"

void WriteDeviceDatabase(vector<ElectronicDevice*> devices) 
{
    ofstream data("./db/information.csv");
    
    if (!data.is_open())
    {
        system("touch ./db/information.csv");
        ofstream data("./db/information.csv");
    }

    for (auto d : devices)
    {
        cout << d->getType() << "\n";
        cout << d->getBrand() << "\n";
        cout << d->getColor() << "\n";
        cout << d->getSerialNumber() << "\n";
        cout << d->getPrice() << "\n\n";
        // data << d->getType() << "," << d->getBrand() << "," << d->getSerialNumber() << "," << d->getColor() << "," << d->getPrice() << "," << "\n";
    }
    data.close();
    cout << "File written successfully.\n";
}
