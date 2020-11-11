#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Telephone {
    private:
        int area_code;
        string number;

    public:
        Telephone();
        void setAreaCode(int area_code);
        void setNumber(string number);
        void updateNumber();
        void printNumber();
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
        Employee(); // Constructor
        
        void setId(int id);
        void printId();
        
        void printFirstName(string f_name);
        void editFirstName(string f_name);
        void printLastName(string l_name);
        void editLastName(string l_name);
        void printFullName();
        void printHiredYear();

        void printDOB();
        void editDOB();

        // void printSalary();
        // void editSalary();

        // void printAddress();
        // void editAdress();

        void printPhone();
        void editPhone(Telephone tel);

        // void compareLastName();
        // void compareSalaryHiredYear();

};

#endif