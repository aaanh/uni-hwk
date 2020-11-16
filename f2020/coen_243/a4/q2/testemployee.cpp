#include <iostream>
#include "employee.h"

using namespace std;

int main() {
    Employee emp;
    cout << "\n\n----------------" << endl;
    cout << "First name: " << emp.GetFirstName() << endl;
    cout << "Phone number: " << emp.GetPhone() << endl;
    cout << "Full name: " << emp.GetFullName() << endl;
}