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

std::string getCurrentPath()
{
    std::string local_path = fs::current_path().string();
    return local_path;
}

std::string patchDataPath()
{
    
    std::string patched;
    if (getOsName() == "Windows 64-bit" || getOsName() == "Windows 32-bit")
    {
        patched = getCurrentPath().substr(0, (getCurrentPath().length() - 4)) + "\\data\\cleaned\\";
    }
    else
    {
        patched = getCurrentPath().substr(0, (getCurrentPath().length() - 4)) + "/data/cleaned/";
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

void openFiles(std::string path, std::ifstream &data)
{
    try {
        if ((getOsName() == "Windows 64-bit") + (getOsName() == "Windows 32-bit")) 
        {
            data.open(path + "\\\\cleaned\\\\entity.csv");
        } else if ((getOsName() == "macOS") || getOsName() == "Linux")
        {
            data.open(path + "/entity.csv");
        }

        if (!(data.is_open()))
        {
            throw "Failed to open database. Check path.\n";
        } else {
            std::cout << "Database opened successfully.\n";
        }
    }
    catch (std::string e)
    {
        std::cout << "An exception has occurred: " << e << std::endl;
    }
}