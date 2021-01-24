#pragma once

#include <iostream>
#include "../include/Node.h"
#include <array>

using namespace std;

class NodeList {
    public:
        NodeList();
        
        void PrintAllNodes(); // print to console all ndoes in the node_array
        bool CheckNodeExist(size_t id = 0, string value = "N/A");
        Node GetNode(); // return a Node object that the user wants from the node_array
        void SelfDebugger(); // debugging method for use in development

    private:
        static const size_t LIST_SIZE = 500; // maximum items in the node_array
        Node *items{ new Node[LIST_SIZE]{} }; // items will point to the dynamically allocated array
        size_t num_items; // the number of items currently in the node_array

        // init a dyn. alloc. array of length LIST_SIZE and type Node.
        // Node *node_array{ new Node[LIST_SIZE]{} };

};