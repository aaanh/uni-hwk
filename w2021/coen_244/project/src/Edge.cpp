#include "edge.h"

Edge::Edge() 
{
    
}

Edge::Edge(int weight, Node& v_start, Node& v_end) 
{
    SetWeight(weight);
    SetStartNode(v_start);
    SetEndNode(v_end);
}

Edge::Edge(const Edge&e) 
{
    SetWeight(e.GetWeight());
    SetStartNode(e.GetStartNode());
    SetEndNode(e.GetEndNode());
}

Edge::~Edge() 
{
    
}

void Edge::SetWeight(int weight) 
{
    this->weight = weight;
}

int Edge::GetWeight() const 
{
    return this->weight;
}

void Edge::SetStartNode(const Node& v_start) 
{
    this->start_node = v_start;
}

Node Edge::GetStartNode() const
{
    return this->start_node;
}

void Edge::SetEndNode(const Node& v_end) 
{
    this->end_node = v_end;
}

Node Edge::GetEndNode() const
{
    return this->end_node;
}
