#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <array>
#include <vector>
#include "Student.h"
#include "Staff.h"

using namespace std;

class Student_Staff {
    private:
        vector<Student::Student> students;
        vector<Staff::Staff> staffs;
    public:
        void RetrieveStudents();
        void RetrieveStaff();
};