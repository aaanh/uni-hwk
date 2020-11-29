#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    ifstream students_db;
    students_db.open("Data/students.csv");
    
    string line;

    string f_name, l_name, dob, program, temp_gpa, temp_credits;
    double gpa, credits;

    if (students_db.is_open()) {
        while (getline(students_db, line)) {
            stringstream ss(line);
            getline(ss, f_name, ',');
            getline(ss, l_name, ',');
            getline(ss, dob, ',');
            getline(ss, temp_gpa, ',');
            getline(ss, temp_credits, ',');
            getline(ss, program, ',');
            
            gpa = stod(temp_gpa);
            credits = stod(temp_credits);

            cout << endl;
            
            cout << "Name: " << f_name << " " << l_name << endl;
            cout << "DOB: " << dob << endl;
            cout << "GPA: " << gpa << endl;
            cout << "Credits: " << credits << endl;
            cout << "Program: " << program << endl;
            
            cout << endl;
        }
    } else {
        cout << "Unable to open file." << endl;
    }



    return 0;
}