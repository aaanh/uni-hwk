#include "Headers/Student.h"
#include "Headers/Staff.h"
#include "Headers/Student_Staff.h"

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    Staff staff1("Rick", "Astley", "4389255426", "25/01/1999", 'B', 80000.0);
    staff1.PrintStaffInfo();
    Student stu1("Dick", "Cheney", "25/01/1999", 4.2, 12.3, 'B', 2020);
    stu1.PrintStudentInfo();

    Student_Staff student_staff_db;
}