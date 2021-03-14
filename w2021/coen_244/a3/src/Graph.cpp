#include "Graph.h"

Graph::Graph() 
{
    
}

Graph::~Graph()
{

}

bool Graph::AddVertex(Vertex& v) 
{
    this->list_of_vertex.push_back(v);
    
}

bool Graph::AddVertices(Vertex* array)
{

}

bool Graph::RemoveVertex()
{
    this->list_of_vertex.pop_back();
}

bool Graph::SearchVertex(const Vertex& v)
{

}

bool Graph::SearchEdge(const Edge& e)
{

}

string Graph::toString() const
{

}

bool Graph::Clean()
{
    
}