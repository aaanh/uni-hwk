#include <iostream>
#include <string>
#include "department.h"
#include <cstring>

using namespace std;

Department::Department() {
    string new_name;
    string new_id;
    string new_history;
    
    cout << "\n------------\n Creating new department..." << endl;

    cout << "Enter department name: ";
    cin >> new_name;
    cin.ignore(256, '\n');
    Department::EditName(new_name);

    cout << "Enter department ID: ";
    cin >> new_id;
    cin.ignore(256, '\n');
    Department::EditId(new_id);
    
    cout << "Enter department history: ";
    cin >> new_history;
    cin.ignore(256, '\n');
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

void Department::AddMember(Employee emp) {
    for (size_t i = 0; i <= sizeof(emps); i++) {
        if (emps[i].GetFirstName() == "") {
            emps[i] = emp;
            break;
        }
    }
}

Employee Department::GetMember(int i) {
    return this->emps[i];
}

// void Department::RemoveMember(int ex_emp) {

// }

// bool Department::SearchEmployee(int id) {

// }

void Department::PrintEmployeeList() {
    cout << "PrintEmployeeList() return: ";
    cout << ("" == this->emps[0].GetFirstName()) << endl;
}

// void Department::PrintEmployeeCount() {

// }