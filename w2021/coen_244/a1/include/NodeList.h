#pragma once

#include <iostream>
#include "../include/Node.h"
#include <array>

using namespace std;

class NodeList {
    public:
        NodeList();
        NodeList(array<Node, LIST_SIZE> node_list);
        
        void PrintAllNodes(); 
        bool CheckNodeExist(size_t id = 0, string value = "N/A");

    private:
        static const size_t LIST_SIZE = 500; // maximum items in the list
        Node *items; // items will point to the dynamically allocated array
        size_t num_items; // the number of items currently in the list
        array<Node, LIST_SIZE> node_list;

};