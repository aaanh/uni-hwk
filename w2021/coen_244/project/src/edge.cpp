
#include "edge.h"

Edge::Edge() 
{
    
}

Edge::Edge(Node& n1, Node& n2) 
{
    addNodePair(n1, n2);
}

Edge::~Edge() 
{
    
}

bool Edge::addNodePair(Node& n1, Node& n2) 
{
    node_pair.push_back(&n1);
    node_pair.push_back(&n2);
    return 1;
}

vector<Node*> Edge::getNodePair() 
{
    return node_pair;
}
