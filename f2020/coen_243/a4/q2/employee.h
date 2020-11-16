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
        
        string GetFirstName();
        void EditFirstName(string f_name);
        string GetLastName();
        void EditLastName(string l_name);
        string GetFullName();
        string GetHiredYear();

        int GetId();
        void SetId();

        void GetDOB();
        void EditDOB();

        // void GetSalary();
        // void EditSalary();

        // void GetAddress();
        // void EditAddress();

        string GetPhone();
        void EditPhone(Telephone tel);

        // void CompareLastName();
        // void CompareSalaryHiredYear();

};

#endif