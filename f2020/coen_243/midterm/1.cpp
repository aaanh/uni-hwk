#include <iostream>

using namespace std;

int function1(int n) {
    if (n!=0) {
        return function1(n-1) -2;
    } else return 1;
}

int f();

int x = 2;

int f1(int n) {
    {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        } else {
            return (2*f1(n-1) - f1(n-2));
        }
    }
}

int main() {

    cout << f1(4);

    // int n = 1;
    // for (int i = 0; i <= 2; i++) {
    //     switch(n) {
    //         case 1:
    //             for (int j = 0; j <= 2; j++) {
    //                 n += 1;
    //             }
    //             break;

    //         default: 
    //             for (int j = 0; j < 2; j++) {
    //                 n = n - 1;
    //             }
    //     }
    // }
    // cout << n << endl;

    // int i, j, k;
    // i = j = k = 10;
    // j = i++;
    // k = j++;
    // cout << i << endl << j << endl << k << endl;

    // int i = 90.6;
    // int counter = 1;
    // while (--i > 0) {
    //     counter++;
    // }
    // cout << counter;

    // int counter = 1;

    // for (int i = 1; i < 20; i++) {
    //     for (int j = 0; j < 10; j++) {
    //         cout << "*";
    //         counter++;
    //     }
    // }
    // cout << counter;

    // int i = 5;
    // int j = 20;
    // int n = ++i*(-j);
    // cout << n << endl;
    // int m = i + j--;
    // cout << m << endl;
    // int p = i + j++;
    // cout << p << endl;

    // int x = f();
    // cout << "1. x = " << x << endl;
    // {
    //     int x = 5;
    //     ++x;
    // }
    // cout << "2. x = " << x << endl;
    // cout << "3. x = " << f() << endl;

}

int f() {
    return ++x;
}