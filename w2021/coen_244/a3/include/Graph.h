#ifndef GRAPH_H
#define GRAPH_H

// Standard libs
#include <string>
#include <vector>

// Project libs
#include "Edge.h"
#include "Vertex.h"

using namespace std;

class Graph {
    public:
        Graph(); // Default constructor
        virtual ~Graph(); // Destructor

        virtual bool    AddVertex(Vertex& v)            = 0; // Add a Vertex class obj
        virtual bool    AddVertices(Vertex* vArray)     = 0; // Add multiple Vertex class obj using array of type Vertex
        virtual bool    RemoveVertex()                  = 0; // Remove a Vertex class obj and remove the connecting Edge obj
        
        virtual bool    AddEdge(Edge& e)                = 0; // Add an Edge class obj
        virtual bool    RemoveEdge(Edge& e)             = 0; // Remove an Edge class obj
        
        virtual bool    SearchVertex(const Vertex& v)   = 0; // Search for a Vertex class obj
        
        virtual bool    SearchEdge(const Edge& e)       = 0; // Search for an Edge class obj
        
        virtual string  toString () const;
        
        virtual bool    Clean()                         = 0; // Wipe Graph class obj of Vertex and Edge

    private:
        vector<Vertex>  list_of_vertex;
        vector<Edge>    list_of_edge;
        unsigned long int   num_of_vertex   = 0;
        unsigned long int   num_of_edge     = 0;


};

class Directed_Graph : virtual Graph {
    Directed_Graph();
    virtual ~Directed_Graph();

};

#endif