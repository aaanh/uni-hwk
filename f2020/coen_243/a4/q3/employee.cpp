#include <iostream>
#include "employee.h"
#include <string>

using namespace std;

int Employee::id_count = 0;

Employee::Employee() {
    ++id_count;
    this->id = this->id_count;
}

void Employee::EmployeeInit() {
    
    string f_name;
    string l_name;
    string dob;
    string address;
    int year_hired;
    double salary;
    Telephone tel;
    int area_code;
    string number;

    cout << "\nCreating new employee..." << endl;
    cout << "Employee #" << id << endl;

    cout << "Enter first name: " << endl;
    cout << "> ";
    cin >> f_name;
    Employee::EditFirstName(f_name);

    cout << "Enter last name: " << endl;
    cout << "> ";
    cin >> l_name;
    Employee::EditLastName(l_name);

    cout << "Enter date of birth: " << endl;
    cout << "> ";
    cin >> dob;
    Employee::EditDOB(dob);

    cout << "Enter hired year: " << endl;
    cout << "> ";
    cin >> year_hired;
    this->year_hired = year_hired;
    cin.ignore(256, '\n');

    cout << "Enter address: " << endl;
    cout << "> ";
    getline(cin, address);
    this->address = address;
    cin.ignore(256, '\n');
    
    cout << "Enter salary: " << endl;
    cout << "> ";
    cin >> salary;
    this->salary = salary;

    tel.TelephoneInit();

}

string Employee::GetFirstName() {
    return this->f_name;
}

void Employee::EditFirstName(string f_name) {
    this->f_name = f_name;
}

string Employee::GetLastName() {
    return this->l_name;
}

void Employee::EditLastName(string l_name) {
    this->l_name = l_name;
}

string Employee::GetFullName() {
    return (this->l_name + ", " + this->f_name);
}

void Employee::EditPhone(Telephone tel) {
    this->telephone.UpdateNumber();
}

string Employee::GetPhone() {
    return this->telephone.GetNumber();
}

int Employee::GetId() {
    return id;
}

string Employee::GetDOB() {
    return dob;
}

void Employee::EditDOB(string dob) {
    this->dob = dob;
}

double Employee::GetSalary() {
    return salary;
}

void Employee::EditSalary(double salary) {
    this->salary = salary;
}

string Employee::GetAddress() {
    return address;
}

void Employee::EditAddress(string address) {
    this->address = address;
}

int Employee::GetHiredYear() {
    return this->year_hired;
}

bool Employee::CompareLastName(Employee emp_target) {
    return (this->l_name.compare(emp_target.GetLastName()));
}

bool Employee::CompareSalaryHiredYear(Employee emp_target) {
    bool res;
    if (this->salary == emp_target.GetSalary() || this->year_hired == emp_target.GetHiredYear()) {
        res = true;
    } else res = false;
    return res;
}

Telephone::Telephone() {
    
}

void Telephone::TelephoneInit() {
    int ac = 0;
    string num;

    cout << "Enter area code: ";
    cin >> ac;
    cin.ignore(256, '\n');
    cout << "Enter number: ";
    getline(cin, num);
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

string Telephone::GetNumber() {
    return (to_string(this->area_code) + " " + this->number);
}
