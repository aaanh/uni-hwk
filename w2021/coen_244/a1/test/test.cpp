#include <iostream>
#include "../include/Node.h"

using namespace std;

int main() {
    const size_t LIST_SIZE = 500;
    Node *node_array{ new Node[LIST_SIZE]{} };
    for (size_t i = 0; i < 500; i++) {
        cout << "Iteration #" << i+1 << " " << endl;
        node_array[i].PrintNode();
    }
}