// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int size_input;
    cout << "Enter size of array: ";
    cin >> size_input;
    cout << "Creating new array of size: " << size_input << endl;
    int *a = new int[size_input];
    int *p = a;
    for (size_t i = 0; i <= sizeof(a); i++) {
        cout << p+i << "\t\t" << p[i] << endl;
    }
}