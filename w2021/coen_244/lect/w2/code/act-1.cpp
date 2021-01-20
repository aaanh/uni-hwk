#include <iostream>

using namespace std;

int increment(int v) {
    return ++v;
}


int increment_p(int*p) {
    return (++*p);
}


int main() {
    int* data = new int[100];
    // double[] data_1 = new double[100];

    // pointing to memory address holding integers
    // this is the beginning addr
    int* ptr = data;
    cout << *ptr << endl;

    // "++" operates by 1 unit of the size of the data type

    // call by value
    int x = 5;
    
    cout << increment(x) << endl;
    cout << x << endl;
    
    // call by reference
    int y = 5;
    
    cout << increment(y) << endl;
    cout << y << endl;

    // when to call by reference or value
    // if the array is very large, the costs increase
    // when operating on the elements, requiring high overhead.

}