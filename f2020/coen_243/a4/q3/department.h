#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <array>
#include "employee.h"

using namespace std;

class Department {
    private:
        string id;
        string name;
        string history;
        Employee emps[25];

    public:
        Department();

        string GetId();
        void EditId(string new_id);
        
        string GetName();
        void EditName(string new_name);
        
        string GetHistory();
        void EditHistory(string new_history);

        void AddMember(Employee emp);
        void RemoveMember();
        Employee GetMember(int index);

        bool SearchEmployee(int id);

        void PrintEmployeeList();
        void PrintEmployeeCount();
};

#endif