#pragma once

#include <iostream>
#include <string>

using namespace std;

class Node {
    private:
        long uid; // unique id for a Node object
        string data_value; // data value in string for a Node object
        // RESERVED KEYWORD: "N/A" in data_value to symbolize an empty Node


    public:
        // uid counter to assign uid when constructing new object of Node class
        static long uid_count;
        // Default constructor
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
        Node Clone();
};