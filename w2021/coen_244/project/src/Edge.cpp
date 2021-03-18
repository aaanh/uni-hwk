#include "edge.h"

Edge::Edge() 
{
    
}

Edge::Edge(int weight, Vertex& v_start, Vertex& v_end) 
{
    SetWeight(weight);
    SetStartVertex(v_start);
    SetEndVertex(v_end);
}

Edge::Edge(const Edge&e) 
{
    SetWeight(e.GetWeight());
    SetStartVertex(e.GetStartVertex());
    SetEndVertex(e.GetEndVertex());
}

Edge::~Edge() 
{
    
}

bool Edge::SetWeight(int weight) 
{
    this->weight = weight;
}

int Edge::GetWeight() const 
{
    return this->weight;
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
