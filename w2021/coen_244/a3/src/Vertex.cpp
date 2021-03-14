#include "Vertex.h"

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

bool Vertex::SetVertexValue(string value)
{
    this->value = value;
}

string Vertex::GetVertexValue()
{
    return this->value;
}