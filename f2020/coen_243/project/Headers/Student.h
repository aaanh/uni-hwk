#pragma once

#include <string>
#include <iostream>

using namespace std;

class Student {
    public:
        // Constructors
        Student();
        Student(string f_name, string l_name, string dob, double gpa, double credit, char program, int start_year);
        
        // Getters
        string GetLastName(); // 1
        string GetFirstName(); // 2
        int GetId(); // 3
        string GetDOB(); // 4
        double GetGPA(); // 5
        double GetCredit(); // 6
        char GetProgram(); // 7 // (B)achelor 140, (M)aster 16, (P)hD 12
        int GetStartYear();

        // Setters
        void SetLastName(string new_l_name); // 1
        void SetFirstName(string new_f_name); // 2
        void SetDOB(string new_dob); // 3
        void SetGPA(double new_gpa); // 4
        void SetId(int new_id); // 5
        void SetCredit(double new_credit); // 6
        void SetProgram(char new_prog); // 7
        void SetStartYear(int new_start_year);

        // Additional features
        bool CompleteProgram();
        string StudentStatus();
        void PrintStudentInfo();
        int CompareGPA(Student student_to_compare);
        void InternalDebugger();

    private:
        static int id_count;

        string l_name;
        string f_name;
        
        int id;

        string dob;
        double gpa_latest;

        int start_year;
        
        double completed_credit;

        char program;
};