#include "Headers/Student.h"
#include "Headers/Staff.h"
#include "Headers/Student_Staff.h"

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    Student_Staff student_staff_list;

    cout << ">>> 1. Retrieve students: " << endl;
    student_staff_list.RetrieveStudents();
    cout << ">>> 2. Retrieve staff: " << endl;
    student_staff_list.RetrieveStaff();
    cout << ">>> 3. Highest GPA among students: " << endl;
    student_staff_list.HighestGPA(student_staff_list.GetStudents());
    cout << ">>> 4. Number of undergrads: " ;
    cout << student_staff_list.NumOfUndergrads(student_staff_list.GetStudents()) << endl;
    cout << ">>> 5. Same hired year among staff: " << endl;
    student_staff_list.SameHiredYear(student_staff_list.GetStaffs(), "2015");
    cout << "End of functionality demonstration." << endl;
}