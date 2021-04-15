#ifndef DEVICE_UTILS_H
#define DEVICE_UTILS_H

#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <iostream>

#include "electronicdevice.h"

using namespace std;

void WriteDeviceDatabase(vector<ElectronicDevice*> devices);

#endif
