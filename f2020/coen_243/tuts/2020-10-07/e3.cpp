#include <iostream>

using namespace std;

int main() {

    // calc factorial n!

    long fact = 1;

    cout << "n" << "\t\t" << "n!" << endl;

    for (int i = 1; i <= 20; i++) {
        fact *= i;
        cout << i << "\t" << fact << endl;
    }

    return 0;
}