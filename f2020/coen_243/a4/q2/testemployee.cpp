#include <iostream>
#include "employee.h"

using namespace std;

void modify(Employee emp) {
    int choice;
    do {
        cout << "Modifications: " << endl;
        cout << "1. First name" << endl;
        cout << "2. Last name" << endl;
        cout << "3. DOB" << endl;
        cout << "4. Salary" << endl;
        cout << "5. Address" << endl;
        cout << "6. Phone number" << endl;
        cout << "7. Exit" << endl;
        cout << "-----\nYour choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    string f_name;
                    cout << "Enter new first name: ";
                    cin >> f_name;
                    emp.EditFirstName(f_name);
                    cout << "New name: " << emp.GetFullName() << endl;
                    break;
                }
            case 2:
                {
                    string l_name;
                    cout << "Enter new last name: ";
                    cin >> l_name;
                    emp.EditLastName(l_name);
                    cout << "New name: " << emp.GetFullName() << endl;
                    break;
                }
                
            case 3:
                {
                    string dob;
                    cout << "Enter new DOB: ";
                    cin >> dob;
                    emp.EditDOB(dob);
                    break;
                }
            case 4:
                {
                    double salary;
                    cout << "Enter new salary: ";
                    cin >> salary;
                    emp.EditSalary(salary);
                }
            case 5:
            case 6:
            case 7:
            default:
                break;

        }
    } while (choice != 7);

}

int main() {
    Employee emp1;
    Employee emp2;
    int choice;
    
    cout << "\n------" << endl;
    cout << "Employee #" << emp1.GetId() << "'s manifest: " << endl;
    cout << "First name: " << emp1.GetFirstName() << endl;
    cout << "Last name: " << emp1.GetLastName() << endl;
    cout << "Full name: " << emp1.GetFullName() << endl;
    cout << "Year hired: " << emp1.GetHiredYear() << endl;
    cout << "Date of birth: " << emp1.GetDOB() << endl;
    cout << "Salary: " << emp1.GetSalary() << endl;
    cout << "Address: " << emp1.GetAddress() << endl;
    cout << "Telephone no.: " << emp1.GetPhone() << endl;
    
    cout << "\n------" << endl;
    cout << "Employee #" << emp2.GetId() << "'s manifest: " << endl;
    cout << "First name: " << emp2.GetFirstName() << endl;
    cout << "Last name: " << emp2.GetLastName() << endl;
    cout << "Full name: " << emp2.GetFullName() << endl;
    cout << "Year hired: " << emp2.GetHiredYear() << endl;
    cout << "Date of birth: " << emp2.GetDOB() << endl;
    cout << "Salary: " << emp2.GetSalary() << endl;
    cout << "Address: " << emp2.GetAddress() << endl;
    cout << "Telephone no.: " << emp2.GetPhone() << endl;

    cout << "\n------" << endl;
    cout << "Compare last name: ";
    cout << emp1.CompareLastName(emp2);
    cout << '\n';
    cout << "Compare salary and year hired: ";
    cout << emp2.CompareSalaryHiredYear(emp1);
    
    cout << "\n------" << endl;
    cout << "Which employee do you want to modify information for? 1/2";
    cin >> choice;
    choice == 1 ? modify(emp1) : modify(emp2);
}