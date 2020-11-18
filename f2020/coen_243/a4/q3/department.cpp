#include <iostream>
#include <string>
#include "department.h"
#include <cstring>

using namespace std;

Department::Department() {
    string new_name;
    string new_id;
    string new_history;
    
    cout << "Enter department name: ";
    getline(cin, new_name);
    cout << "Enter department ID: ";
    getline(cin, new_id);
    cout << "Enter department history: ";
    getline(cin, new_history);

    Department::EditName(new_name);
    Department::EditId(new_id);
    Department::EditHistory(new_history);

    cout << "Department has been created." << endl;
    cout << "----------------------------" << endl;
    cout << "Department Name    : " << Department::GetName() << endl;
    cout << "Department ID      : " << Department::GetId() << endl;
    cout << "Department History : " << Department::GetHistory() << endl;
}

string Department::GetId() {
    return this->id;
}

void Department::EditId(string new_id) {
    this->id = new_id;
}

string Department::GetName() {
    return this->name;
}

void Department::EditName(string new_name) {
    this->name = new_name;
}

string Department::GetHistory() {
    return this->history;
}

void Department::EditHistory(string new_history) {
    this->history = new_history;
}

void Department::AddMember(Employee new_emp) {
    Employee emps[25];
}

// void Department::RemoveMember(int ex_emp) {

// }

// bool Department::SearchEmployee(int id) {

// }

// void Department::PrintEmployeeList() {

// }

// void Department::PrintEmployeeCount() {

// }