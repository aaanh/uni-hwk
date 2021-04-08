#include <filesystem>
#include <string>

#include "utils.h"

std::string getOsName()
{
    #ifdef _WIN32 
    return "Windows 32-bit";
    #elif _WIN64 
    return "Windows 64-bit";
    #elif (__APPLE__ || __MACH__)
    return "macOS";
    #elif __linux__
    return "Linux";
    #elif __FreeBSD__
    return "FreeBSD";
    #elif __unix || __unix__
    return "Unix";
    #else
    return "Other";
    #endif
}

std::string patchDataPath(std::string path)
{
    std::string local_path = fs::current_path().string();
    std::string patched;
    if (getOsName() == "Windows 64-bit" || getOsName() == "Windows 32-bit")
    {
        patched = path.substr(0, (local_path.length() - 4)) + "\\data\\";
    }
    else
    {
        patched = path.substr(0, (local_path.length() - 4)) + "/data/";
    }
    return patched;
}

void indexDirectory(std::string path)
{
    int file_count = 0;
    for (const auto &entry : fs::directory_iterator(path)) ++file_count;
        std::cout << "Found " << file_count << ": \n";
    for (const auto &entry : fs::directory_iterator(path)) 
        std::cout << "> " << entry.path() << "\n";
}