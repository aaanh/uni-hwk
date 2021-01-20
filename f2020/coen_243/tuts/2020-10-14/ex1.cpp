#include <iostream>

using namespace std;

int main() {

    int x,y;
    x = 1;
    y = 5;

    cout << (!(x < 5 ) && !(y >= 7)) << endl;

    cout << !(x < 5 || y >= 7) << endl;

    return 0;
}