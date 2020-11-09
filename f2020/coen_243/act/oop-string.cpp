#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Time {
    public:
        Time(); // constructor
        void setTime(int, int, int);
        void printUniversal();
        void printStandard();
    
    private:
        int hour;
        int minute;
        int second;
};

int main() {
    Time t1;
    Time t2;
}