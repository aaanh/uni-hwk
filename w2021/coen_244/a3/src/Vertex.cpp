#include "vertex.h"

Vertex::Vertex()
{

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