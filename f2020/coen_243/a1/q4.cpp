#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    bool PrimeCheck(int integer); // declare function usage
    
    cout << "Enter an integer for prime check: ";
    cin >> n;
    
    PrimeCheck(n) ? cout << n << " is a prime number." : cout << n << " is not a prime number."; // ternary operator

    return 0;
}

// create a new function to make program more modular and cleaner

bool PrimeCheck(int integer) {
    int n = integer;
    bool flag;
    if (n == 2 || n == 3) {
        flag = true;
    } else {
        for (int i = 2; i < sqrt(n); ++i) {
            if (n % i == 0) {
                flag = false;
                break;
            } else {
                flag = true;
                break;
            }
        }
    }
    return flag;
}