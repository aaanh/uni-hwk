#ifndef DIGRAPH_H
#define DIGRAPH_H

#include "graph.h"

class Directed_Graph : public Graph {
    public:
        Directed_Graph();
        virtual ~Directed_Graph();
        
        bool    AddVertex(Vertex&)         override; // Add a Vertex class obj
        bool    AddVertices(vector<Vertex>)override; // Add multiple Vertex class obj using array of type Vertex
        bool    RemoveVertex()             override; // Remove a Vertex class obj and remove the connecting Edge obj
        
        bool    AddEdge(Edge&)             override; // Add an Edge class obj
        bool    RemoveEdge(Edge&)          override; // Remove an Edge class obj
        
        bool    SearchVertex(const Vertex&)override; // Search for a Vertex class obj
        
        bool    SearchEdge(const Edge&)    override; // Search for an Edge class obj
        
        string  toString () const override         ;
        
        bool    Clean()                    override; // Wipe Graph class obj of Vertex and Edge

    private:
        const int           MAX_NUM_VERTICES    = 500;
        const int           MAX_NUM_EDGES       = MAX_NUM_VERTICES*(MAX_NUM_VERTICES-1)/2; // general graph property
        
        unsigned long int   num_of_vertex       = 0; // <= MAX_NUM_VERTICES
        unsigned long int   num_of_edge         = 0; // <= MAX_NUM_EDGES

        vector<Vertex>      list_of_vertex; // STL vector storing vertices
        vector<Edge>        list_of_edge; // STL vector storing edgess
};

#endif