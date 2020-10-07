#include <iostream>

using namespace std;

int function1(int lower, int upper) {
    for (int i = lower; i <= upper; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            cout << i;
            cout << " ";
        }
    }
    return 0;
}

void function2(int lower, int upper, int *r) {
    *r = upper - lower;
    return;
}

double function3(int lower, int upper) {
    double sum = 0;

    for (int i = lower; i <= upper; i++) {
        sum += 1/static_cast<double>(i);
    }

    return sum;
}

int main() {
    int lower, upper;
    char switch_case;
    int result;

    cout << "Please enter 2 integers as lower and upper bound respectively: ";
    cin >> lower >> upper;
    // cout << lower << endl;
    // cout << upper << endl;
    cout << "Please enter a, b, or c: ";
    cin >> switch_case;

    switch (switch_case) {
        case 'a':
            cout << "List of numbers in this interval which are multiple of both 3 and 7: ";
            function1(lower, upper);
            break;
        case 'b':
            function2(lower, upper, &result);
            cout << "The substraction of 2 integers is: " << result << endl;
            break;
        case 'c':
            cout << "The value of the sum is: " << function3(lower, upper);
            break;
        default: 
            cout << "Invalid input";
            break;
    }

    return 0;
}