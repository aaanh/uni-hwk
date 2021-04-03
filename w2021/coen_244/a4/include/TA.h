#ifndef _TA_H
#define _TA_H

#include <iostream>
#include <string>

using namespace std;

class TA 
{
    public:
        TA();
        TA(string, string, string, unsigned int, string, unsigned int);
        ~TA();

        // attr setters
        void SetStudentID(string);
        void SetLastName(string);
        void SetFirstName(string);
        void SetHireYear(unsigned int);
        void SetClassification(string);
        void SetWorkHours(unsigned int);

        // attr getters
        string GetStudentID() const;
        string GetLastName() const;
        string GetFirstName() const;
        unsigned int GetHireYear() const;
        string GetClassification() const;
        unsigned int GetWorkHours() const;

    private:
        string student_id;
        string last_name;
        string first_name;
        unsigned int hire_year;
        string classification;
        unsigned int work_hours;

};

#endif