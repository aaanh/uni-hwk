#include "vertex.h"

Vertex::Vertex()
{

}

Vertex::Vertex(int id, string value) 
{
    SetVertexID(id);
    SetVertexValue(value);
}

Vertex::~Vertex()
{

}

bool Vertex::SetVertexID(int id)
{
    this->id = id;
}

int Vertex::GetVertexID() const
{
    return this->id;
}

bool Vertex::SetVertexValue(string value)
{
    this->value = value;
}

string Vertex::GetVertexValue() const
{
    return this->value;
}

void Vertex::PrintVertexInfo() const
{
    cout << "Vertex info: " << endl;
    cout << "> ID   : " << GetVertexID() << endl;
    cout << "> Value: " << GetVertexValue() << endl;
}