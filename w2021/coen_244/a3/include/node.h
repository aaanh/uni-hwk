#ifndef NODE_H
#define NODE_H

// Standard libs
#include <string>
#include <iostream>

using namespace std;

class Node {
    public:
        Node(); // default constructor
        Node(int id, string value); // regular constructor, id and value
        Node(const Node&); // copy constructor
        virtual ~Node();

        void    SetNodeID(int);
        void    SetNodeValue(string);
        int     GetNodeID() const;
        string  GetNodeValue() const;

        void    PrintNodeInfo() const;

    private:
        int     id;
        string  value;
};

#endif