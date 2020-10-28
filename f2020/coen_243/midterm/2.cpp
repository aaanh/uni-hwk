#include <iostream>

using namespace std;

int c = 1;

void the_function(int a, int b, int *c) {
    for (int i = a; i <= b; i++) {
        *c *= i;
    }
}

int main() {

    int a,b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    the_function(a, b, &c);
    cout << c;


    // int n;

    // cout << "Enter a number: ";
    // cin >> n;

    // for (int i = n; i >= 1; i -= 2) {
    //     for (int j = 1; j <= i; j+=2) {
    //         if (j % 2 == 1) {
    //             cout << j << " ";
    //         }
    //     }
    //     cout << endl;
    // }

}