#include <iostream>

using namespace std;

void function1( int &x ) {
    x = x+1;
}

void function2( int &y ) {
    y = y + 2;
}

int main() {
    int a=1;

    function1(a);
    function2(a);

    cout << a;
    
    return 0;
}
