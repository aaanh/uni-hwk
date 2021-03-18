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
        num_of_vertex++;
    }
    return 1;
}

bool Directed_Graph::RemoveVertex()
{
    this->list_of_vertex.pop_back();
    num_of_vertex--;
}

// Edge vector list manipulations

bool Directed_Graph::AddEdge(Edge& that_e)
{
    this->list_of_edge.push_back(that_e);
    num_of_edge++;
}

bool Directed_Graph::RemoveEdge(Edge& that_e)
{
    this->list_of_edge.pop_back();
    num_of_edge--;
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

int Directed_Graph::GetNumVertices() 
{
    return this->num_of_vertex;
}

int Directed_Graph::GetNumEdges() 
{
    return this->num_of_edge;
}

void Directed_Graph::Display()
{
    // using adjlist representation
    cout << "\nGraph representation by adjacency list: " << endl;
    for (auto v : list_of_vertex)
    {
        cout << "\nVertex " << v.GetVertexID() << ":" << endl;
        for (auto e : this->list_of_edge) 
        {
            if (e.GetStartVertex().GetVertexID() == v.GetVertexID())
            {
                cout << "> ";
                cout << e.GetStartVertex().GetVertexValue() 
                << " = " << e.GetWeight() << " => " 
                << e.GetEndVertex().GetVertexValue()
                << endl;
            }
        }
    }
}

bool Directed_Graph::Clean()
{
    this->list_of_edge.clear();
    this->list_of_vertex.clear();
}