#include <iostream>

using namespace std;

void cubeByReference(int* nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr;
}

int main() {
    // int *p; // def pointer
    // int x{5};
    // int y;
    // p = &x;
    // y = *p;

    // cout << *p << endl;
    // cout << p << endl;
    // cout << &x << endl;
    // cout << x << endl;
    // cout << y << endl;

    // Math with pointer dereferencing

    // int x{5};
    // int y{3};
    // int z;

    // int *xPtr = &x;
    // int *yPtr = &y;
    // int *zPtr = &z;

    // *zPtr = *xPtr + *yPtr;

    // cout << *zPtr << endl;

    // Pointer in functions

    int number{5};
    cout << "The original value of number is: " << number << endl;
    cubeByReference(&number);
    cout << "The new value of number is: " << number << endl;

}

