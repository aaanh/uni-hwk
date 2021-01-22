#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void swap ( int x, int y ) {
    int temp;
    temp = x; // x = 10; ---> temp = 10
    x = y;
    y = temp;
}

int main() {
	int A[5] = {2,4,6,8,10};
    int *p;
    p = A;

    p = &A[0];

    cout << A;

    // iteration using pointer

    for (int i=0; i<5; i++) {
        cout << A[i] << endl;
        cout << *p++ << endl;
    }

    // swapping 2 numbers
    int a, b;
    a = 10;
    b = 20;

}
