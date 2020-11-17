#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <array>
#include "../q2/employee.h"

using namespace std;

class Department {
    private:
        string id;
        string name;
        string history;
        array<Employee, 25> employees;

    public:
        string GetId();
        
        string GetName();
        void EditName(string new_name);
        
        string GetHistory();
        void EditHistory(string new_history);

        void AddMember(Employee new_emp);
        

};

#endif