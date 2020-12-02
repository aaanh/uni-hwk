#include "Headers/Student_Staff.h"

namespace fs = std::filesystem;

// Student_Staff::Student_Staff() {
    
// }

Student_Staff::Student_Staff() {
    string sStudentsFilePath;
    string sStaffsFilePath;
    string sDataPath = fs::current_path().string();
    int iLengthDataPath = sDataPath.length();
    string sCorrectedDataPath = sDataPath.substr(0, (iLengthDataPath - 4)) + "\\Data\\";
    int iFileCount = 0;

    cout << "Looking for database files in \"./Data\" folder..." << endl;
    for (const auto &entry : fs::directory_iterator(sCorrectedDataPath)) ++iFileCount;
    cout << "Found " << iFileCount << " files: " << endl;
    for (const auto &entry : fs::directory_iterator(sCorrectedDataPath)) cout << "> " << entry.path() << endl;
}