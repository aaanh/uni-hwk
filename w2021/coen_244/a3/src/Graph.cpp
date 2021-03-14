#include "Graph.h"

Graph::Graph() 
{
    
}

Graph::~Graph()
{

}

bool Graph::AddVertex(Vertex& v) 
{
    if (this->list_of_vertex[num_of_vertex].GetVertexID() != NULL)
    {
        this->list_of_vertex.push_back(v);
        return 1;
    }
    else return 0;
}

bool Graph::AddVertices(Vertex* vertices)
{
    return 0;
}

bool Graph::RemoveVertex()
{
    this->list_of_vertex.pop_back();
}

bool Graph::SearchVertex(const Vertex& that_v)
{
    for (auto v : list_of_vertex)
    {
        if (v.GetVertexID() == that_v.GetVertexID())
            return 1;
        else return 0;
    }
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