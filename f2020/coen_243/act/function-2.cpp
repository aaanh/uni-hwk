#include <iostream>

using namespace std;

char operation;
float result;

void Add(float a, float b, float &result) {
    result = a + b;
}

void Sub(float a, float b, float &result) {
    result = a - b;
}

void Div(float a, float b, float &result) {
    result = a / b;
}

void Mul(float a, float b, float &result) {
    result = a * b;
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
            Add(a, b, result);
            cout << "a + b = " << result << endl;        
            break;
    
        case '-':
        case 'S':
            Sub(a, b, result);
            cout << "a - b = " << result << endl;        
            break;

        case '*':
        case 'M':
            Mul(a, b, result);
            cout << "a * b = " << result << endl;
            break;

        case '/':
        case 'D':
            Div(a, b, result);
            cout << "a * b = " << result << endl;
            break;

        default:
            break;
    }
    return 0;
}