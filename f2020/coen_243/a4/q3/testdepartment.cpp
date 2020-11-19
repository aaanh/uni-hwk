#include <iostream>
#include "department.h"

using namespace std;

int main() {
    // Create 3 new employee objects
    Employee emp1;
    Employee emp2;
    Employee emp3;

    emp1.EmployeeInit();
    emp2.EmployeeInit();
    emp3.EmployeeInit();

    // Create a new dept object
    Department dept;
    
    dept.AddMember(emp1);
    dept.AddMember(emp2);
    dept.AddMember(emp3);
}