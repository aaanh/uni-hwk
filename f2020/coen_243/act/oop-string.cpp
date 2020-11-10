#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// class Time {
//     private:
//         int hour;
//         int minute;
//         int second;

//     public:
//         Time(); // constructor
//         void setTime(int h, int m, int s) {
//             hour = h;
//             minute = m;
//             second = s;
//         };
//         void printUniversal();
//         void printStandard();
// };

class Employee {
    private:
        int salary;

    public:
        // Setter
        void setSalary(int s) {
            salary = s;
        }
        // Getter
        int getSalary() {
            return salary;
        }
};

class Time {
    private:
        int hour;
        int minute;
        int second;
        
    public:
        
}

int main() {

    Employee emp1;
    emp1.setSalary(50000);
    cout << emp1.getSalary() << endl;
    return 0;
}