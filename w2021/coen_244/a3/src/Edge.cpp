#include "Edge.h"


Edge::Edge() 
{
    
}

Edge::~Edge() 
{
    
}

bool Edge::SetWeight(int weight) 
{
    this->weight = weight;
}

bool Edge::SetStartVertex(const Vertex& v_start) 
{
    this->start_vertex = v_start;
}

Vertex Edge::GetStartVertex() const
{
    return this->start_vertex;
}

bool Edge::SetEndVertex(const Vertex& v_end) 
{
    this->end_vertex = v_end;
}

Vertex Edge::GetEndVertex() const
{
    return this->end_vertex;
}
