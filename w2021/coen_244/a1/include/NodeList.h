#pragma once

#include <iostream>
#include "../include/Node.h"
#include <array>

using namespace std;

class NodeList {
    public:
        NodeList();
        
        void PrintAllNodes(); // print to console all nodes in items array
        void PrintEmptyNodes(); // print all empty nodes (without data, signified by "N/A")
        void PrintFilledNodes(); // print all fileld nodes (with data)

        bool CheckNodeByUID(size_t param_uid); // check if node exists by UID
        bool CheckNodeByValue(string param_value); // check if node exists by Value
        bool CheckNodeExist(size_t uid=0, string value="N/A"); // check if node exists; returns 1 if exists, 0 otherwise
        
        Node GetNode(size_t uid); // return a Node object that the user wants from the node_array

        Node *GetItems(); // return the items dyn alloc array
        const size_t GetListSize(); // return LIST_SIZE for iteration

        void ModifyNode(size_t uid, string new_value); // modify a node's value with specific UID
        void DeleteNode(size_t uid); // clear data value of a node, making it "empty"

    private:
        static const size_t LIST_SIZE = 500; // maximum items in the node_array
        Node *items{ new Node[LIST_SIZE]{} }; // items will point to the dynamically allocated array
        size_t num_items; // the number of items currently in the node_array

};