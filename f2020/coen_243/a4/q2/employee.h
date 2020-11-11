#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Telephone {
    private:
        int area_code;
        string number;

    public:
        void setAreaCode(int area_code);
        void setNumber(string number);
};

class Employee {
    private:
        int id;
        string f_name;
        string l_name;
        string dob;
        string address;
        int year_hired;
        double salary;
        Telephone telephone;

    public:
        void printId();
        
        void printFirstName(string f_name);
        void editFirstName();
        void printLastName(string l_name);
        void editLastName();
        void printFullName();

        void printHiredYear();

        void printDOB();
        void editDOB();

        void printSalary();
        void editSalary();

        void printAddress();
        void editAdress();

        void printPhone();
        void editPhone();

        void compareLastName();
        void compareSalaryHiredYear();

};

#endif