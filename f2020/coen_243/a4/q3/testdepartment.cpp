#include <iostream>
#include "department.h"

using namespace std;

int main() {
    // Create employee objects
    Employee emp1;
    Employee emp2;
    Employee emp3;
    Employee emp4;
    Employee emp5;

    emp1.EmployeeInit();
    emp2.EmployeeInit();
    emp3.EmployeeInit();
    emp4.EmployeeInit();
    emp5.EmployeeInit();

    // Create a new dept object
    Department dept;
    
    // Assign employees object to department object
    dept.AddMember(emp1);
    dept.AddMember(emp2);
    dept.AddMember(emp3);
    dept.AddMember(emp4);
    dept.AddMember(emp5);

    // Testing methods of dept
    cout << "\nTesting methods in dept..." << endl;
    
    cout << "> Part 1: Getters" << endl;
    cout << "Department ID      : " << dept.GetId() << endl;
    cout << "Department Name    : " << dept.GetName() << endl;
    cout << "Department History : " << dept.GetHistory() << endl;
    dept.PrintEmployeeCount();

    cout << "\n> Part 2: Setters" << endl;
    string new_name;
    string new_history;
    int ex_emp_id;
    int search_emp_id;
    
    cout << "Enter new department name: ";
    cin >> new_name;
    cin.ignore(256,'\n');
    dept.EditName(new_name);

    cout << "Enter new department history: ";
    cin >> new_history;
    cin.ignore(256,'\n');
    dept.EditHistory(new_history);
    
    dept.PrintEmployeeList();
    cout << "Enter employee ID for removal: ";
    cin >> ex_emp_id;
    dept.RemoveMember(ex_emp_id);

    cout << "---- New department details ----" << endl;
    cout << "Department name    : " << dept.GetName() << endl;
    cout << "Department ID      : " << dept.GetId() << endl;
    cout << "Department History : " << dept.GetHistory() << endl;
    cout << "------- New employee list ------- " << endl;
    dept.PrintEmployeeList();
    cout << "Enter employee id to search: ";
    cin >> search_emp_id;
    dept.SearchEmployee(search_emp_id) ? cout << "Employee exists in dept." << endl : cout << "Employee Not found" << endl;
    dept.PrintEmployeeCount();
    cout << "Program ends. Press enter to exit...";
    getchar();

    // dept.Debugger();
}