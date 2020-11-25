#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student {
    public:
        // Getters
        string GetLastName();
        string GetFirstName();
        int GetId();  
        string GetDOB();
        string GetGPA();
        

        // Setters
        void SetLastName(string new_l_name);
        void SetFirstName(string new_f_name);
        void SetDOB(string new_dob);
        void SetGPA(double new_gpa);

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

#endif