#include "digraph.h"

Directed_Graph::Directed_Graph() 
{
    
}

Directed_Graph::~Directed_Graph()
{

}

// Vertex vector list manipulations

bool Directed_Graph::AddVertex(Vertex& that_v) 
{
    list_of_vertex.push_back(that_v);
    return 1;
}

bool Directed_Graph::AddVertices(vector<Vertex*> vertices)
{
    for (auto v : vertices) {
        this->AddVertex(*v);
    }
    return 1;
}

bool Directed_Graph::RemoveVertex()
{
    this->list_of_vertex.pop_back();
}

// Edge vector list manipulations

bool Directed_Graph::AddEdge(Edge& that_e)
{
    this->list_of_edge.push_back(that_e);
}

bool Directed_Graph::RemoveEdge(Edge& that_e)
{

}

bool Directed_Graph::SearchVertex(const Vertex& that_v)
{
    for (auto v : list_of_vertex)
    {
        if (v.GetVertexID() == that_v.GetVertexID())
            return 1;
        else 
        {
            return 0;
        }
    }
}

bool Directed_Graph::SearchEdge(const Edge& that_e)
{
    for (auto e : list_of_edge)
    {
        if (e.GetStartVertex().GetVertexID() == that_e.GetStartVertex().GetVertexID() 
            && e.GetEndVertex().GetVertexID() == that_e.GetEndVertex().GetVertexID())
        {
            return 1;
        }
        else
        {
            return 0;
        } 
    }
}

vector<Vertex> Directed_Graph::GetVertexList() const
{
    return this->list_of_vertex;
}

vector<Edge> Directed_Graph::GetEdgeList() const
{
    return this->list_of_edge;
}

string Directed_Graph::toString() const
{

}

bool Directed_Graph::Clean()
{
    this->list_of_edge.clear();
    this->list_of_vertex.clear();
}