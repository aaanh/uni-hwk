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
        string f_name;
        string l_name;
        string dob;
        static int id;
        string address;
        int year_hired;
        double salary;
        Telephone telephone;


    public:
        Employee(); // Constructor
        
        void printFirstName(string f_name);
        void editFirstName(string f_name);
        void printLastName(string l_name);
        void editLastName(string l_name);
        void printFullName();
        void printHiredYear();

        void getId();
        void setId();

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