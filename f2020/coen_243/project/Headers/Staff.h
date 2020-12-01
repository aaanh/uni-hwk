#pragma once

#include <string>
#include <iostream>

using namespace std;

class Staff {
    public:
        Staff(); // constructor no args
        Staff(string f_name, string l_name, string phone, string hired_date, char bonus_code, double cur_salary); // constructor w/ args

        // Getters
        string GetFirstName();
        string GetLastName();
        
        int GetID();
        string GetHiredDate();
        char GetBonusCode();
        double GetCurrentSalary();
        string GetPhone();

        // Setters
        void SetFirstName(string new_f_name);
        void SetLastName(string new_l_name);
        void SetID(int new_id);
        void SetHiredDate(string hired_date);
        void SetBonusCode(char b_code);
        void SetSalary(double salary);
        void SetPhone(string new_phone);

        // Additional methods

        void PrintStaffInfo();
        double CalculateSalary();
        string CompareExp(Staff staff_to_compare);

    private:
        static int id_count;
        string f_name;
        string l_name;

        int id;
        string phone_number;
        string hired_date;
        char bonus_code;
        double current_salary;
};