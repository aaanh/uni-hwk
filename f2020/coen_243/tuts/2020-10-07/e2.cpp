#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // a^2 + b^2 = c^2

    cout << "a\tb\tc\n--------------------" << endl;;
    for (int a = 1; a < 500; a++) {
        for (int b = 1; b < 500; b++) {
            for (int c = 1; c < 500; c++) {
                int s = pow(a, 2) + pow(b, 2);
                int hyp = pow(c, 2);
                if (s == hyp) {
                    cout << a << "\t" << b << "\t" << c << endl;
                }
            }
        }
    }

    return 0;
}