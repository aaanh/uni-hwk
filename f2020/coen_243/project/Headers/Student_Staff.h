#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <array>
#include <vector>
#include "Student.h"
#include "Staff.h"
#include <string>
#include <filesystem>

using namespace std;

class Student_Staff {
    private:
        vector<Student> students;
        vector<Staff> staffs;

    public:
        Student_Staff();
        // Student_Staff(fstream ifStudents, fstream ifStaffs);
        void RetrieveStudents();
        void RetrieveStaff();

        vector<Student> GetStudents();
        vector<Staff> GetStaffs();

        void InternalDebugger();
        void HighestGPA(vector<Student> students);
        int NumOfUndergrads(vector<Student> students);
        void SameHiredYear(vector<Staff> staff, string hired_year);
};