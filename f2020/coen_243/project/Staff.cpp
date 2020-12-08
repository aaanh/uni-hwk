#include "Headers/Staff.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int Staff::id_count = 0;

// Getter implementations

Staff::Staff() {
    ++id_count;
}

Staff::Staff(string f_name, string l_name, string phone, string hired_date, char bonus_code, double cur_salary) {
    ++id_count;
    this->f_name = f_name;
    this->l_name = l_name;
    this->phone_number = phone;
    this->hired_date = hired_date;
    this->bonus_code = bonus_code;
    this->current_salary = cur_salary;
    this->id = id_count;
    
}

string Staff::GetFirstName() {
    return this->f_name;
}

string Staff::GetLastName() {
    return this->l_name;
}

int Staff::GetID() {
    return this->id;
}

string Staff::GetHiredDate() {
    return this->hired_date;
}

char Staff::GetBonusCode() {
    return this->bonus_code;
}

double Staff::GetCurrentSalary() {
    return this->current_salary;
}

string Staff::GetPhone() {
    return this->phone_number;
}

// Setter implementations

void Staff::SetFirstName(string new_f_name) {
    this->f_name = new_f_name;
}

void Staff::SetLastName(string new_l_name) {
    this->l_name = new_l_name;
}

void Staff::SetID(int id) {
    this->id = id;
}

void Staff::SetHiredDate(string hired_date) {
    this->hired_date = hired_date;
}

void Staff::SetBonusCode(char b_code) {
    this->bonus_code = b_code;
}

void Staff::SetSalary(double salary) {
    this->current_salary = salary;
}

void Staff::SetPhone(string new_phone) {
    this->phone_number = new_phone;
}

// Additional methods

void Staff::PrintStaffInfo() {
    cout << "Staff ID: " << this->GetID() << endl;
    cout << "Name: " << this->GetLastName() << ", " << this->GetFirstName() << endl;
    cout << "Hired date: " << this->GetHiredDate() << endl;
    cout << "Bonus code: " << this->GetBonusCode() << endl;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "Salary: $" << this->GetCurrentSalary() << endl;
    cout << "Phone number: " << this->GetPhone() << endl;
    cout << "----------------" << endl;
}

double Staff::CalculateSalary() {
    char bonus_code = this->GetBonusCode();
    double current_salary = this->GetCurrentSalary();
    double new_salary;
    
    if (bonus_code == 'A' || bonus_code == 'a') {
        new_salary = current_salary + current_salary*0.08;
    }
    else if (bonus_code == 'B' || bonus_code == 'b') {
        new_salary = current_salary + current_salary*0.06;
    }
    else if (bonus_code == 'C' || bonus_code == 'c') {
        new_salary = current_salary + current_salary*0.04;
    }
    else if (bonus_code == 'D' || bonus_code == 'd') {
        new_salary = current_salary + current_salary*0.02;
    }
    else if (bonus_code == 'E' || bonus_code == 'e') {
        new_salary = current_salary;
    } else {
        cout << "Invalid bonus code. Salary unchanged" << endl;
        new_salary = current_salary;
    }
    
    return new_salary;
}

// string Staff::CompareExp(Staff staff_to_compare) {
    
// }