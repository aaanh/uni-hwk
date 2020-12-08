#include "Headers/Student.h"
#include "Headers/Staff.h"
#include "Headers/Student_Staff.h"

#include <iostream>
#include <string>
#include <array>

using namespace std;

void PressEnter() {
    cout << "Press [ENTER] to continue...";
    cin.get();
}

int main() {
    Student_Staff student_staff_list;

    cout << ">>> 1. Retrieve students: " << endl;
    student_staff_list.RetrieveStudents();
    PressEnter();
    cout << ">>> 2. Retrieve staff: " << endl;
    student_staff_list.RetrieveStaff();
    PressEnter();
    cout << ">>> 3. Highest GPA among students: " << endl;
    student_staff_list.HighestGPA(student_staff_list.GetStudents());
    PressEnter();
    cout << ">>> 4. Number of undergrads: " ;
    cout << student_staff_list.NumOfUndergrads(student_staff_list.GetStudents()) << endl;
    PressEnter();
    cout << ">>> 5. Same hired year among staff: " << endl;
    student_staff_list.SameHiredYear(student_staff_list.GetStaffs(), "2015");
    cout << "End of Student_Staff class demonstration." << endl;
    PressEnter();
    // cout << "-----------------------------------------" << endl;
    // int menu_choice;
    // cout << "Begin tester independent testing..." << endl;
    // cout << "Choose which class to test member methods: " << endl;
    // cout << "1. Student class" << endl;
    // cout << "2. Staff class" << endl;
    // cout << "3. Student_Class class" << endl;
    // cout << "> Your choice: ";
    // cin >> menu_choice;
    // TestMenu(menu_choice, student_staff_list);

}

// void StaffClassTester(Student_Staff student_staff_list) {
//     cout << "Now testing Staff class..." << endl;
//     vector<Staff> staff_list = student_staff_list.GetStaffs();
//     cout << "Loaded staff list from main driver." << endl;
//     int staff_selector;
//     do {
//         Staff selected_staff;
//         cout << "Select which staff (by ID) to perform tests: " << endl;
//         student_staff_list.RetrieveStaff();
//         cout << "> "; cin >> staff_selector;
//         if (staff_selector < 0) break;
        
//         for (auto s : staff_list) {
//             if (s.GetID() == staff_selector) selected_staff = s;
//         }

//         cout << "You selected: " << endl;
//         selected_staff.PrintStaffInfo();

//         int staff_method_selector;
//         do {
//             cout << "Select which method to test: " << endl;
//             cout << "1. GetID()" << endl;
//             cout << "2. GetHiredDate()" << endl;
//             cout << "3. GetBonusCode()" << endl;
//             cout << ""
//         } while (staff_method_selector > 0);
    
//     } while (staff_selector > 0);
// }

// void StudentClassTester(Student_Staff student_staff_list {

// }

// void StudentStaffClassTester(Student_Staff student_staff_list) {

// }

// void TestMenu(int menu_choice, Student_Staff student_staff_list) {
//     student_staff_list;

//     do {
//         switch(menu_choice) {
//             case 1: {
//                 StudentClassTester(student_staff_list);
//             }
//             case 2: {
//                 StaffClassTester(student_staff_list);
//             }
//             case 3: {
//                 StudentStaffClassTester(student_staff_list);
//             }
//         }
//     }
// }

