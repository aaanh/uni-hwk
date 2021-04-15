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
        
    }
}
