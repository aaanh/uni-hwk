#include <iostream>

using namespace std;

int Fact(int n) {
    if (n < 1) {
        return 1;
    }
    else {
        return n*Fact(n - 1);
    }
}

int Fib(int n) {
    if ( n <= 1 ) {
        return n;
    }
    else {
        return Fib(n-1) + Fib(n-2);
    }
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "The factorial is: " << Fact(n) << endl;

    cout << "The Fibonacci is: " << Fib(n) << endl;

    return 0;
}