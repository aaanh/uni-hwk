#include "../include/NodeList.h"
#include <iostream>

using namespace std;

int main() {
    NodeList n;
    long comp = 2;
    cout << (n.GetItems()[1].GetUID() == comp) << endl;
}