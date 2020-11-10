#include <iostream>
#include <array>

using namespace std;

const size_t rows{4};
const size_t columns{4};
const size_t rows2{5};
const size_t columns2{5};

void printArray4x4(const array <array <int, columns>, rows>& array1) {
    // loop through array's rows
    for (auto row : array1) {
        for (auto element : row) {
            cout << element << ' ';
        }
        cout << endl;
    }
    // another method to do the same thing albeit longer
    for (size_t row{0}; row < array1.size(); row++) {
        // loop through columns of current row
        for (size_t column{0}; column < array1[row].size(); ++column) {
            cout << array1[row][column] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

void printArray5x5(const array <array <int, columns2>, rows2>& array2) {
    // loop through array's rows
    for (auto row : array2) {
        for (auto element : row) {
            cout << element << ' ';
        }
        cout << endl;
    }
    // another method to do the same thing albeit longer
    for (size_t row{0}; row < array2.size(); row++) {
        // loop through columns of current row
        for (size_t column{0}; column < array2[row].size(); ++column) {
            cout << array2[row][column] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

void sum1(const array <array <int, columns>, rows>& array1) {
    for (size_t )
}

void sum2(const array <array <int, columns2>, rows2>& array2) {

}

int main() {
    cout << "Enter values for 4 x 4 array: " << endl;
    {
        array <array <int, columns>, rows> array1;

        for (size_t row{0}; row < array1.size(); row++) {
            for (size_t column{0}; column < array1[row].size(); column++) {
                cin >> array1[row][column];
            }
        }

        printArray(array1);
    }

    cout << "Enter values for 5 x 5 array: " << endl;
    {
        array <array <int, columns2>, rows2> array2;

        for (size_t row{0}; row < array2.size(); row++) {
            for (size_t column{0}; column < array2[row].size(); column++) {
                cin >> array2[row][column];
            }
        }

        printArray(array2);
    }

}

