#include "../include/NodeList.h"

using namespace std;

NodeList::NodeList() {
    
}

void NodeList::PrintAllNodes() {
    // iterate through each Node object and call its PrintNode() function
    for (size_t i = 0; i < this->LIST_SIZE; i++) {
        items++->PrintNode();
    }
}

void NodeList::SelfDebugger() {
    
}