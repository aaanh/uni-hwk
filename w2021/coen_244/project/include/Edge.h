#ifndef EDGE_H
#define EDGE_H

#include "node.h"

class Edge {
    public:
        Edge(); // default constructor
        Edge(int weight, Node& v_start, Node& v_end); // regular constructor
        Edge(const Edge&); // copy constructor
        virtual ~Edge(); // destructor

        bool    SetWeight(int); // set weight
        int     GetWeight() const; // get weight

        bool    SetStartNode (const Node&); // set start node by passing in node obj
        Node    GetStartNode() const; // get start node
        
        bool    SetEndNode (const Node&); // set end node by passing in node obj
        Node    GetEndNode() const; // get end node

    private:
        int     weight;
        Node    start_node;
        Node    end_node;
};

#endif