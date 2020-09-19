#include <iostream>

using namespace std;

int main() {
    int  a1, a2, a3;
    cout << "Enter 3 integers separated by [Space]: ";
    cin >> a1 >> a2 >> a3;
    // cout << a1 << a2 << a3 << endl;

    int sort_min = min(a1, min(a2, a3));
    int sort_max = max(a1, max(a2, a3));
    int sort_mid;
    a1 < sort_min ? 

    if (a1 > a2 && a1 > a3) {
        cout << (a2 < a3 ? a2 : a3)
        << ", "
        << (a2 < a3 ? a3 : a2)
        << ", "
        << a1 << endl;
    } else if (a1 < a2 || a1 < a3) {
        cout << a1
        << ", "
        << (a2 < a3 ? a2 : a3)
        << ", "
        << (a2 < a3 ? a3 : a2) << endl;
    }

    // int arr_1[] = {a1, a2};
    // int arr_2[] = {a3};
    // int arr_temp[2];

    // if (a2 < a1) {
    //     int arr_temp[] = {a2, a1} ;
    // };

    // if (min(a1, a2) > a3) {
    //     cout << arr_temp[0]
    //     << ", "
    //     << arr_temp[1]
    //     << ", "
    //     << arr_2[0] << endl;
    // } else {
    //     cout << arr_2[0]
    //     << ", "
    //     << arr_temp[0]
    //     << ", "
    //     << arr_temp[1] << endl;
    // }
}