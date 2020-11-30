#pragma once

#include <string>
#include <iostream>

using namespace std;

class Staff {
    public:
        Staff(); // constructor no args
        Staff(string f_name, string l_name, string phone, string hired_date, string bonus_code, string cur_salary); // constructor w/ args

        // Getters
        string GetFirstName();
        string GetLastName();
        
        int GetID();
        string GetHiredDate();
        string GetBonusCode();
        double GetCurrentSalary();

        // Setters
        void SetFirstName();
        void SetLastName();
        void SetID();
        void SetHiredDate();
        void SetBonusCode();
        void SetSalary();

        // Additional methods

        void PrintStaffInfo();
        double CalculateSalary();
        string CompareExp();

    private:
        static int 
        string f_name;
        string l_name;

        int id;
        string phone_number;
        string hired_date;
        string bonus_code;
        double current_salary;
}