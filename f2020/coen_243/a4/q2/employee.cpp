#include <iostream>
#include "employee.h"
#include <string>

using namespace std;

Telephone::Telephone() {
    int ac = 0;
    string num{"null"};

    Telephone::setAreaCode(ac);
    Telephone::setNumber(num);
}

void Telephone::setAreaCode(int ac) {
    this->area_code = ac;
}

void Telephone::setNumber(string num) {
    this->number = num;
}

void Telephone::updateNumber() {
    int ac;
    string num;
    
    cout << "Phone area code: ";
    cin >> ac;
    cin.ignore(256, '\n');
    this->setAreaCode(ac);

    cout << "Phone number: ";
    getline(cin, num);
    this->setNumber(num);
}

void Telephone::printNumber() {
    cout << "+" << this->area_code << " " << this->number << endl;
}

Employee::Employee() {
    int id;
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
    Employee::editFirstName(f_name);
    cout << "Employee's last name: " << endl;
    cout << "> ";
    cin >> l_name;
    Employee::editLastName(l_name);
    Employee::editPhone(tel);
    cout << "Employee's ID: " << endl;
    cout << "> ";
    cin >> id;
    Employee::setId(id);
}

void Employee::printId() {
    cout << "- Employee ID: " << id << endl;
}

void Employee::printFirstName(string f_name) {
    cout << "- First name: " << f_name << endl;
}

void Employee::editFirstName(string f_name) {
    this->f_name = f_name;
}

void Employee::printLastName(string l_name) {
    cout << "- Last name: " << l_name << endl;
}

void Employee::editLastName(string l_name) {
    this->l_name = l_name;
}

void Employee::printFullName() {
    cout << "- Employee's full name: " << this->l_name << ", " << this->f_name << endl;
}

void Employee::setId(int id) {
    cout << "Employee's ID: ";
    this->id = id;
}

void Employee::editPhone(Telephone tel) {
    this->telephone.updateNumber();
}

void Employee::printPhone() {
    cout << "Employee's number: ";
    this->telephone.printNumber();
}