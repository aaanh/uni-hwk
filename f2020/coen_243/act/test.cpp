#include <iostream>
#include <array>

using namespace std;

int main() {
    int mat[3][5], row, col ;
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 5; col++) {
            cin >> mat[row][col];
        }
    }
}