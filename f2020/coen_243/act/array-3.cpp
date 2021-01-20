#include <iostream>
#include <array>

using namespace std;

const size_t rows{2};
const size_t columns{3};

void printArray(const array <array <int, columns>, rows>& a) {
    // loop through array's rows
    for (auto row : a) {
        for (auto element : row) {
            cout << element << ' ';
        }
        cout << endl;
    }
    // another method to do the same thing albeit longer
    for (size_t row{0}; row < a.size(); row++) {
        // loop through columns of current row
        for (size_t column{0}; column < a[row].size(); ++column) {
            cout << a[row][column] << ' ';
        }
        cout << endl;
    }
}

int main() {
    array<array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6};
    array<array<int, columns>, rows> array2{1, 2, 3, 4, 5};

    cout << "Values in array1 by row are: " << endl;
    printArray(array1);
    cout << "\n";
    cout << "Values in array2 by row are: " << endl;
    printArray(array2);
    cout << "\n";
    
}