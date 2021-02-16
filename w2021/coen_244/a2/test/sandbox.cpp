#include <iostream>


using namespace std;

int main() {
    int *int_list{ new int[500]{} };
    int size = sizeof(int_list[0]);
    cout << "Size: " << size << endl;
    cout << "Element: " << int_list[5] << endl;
}