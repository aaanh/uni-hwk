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
        string GetNumber();
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
        
        int GetId();

        string GetFirstName();
        void EditFirstName(string f_name);

        string GetLastName();
        void EditLastName(string l_name);

        int GetHiredYear();

        string GetFullName();

        string GetDOB();
        void EditDOB(string dob);

        double GetSalary();
        void EditSalary(double salary);

        string GetAddress();
        void EditAddress(string address);

        string GetPhone();
        void EditPhone(Telephone tel);

        bool CompareLastName(Employee emp_target);

        bool CompareSalaryHiredYear(Employee emp_target);
};

#endif