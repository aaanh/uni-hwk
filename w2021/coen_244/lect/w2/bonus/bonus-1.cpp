#include <iostream>

using namespace std;

int main() {
    int* pack = new int[2019];
    cout << &pack.size();
    for (auto i=0; i <= sizeof(&pack); i++) {
        pack[i] = i+1;
        cout << pack[i];
    }
}