#include <iostream>
#include <array>

using namespace std;

const size_t rows{4};
const size_t columns{4};
const size_t rows2{5};
const size_t columns2{5};

long int sum1 = 0;
long int sum2 = 0;

void printArray4x4(const array <array <int, columns>, rows>& array1) {
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

void sumF1(const array <array <int, columns>, rows>& array1, long int &sum1) {
    for (size_t row{0}; row < array1.size(); row++) {
        for (size_t column{0}; column < array1[row].size(); ++column) {
            if (column == row) {
                sum1 += array1[row][column] + array1[array1.size() - row - 1][array1[row].size() - column - 1];
            }
        }
    }

    cout << "Sum for 4x4 2D array: " << sum1 << endl;
}

void sumF2(const array <array <int, columns2>, rows2>& array2, long int &sum2) {
    for (size_t row{0}; row < array2.size(); row++) {
        for (size_t column{0}; column < array2[row].size(); ++column) {
            if (column == row) {
                sum2 += array2[row][column] + array2[array2.size() - row -1][array2[row].size() - column -1];
            }
        }
    }
    sum2 -= array2[rows2/2 + 1][columns2/2 + 1];

    cout << "Sum for 5x5 2D array: " << sum2 << endl;
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
        sumF1(array1, sum1);
    }

    cout << "Enter values for 5 x 5 array: " << endl;
    {
        array <array <int, columns2>, rows2> array2;

        for (size_t row{0}; row < array2.size(); row++) {
            for (size_t column{0}; column < array2[row].size(); column++) {
                cin >> array2[row][column];
            }
        }
        sumF2(array2, sum2);
    }

}

