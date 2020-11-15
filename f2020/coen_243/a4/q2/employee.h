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
        void SetAreaCode(int area_code);
        void SetNumber(string number);
        void UpdateNumber();
        void PrintNumber();
};

class Employee {
    private:
        string f_name;
        string l_name;
        string dob;
        static int id_count;
        int id;
        string address;
        int year_hired;
        double salary;
        Telephone telephone;


    public:
        Employee(); // Constructor
        
        void PrintFirstName(string f_name);
        void EditFirstName(string f_name);
        void PrintLastName(string l_name);
        void EditLastName(string l_name);
        void PrintFullName();
        void PrintHiredYear();

        void GetId();
        void SetId();

        void PrintDOB();
        void EditDOB();

        // void printSalary();
        // void editSalary();

        // void printAddress();
        // void editAddress();

        void PrintPhone();
        void EditPhone(Telephone tel);

        // void compareLastName();
        // void compareSalaryHiredYear();

};

#endif