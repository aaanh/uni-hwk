#include "../include/NodeList.h"

using namespace std;

NodeList::NodeList() {
    this->items = node_array;
}

void NodeList::PrintAllNodes() {
    // iterate through each Node object and call its PrintNode() function
    for (int i = 0; i <= sizeof(this->items); i++) {
    
    }
}

void NodeList::SelfDebugger() {
    cout << &node_array << endl; // print node_array to console.
}