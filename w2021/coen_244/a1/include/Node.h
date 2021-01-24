#pragma once

#include <iostream>
#include <string>

using namespace std;

class Node {
    private:
        long uid;
        string data_value;

    public:
        // uid counter to assign uid when constructing new object of Node class
        static long uid_count;

        Node();
        // Overloaded constructor to be used for cloning with same data_value
        Node(string cloned_value);
        
        // Node value operations
        void SetValue(string value);
        string GetValue();

        // Node unique identifier operations
        void SetUID(long uid_count);
        long GetUID();

        // Method for printing all attributes
        void PrintNode();

        // Return a newly cloned node
        Node clone();
};