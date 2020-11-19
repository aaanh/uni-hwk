#include <iostream>
#include "department.h"

using namespace std;

int main() {
    // Create 3 new employee objects
    Employee emp1;
    Employee emp2;
    // Employee emp3;

    emp1.EmployeeInit();
    emp2.EmployeeInit();
    // emp3.EmployeeInit();

    // Create a new dept object
    Department dept;
    cout << "Add emp1 as new member" << endl;
    dept.AddMember(emp1);
    dept.AddMember(emp2);
    cout << "added" << endl;
    cout << "Emp1's first name: " << dept.GetMember(0).GetFirstName() << endl;
    cout << "Emp2's first name: " << dept.GetMember(1).GetFirstName() << endl;
}