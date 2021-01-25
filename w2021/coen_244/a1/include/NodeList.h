#pragma once

#include <iostream>
#include "../include/Node.h"
#include <array>

using namespace std;

class NodeList {
    public:
        NodeList();
        
        void PrintAllNodes(); // print to console all ndoes in the node_array
        
        bool CheckNodeByUID(size_t param_uid);
        bool CheckNodeByValue(string param_value);
        bool CheckNodeExist(size_t uid, string value); // check if node exists; returns 1 if exists, 0 otherwise
        
        Node GetNode(size_t uid); // return a Node object that the user wants from the node_array
        
        void ModifyNode(size_t uid, string new_value);

    private:
        static const size_t LIST_SIZE = 500; // maximum items in the node_array
        Node *items{ new Node[LIST_SIZE]{} }; // items will point to the dynamically allocated array
        size_t num_items; // the number of items currently in the node_array

};