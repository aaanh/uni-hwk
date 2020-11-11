#include <iostream>
#include "employee.h"

using namespace std;

void Telephone::setAreaCode(int ac) {
    this->area_code = ac;
}

void Telephone::setNumber(string num) {
    this->number = num;
}

void Employee::printId() {
    cout << "Employee ID: " << id << endl;
}

void Employee::printFirstName(string f_name) {
    cout << "First name: " << f_name << endl;
}

void Employee::editFirstName() {

}

void Employee::printLastName(string l_name) {
    cout << "Last name: " << l_name << endl;
}

void Employee::editLastName() {

}