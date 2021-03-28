#include "node.h"

Node::Node()
{

}

Node::Node(int id, string value) 
{
    SetNodeID(id);
    SetNodeValue(value);
}

Node::Node(const Node &v)  
{
    SetNodeID(v.GetNodeID());
    SetNodeValue(v.GetNodeValue());
}

Node::~Node()
{

}

bool Node::SetNodeID(int id)
{
    this->id = id;
}

int Node::GetNodeID() const
{
    return this->id;
}

bool Node::SetNodeValue(string value)
{
    this->value = value;
}

string Node::GetNodeValue() const
{
    return this->value;
}

void Node::PrintNodeInfo() const
{
    cout << "Node info: " << endl;
    cout << "> ID   : " << GetNodeID() << endl;
    cout << "> Value: " << GetNodeValue() << endl;
}