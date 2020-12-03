#include "Headers/Student_Staff.h"

using namespace std;
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
    if (getOsName() == "Windows 64-bit" || getOsName() == "Windows 32-bit") {
        sCorrectedDataPath = sDataPath.substr(0, (iLengthDataPath - 4)) + "\\Data\\";
    } else if (getOsName() == "Mac OSX") {
        sCorrectedDataPath = sDataPath.substr(0, (iLengthDataPath - 4)) + "/Data/";
    }
    
    int iFileCount = 0;

    cout << "Looking for database files in \"./Data\" folder..." << endl;
    for (const auto &entry : fs::directory_iterator(sCorrectedDataPath)) ++iFileCount;
    cout << "Found " << iFileCount << " files: " << endl;
    for (const auto &entry : fs::directory_iterator(sCorrectedDataPath)) cout << "> " << entry.path() << endl;

    cout << "Opening found files..." << endl;
    
    try {
        if (getOsName() == "Windows 64-bit" || getOsName() == "Windows 32-bit") {
            ifStudentsFile.open(sCorrectedDataPath + "\\\\students.csv");
            ifStaffsFile.open(sCorrectedDataPath + "\\\\staff.csv");
        } else if (getOsName() == "Mac OSX") {
            ifStudentsFile.open(sCorrectedDataPath + "/students.csv");
            ifStaffsFile.open(sCorrectedDataPath + "/staff.csv");
        }
        
        if (!(ifStudentsFile.is_open() && ifStaffsFile.is_open())) {
            throw "Failed to open files.";
        } else {
            cout << "Files opened successfully." << endl;
        }

    } catch (string e) {
        // cout << "An exception occurred. " << e << endl;
    }

    cout << "Parsing files..." << endl;

    try {
        // Students data
        {
            string line;
            string f_name, l_name, dob, temp_program, temp_gpa, temp_credits, temp_start_year;
            double gpa, credits;
            char program;
            int start_year;
            while(getline(ifStudentsFile, line)) {
                stringstream ss(line);
                getline(ss, f_name, ',');
                getline(ss, l_name, ',');
                getline(ss, dob, ',');
                getline(ss, temp_gpa, ',');
                getline(ss, temp_credits, ',');
                getline(ss, temp_program, ',');
                getline(ss, temp_start_year, ',');

                // type conversion for non-string data
                gpa = stod(temp_gpa);
                credits = stod(temp_credits);
                program = temp_program[0];
                start_year = stoi(temp_start_year);
                // declare temp self-destructible student object
                Student new_student(f_name, l_name, dob, gpa, credits, program, start_year);
                // add new student to vector
                this->students.push_back(new_student);
            
            }
        }

        // Staff data
        // {
        //     string line;
        //     string f_name, l_name, dob, 
        // }

        cout << "File parsed successfully" << endl;
        // throw "File parse error. Please check data format and syntax.";
        // throw 69;

    } catch (string e) {
        // cout << "Exception occurred. " << e << endl;
    }
}

void Student_Staff::RetrieveStudents() {
    cout << "\n> Retrieved students:" << endl;
    for (Student s : this->students) {
        s.PrintStudentInfo();
    }
}

void Student_Staff::InternalDebugger() {
    this->students[0].PrintStudentInfo();
    this->students[0].PrintStudentInfo();
}