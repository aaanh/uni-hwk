#ifndef EDGE_H
#define EDGE_H

#include "Vertex.h"

class Edge {
    public:
        Edge();
        virtual ~Edge();

        bool    SetWeight();

        bool    SetStartVertex();
        Vertex  GetStartVertex();
        
        bool    SetEndVertex();
        Vertex  GetStartVertex();

    private:
        int     weight;
        Vertex  start_vertex;
        Vertex  end_vertex;
};

#endif