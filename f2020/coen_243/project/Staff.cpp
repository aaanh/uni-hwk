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

// Setter implementations

void Staff::SetFirstName(string new_f_name) {
    this->f_name = new_f_name;
}