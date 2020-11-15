#include <iostream>
#include "employee.h"
#include <string>

using namespace std;

Telephone::Telephone() {
    int ac = 0;
    string num{"null"};

    Telephone::SetAreaCode(ac);
    Telephone::SetNumber(num);
}

void Telephone::SetAreaCode(int ac) {
    this->area_code = ac;
}

void Telephone::SetNumber(string num) {
    this->number = num;
}

void Telephone::UpdateNumber() {
    int ac;
    string num;
    
    cout << "Phone area code: ";
    cin >> ac;
    cin.ignore(256, '\n');
    this->SetAreaCode(ac);

    cout << "Phone number: ";
    getline(cin, num);
    this->SetNumber(num);
}

void Telephone::PrintNumber() {
    cout << "+" << this->area_code << " " << this->number << endl;
}

int Employee::id_count = 0;

Employee::Employee() {
    string f_name;
    string l_name;
    string dob;
    string address;
    int year_hired;
    double salary;
    Telephone tel;

    cout << "Creating new employee..." << endl;
    cout << "Employee's first name: " << endl;
    cout << "> ";
    cin >> f_name;
    Employee::EditFirstName(f_name);
    cout << "Employee's last name: " << endl;
    cout << "> ";
    cin >> l_name;
    Employee::EditLastName(l_name);
    Employee::EditPhone(tel);
    
    ++id_count;
    this->id = this->id_count;
}

void Employee::PrintFirstName(string f_name) {
    cout << "- First name: " << f_name << endl;
}

void Employee::EditFirstName(string f_name) {
    this->f_name = f_name;
}

void Employee::PrintLastName(string l_name) {
    cout << "- Last name: " << l_name << endl;
}

void Employee::EditLastName(string l_name) {
    this->l_name = l_name;
}

void Employee::PrintFullName() {
    cout << "- Employee's full name: " << this->l_name << ", " << this->f_name << endl;
}

void Employee::EditPhone(Telephone tel) {
    this->telephone.UpdateNumber();
}

void Employee::PrintPhone() {
    cout << "Employee's number: ";
    this->telephone.PrintNumber();
}

void Employee::SetId() {
    
}

void Employee::GetId() {
    cout << "Employee's ID: " << id << endl;
}