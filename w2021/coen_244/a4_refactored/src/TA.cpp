#include "TA.h"

TA::TA() 
{
    
}

TA::TA(string id, string lname, string fname, string hire_year, string classification, string workhours) 
{
    SetStudentID(id);
    SetLastName(lname);
    SetFirstName(fname);
    SetHireYear(hire_year);
    SetClassification(classification);
    SetWorkHours(workhours);
}

TA::~TA() 
{
    
}

void TA::SetStudentID(string id) 
{
    this->student_id = id;
}

void TA::SetLastName(string lname) 
{
    this->last_name = lname;
}

void TA::SetFirstName(string fname) 
{
    this->first_name = fname;
    
}

void TA::SetHireYear(string hire_year) 
{
    this->hire_year = stoi(hire_year);
}

void TA::SetClassification(string classification) 
{
    this->classification = classification;
}

void TA::SetWorkHours(string workhours) 
{
    this->work_hours = stoi(workhours);
}

string TA::GetStudentID() const
{
    return this->student_id;
}

string TA::GetLastName() const
{
    return this->last_name;
}

string TA::GetFirstName() const
{
    return this->first_name;
}

unsigned int TA::GetHireYear() const
{
    return this->hire_year;
}

string TA::GetClassification() const
{
    return this->classification;
}

unsigned int TA::GetWorkHours() const
{
    return this->work_hours;
}
