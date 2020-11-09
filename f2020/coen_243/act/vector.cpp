#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void outputVector(const vector<int>&items) {
    for (int item : items) {
        cout << item << " ";
    }
    cout << endl;
}

void inputVector(vector<int> &items) {
    // ampersand needed to change the array element value
    for (int &item : items) {
        cin >> item;
    }
}

int main() {
    vector<int> integers1(7);
    vector<int> integers2(10);

    cout << "Size of vect integers1 is: " << integers1.size() << endl
        << "Vect after init: " << endl;
    outputVector(integers1);

    cout << "Size of vect integers2 is: " << integers2.size() << endl
        << "Vect after init: " << endl;
    outputVector(integers2);

    cout << "Enter 17 integers: " << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "After input the vectors contain: " << endl
        << "integers1: " << endl;
    outputVector(integers1);
    cout << "integers2: " << endl;
    outputVector(integers2);

    cout << "Eval integers1 != integers2" << endl;

    if (integers1 != integers2) {
        cout << "Int1 and Int2 are not equal" << endl;
    }

    vector<int> integers3(integers1); // assign all of integers1 to integers3

    cout << "Size of vect integers3 is: " << integers3.size() << endl
        << "Vect after init: " << endl;
    outputVector(integers3);

    // Changing the size of the vector
    cout << "\n\n\n\n";
    cout << "Current integers3 size is: " << integers3.size() << endl;
    integers3.push_back(1000); // add value 1000 to the end of the vector
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "Integers3 now contains: ";
    outputVector(integers3);
    integers3.erase(integers3.begin());
    outputVector(integers3);
}