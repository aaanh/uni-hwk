#include <iostream>

using namespace std;

char operation;

float Add(float a, float b) {
    return a+b;
}

float Sub(float a, float b) {
    return a-b;
}

float Div(float a, float b) {
    return a/b;
}

float Mul(float a, float b) {
    return a*b;
}

int main() {

    float a,b;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout << "Enter operation: ";
    cin >> operation;

    switch(operation) {
        case '+':
        case 'A':
            cout << "a + b = " << Add(a,b) << endl;        
            break;
    
        case '-':
        case 'S':
            cout << "a - b = " << Sub(a,b) << endl;        
            break;

        case '*':
        case 'M':
            cout << "a * b = " << Mul(a,b) << endl;
            break;

        case '/':
        case 'D':
            cout << "a * b = " << Div(a,b) << endl;
            break;

        default:
            break;
    }
    return 0;
}