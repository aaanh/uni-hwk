#ifndef GRAPH_H
#define GRAPH_H

// Standard libs
#include <string>
#include <vector>

// Project libs
#include "edge.h"
#include "vertex.h"

using namespace std;

class Graph {
    public:
        Graph() {};
        virtual ~Graph() {};

        virtual bool    AddVertex(Vertex&)              = 0; // Add a Vertex class obj
        virtual bool    AddVertices(vector<Vertex*>)    = 0; // Add multiple Vertex class obj using array of type Vertex
        virtual bool    RemoveVertex()                  = 0; // Remove a Vertex class obj and remove the connecting Edge obj
        virtual int     GetNumVertices()                = 0; // Return the num_of_vertices

        virtual bool    AddEdge(Edge&)                  = 0; // Add an Edge class obj
        virtual bool    RemoveEdge(Edge&)               = 0; // Remove an Edge class obj
        virtual int     GetNumEdges()                   = 0; // Return the num_of_edges
        
        virtual bool    SearchVertex(const Vertex&)     = 0; // Search for a Vertex class obj
        
        virtual bool    SearchEdge(const Edge&)         = 0; // Search for an Edge class obj
        
        virtual void    Display()                       = 0;
        
        virtual bool    Clean()                         = 0; // Wipe Graph class obj of Vertex and Edge
};

#endif