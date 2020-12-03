#include "Headers/Student_Staff.h"

namespace fs = std::filesystem;

// Get working platform name
std::string getOsName()
{
    #ifdef _WIN32
    return "Windows 32-bit";
    #elif _WIN64
    return "Windows 64-bit";
    #elif (__APPLE__ || __MACH__)
    return "Mac OSX";
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

// Student_Staff::Student_Staff() {
    
// }

Student_Staff::Student_Staff() {
    ifstream ifStudentsFile;
    ifstream ifStaffsFile;
    string sDataPath = fs::current_path().string();
    int iLengthDataPath = sDataPath.length();
    string sCorrectedDataPath;

    // Data folder path according to platform
    if (getOsName() == "Windows 64-bit") sCorrectedDataPath = sDataPath.substr(0, (iLengthDataPath - 4)) + "\\Data\\";
    else if (getOsName() == "Mac OSX") sCorrectedDataPath = sDataPath.substr(0, (iLengthDataPath - 4)) + "/Data/";
    
    int iFileCount = 0;

    cout << "Looking for database files in \"./Data\" folder..." << endl;
    for (const auto &entry : fs::directory_iterator(sCorrectedDataPath)) ++iFileCount;
    cout << "Found " << iFileCount << " files: " << endl;
    for (const auto &entry : fs::directory_iterator(sCorrectedDataPath)) cout << "> " << entry.path() << endl;
}