#include "Headers/Student.h"

#include <iostream>
#include <string>
#include <array>

using namespace std;

static int id_count;

Student::Student() {
    this->id = id_count;
    id_count++;
}

Student::Student(string f_name, string l_name, string dob, double gpa, double credit, char program) {
    this->f_name = f_name;
    this->l_name = l_name;
    this->dob = dob;
    this->gpa = gpa;
    this->credit = credit;
    this->program = program;
}

// Getter implementations
string Student::GetLastName() {
    return this->l_name;
}

string Student::GetFirstName() {
    return this->f_name;
}

int Student::GetId() {
    return this->id;
}

string Student::GetDOB() {

}

string Student::GetGPA() {
    
}

double Student::GetCredit() {

}

char Student::GetProgram() {

}

// Setter Implementations

void Student::SetLastName(string new_l_name) {
    
}

void Student::SetFirstName(string new_f_name) {

}

void Student::SetId(int new_id) {
    
}

void Student::SetDOB(string new_dob) {

}

void Student::SetGPA(double new_gpa) {
    
}

void Student::SetCredit(double new_credit) {

}

void Student::SetProgram(char new_prog) {

}

// Additional features

