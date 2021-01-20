#include <iostream>
#include <array>
#include <random>

using namespace std;

int main() {
    array<int, 6> arr;

    for (size_t i = 0; i <= arr.size(); i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < 60000000; ++i) {
        int roll = rand() % 6 + 1;
        arr[roll]++;
    }

    for (size_t i = 1; i <= arr.size(); i++) {
        cout << i << ": " << arr[i] << endl;
    }
}