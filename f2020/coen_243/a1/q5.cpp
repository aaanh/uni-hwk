#include <iostream>
#include <algorithm> // the library for the wheel

using namespace std;

int main() {
    int  a1, a2, a3;
    cout << "Enter 3 integers separated by [Space]: ";
    cin >> a1 >> a2 >> a3;
    // cout << a1 << a2 << a3 << endl; // for debugging
    int arr[] = {a1, a2, a3};

    // Not reinventing the wheel
    sort(arr, arr + 3); // arr +3 is the size
    // cout << "Sorted using built-in algorithm: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i];
        if (i == 2) {
            break;
        } else {
            cout << ", ";
        }
    }

    // // Reinventing the wheel
    // int num_min, num_mid, num_max;
    // // cout << a1 << a2 << a3 << endl;

    // if (a1 < a2 && a1 < a3) {
    //     num_min = a1;
    //     if (a2 < a3) {
    //         num_mid = a2;
    //         num_max = a3;
            
    //     } else {
    //         num_mid = a3;
    //         num_max = a2;
            
    //     }
    // } else if (a1 > a2 && a1 > a3) {
    //     num_max = a1;
    //     if (a2 < a3) {
    //         num_min = a2;
    //         num_mid = a3;
    //     } else {
    //         num_min = a3;
    //         num_mid = a2;
    //     }
    // } else {
    //     num_mid = a1;
    //     if (a2 < a3) {
    //         num_min = a2;
    //         num_max = a3;
    //     } else {
    //         num_min = a3;
    //         num_max = a2;
    //     }
    // }

    // cout << endl;
    // cout << "Sorted using if-else tree: " << num_min << ", " << num_mid << ", " << num_max << endl;

    return 0;
}