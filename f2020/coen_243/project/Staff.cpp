#include "Headers/Staff.h"

#include <string>
#include <iostream>

using namespace std;

int Staff::id_count = 0;

// Getter implementations

Staff::Staff() {
    ++id_count;
}

Staff::Staff(string f_name, string l_name, string phone, string hired_date, string bonus_code, string cur_salary) {
    ++id_count;
    this->SetFirstName(f_name);
    this->SetLastName(l_name);
    this->SetID(id_count);
    this->SetPhone(phone);
    this->SetHiredDate(hired_date);
    this->SetBonusCode(bonus_code);
    this->SetSalary(cur_salary);
    
}

string Staff::GetFirstName() {
    return this->f_name;
}

string Staff::GetLastName() {
    return this->f_name;
}

int Staff::GetID() {
    return this->id;
}

string Staff::GetHiredDate() {
    return this->hired_date;
}

string Staff::GetBonusCode() {
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
    cout << "----------------" << endl;
    cout << "Staff ID: " << this->GetID() << endl;
    cout << "Name: " << this->GetLastName() << ", " << this->GetFirstName() << endl;
    cout << "Hired date: " << this->GetHiredDate() << endl;
    cout << "Bonus code: " << this->GetBonusCode() << endl;
    cout << "Salary: " << this->GetCurrentSalary() << endl;
    cout << "Phone number: " << this->GetPhone() << endl;
    cout << "----------------" << endl;
}

double Staff::CalculateSalary() {
    string bonus_code = this->GetBonusCode();
    double current_salary = this->GetCurrentSalary();
    double new_salary;
    switch(bonus_code) {
        case 'A':
        case 'a':
        {
            new_salary = current_salary + current_salary*0.08;
        }
        case 'B':
        case 'b':
        {
            new_salary = current_salary + current_salary*0.06;
        }
        case 'C':
        case 'c':
        {
            new_salary = current_salary + current_salary*0.03;
        }
        case 'D':
        case 'd':
        {
            new_salary = current_salary + current_salary*0.01;
        }
        case 'E':
        case 'e':
        {
            new_salary = current_salary;
        }
        default:
        {
            cout << "Invalid bonus code" << endl;
            cout << "Salary unchanged" << endl;
            return current_salary;
        }
    }
    return new_salary;
}

// string Staff::CompareExp(Staff staff_to_compare) {
    
// }