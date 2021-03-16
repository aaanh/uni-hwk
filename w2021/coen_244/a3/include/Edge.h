#ifndef EDGE_H
#define EDGE_H

#include "Vertex.h"

class Edge {
    public:
        Edge();
        virtual ~Edge();

        bool    SetWeight(int);

        bool    SetStartVertex(const Vertex& v_start);
        Vertex  GetStartVertex() const;
        
        bool    SetEndVertex(const Vertex& v_end);
        Vertex  GetEndVertex() const;

    private:
        int     weight;
        Vertex  start_vertex;
        Vertex  end_vertex;
};

#endif