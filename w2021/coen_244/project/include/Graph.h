#ifndef GRAPH_H
#define GRAPH_H

// Standard libs
#include <string>
#include <vector>
#include <iostream>

// Project libs
#include "edge.h"
#include "node.h"

using namespace std;

class Graph {
    public:
        Graph() {};
        virtual ~Graph() {};

        // the standard graph ops part

        virtual bool    AddNodeoNode            = 0; // Add a NodeNode obj
        virtual bool    AddNodesctor<Node>    = 0; // Add multiple NoNodess obj using array of type NodeNode
        virtual bool    RemoveNode                  = 0; // Remove a NoNodess obj and remove the connecting Edge obj
        virtual int     GetNumNodes               = 0; // Return the num_of_nodes

        virtual bool    AddEdge(Edge&)                  = 0; // Add an Edge class obj
        virtual bool    RemoveEdge(Edge&)               = 0; // Remove an Edge class obj
        virtual int     GetNumEdges()                   = 0; // Return the num_of_edges
        
        virtual bool    SearchNodeonst NoNode   = 0; // Search for a NodeNode obj
        
        virtual bool    SearchEdge(const Edge&)         = 0; // Search for an Edge class obj
        
        virtual void    Display()                       = 0;
        
        virtual bool    Clean()                         = 0; // Wipe Graph class obj of Nodend Edge
        

};

#endif