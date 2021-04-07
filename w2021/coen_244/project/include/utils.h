#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <filesystem>

namespace fs = std::filesystem;

// get platform name
std::string getOsName();

// patches data path with respect to host platform
std::string patchDataPath(); 


#endif