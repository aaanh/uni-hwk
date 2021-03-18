#ifndef EDGE_H
#define EDGE_H

#include "vertex.h"

class Edge {
    public:
        Edge(); // default constructor
        Edge(int, Vertex&, Vertex&); // regular constructor
        Edge(const Edge&); // copy constructor
        virtual ~Edge(); // destructor

        bool    SetWeight(int); // set weight
        int     GetWeight() const; // get weight

        bool    SetStartVertex(const Vertex& v_start); // set start vertex by passing in vertex obj
        Vertex  GetStartVertex() const; // get start vertex
        
        bool    SetEndVertex(const Vertex& v_end); // set end vertex by passing in vertex obj
        Vertex  GetEndVertex() const; // get end vertex

    private:
        int     weight;
        Vertex  start_vertex;
        Vertex  end_vertex;
};

#endif