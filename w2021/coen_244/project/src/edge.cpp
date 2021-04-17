
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

vector<Node*> Edge::getNodePair() const 
{
    return node_pair;
}

bool operator==(const Edge& lhs, const Edge& rhs) 
{
    bool flag;
    string a,b,c,d;
    a = lhs.getNodePair()[0]->getName();
    b = lhs.getNodePair()[1]->getName();
    c = rhs.getNodePair()[0]->getName();
    d = rhs.getNodePair()[1]->getName();
    flag = ((a == c && b == d) || (a == d && b == c) || (a == b) && (c == d));

    return flag;
}
