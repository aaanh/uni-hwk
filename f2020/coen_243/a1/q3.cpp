#include <iostream>

using namespace std;

int main() {

    cout << "Celsius" << "\t" << "Fahrenheit" << "\t" << "Kelvin" << endl;
    
    for (int i = 1; i<=20; i++) {
        cout << i << "\t" << float(i)*9/5 + 32 << "\t\t" << float(i) + 275.15 << endl;
    }
    return 0;
}