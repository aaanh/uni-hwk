#include "digraph.h"

Directed_Graph::Directed_Graph() 
{
    
}

Directed_Graph::~Directed_Graph()
{

}

// Node vector list manipulations

bool Directed_Graph::AddNode(Node& that_v) 
{
    list_of_node.push_back(that_v);
    return 1;
}

bool Directed_Graph::AddNodes(vector<Node*> nodes)
{
    for (auto v : nodes) {
        this->AddNode(*v);
        num_of_node++;
    }
    return 1;
}

bool Directed_Graph::RemoveNode()
{
    this->list_of_node.pop_back();
    num_of_node--;
    return 1;
}

// Edge vector list manipulations

bool Directed_Graph::AddEdge(Edge& that_e)
{
    this->list_of_edge.push_back(that_e);
    num_of_edge++;
    return 1;
}

bool Directed_Graph::RemoveEdge(Edge& that_e)
{
    this->list_of_edge.pop_back();
    num_of_edge--;
    return 1;
}

bool Directed_Graph::SearchNode(const Node& that_v)
{
    bool flag;
    for (auto v : list_of_node)
    {
        if (v.GetNodeID() == that_v.GetNodeID())
            flag = 1;
        else 
        {
            flag = 0;
        }
    }
    return flag;
}

bool Directed_Graph::SearchEdge(const Edge& that_e)
{
    bool flag;
    for (auto e : list_of_edge)
    {
        if (e.GetStartNode().GetNodeID() == that_e.GetStartNode().GetNodeID() 
            && e.GetEndNode().GetNodeID() == that_e.GetEndNode().GetNodeID())
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        } 
    }
    return flag;
}

vector<Node> Directed_Graph::GetNodeList() const
{
    return this->list_of_node;
}

vector<Edge> Directed_Graph::GetEdgeList() const
{
    return this->list_of_edge;
}

int Directed_Graph::GetNumNodes() 
{
    return this->num_of_node;
}

int Directed_Graph::GetNumEdges() 
{
    return this->num_of_edge;
}

void Directed_Graph::Display()
{
    // using adjlist representation
    cout << "\nGraph representation by adjacency list: " << endl;
    for (auto v : list_of_node)
    {
        cout << "\nNode " << v.GetNodeID() << ":" << endl;
        for (auto e : this->list_of_edge) 
        {
            if (e.GetStartNode().GetNodeID() == v.GetNodeID())
            {
                cout << "> ";
                cout << e.GetStartNode().GetNodeValue() 
                << " = " << e.GetWeight() << " => " 
                << e.GetEndNode().GetNodeValue()
                << endl;
            }
        }
    }
}

bool Directed_Graph::Clean()
{
    this->list_of_edge.clear();
    this->list_of_node.clear();
    return 1;
}

bool Directed_Graph::operator == (Directed_Graph that_g) 
{
    bool flag = false;
    
    // check nodes
    if (this->num_of_node != that_g.GetNumNodes()) {
        flag = false;
    } else {
        for (auto n : this->list_of_node) {
            flag = that_g.SearchNode(n);
        }
    }

    // check edges
    if (this->num_of_edge != that_g.GetNumEdges()) {
        flag = false;
    } else {
        for (auto e : this->list_of_edge) {
            flag = that_g.SearchEdge(e);
        }
    }

    return flag;
}

void Directed_Graph::operator = (Directed_Graph that_g) 
{
    this->num_of_node = that_g.GetNumNodes();
    this->num_of_edge = that_g.GetNumEdges();
    this->list_of_node = that_g.GetNodeList();
    this->num_of_node = that_g.GetNumNodes();
}

bool Directed_Graph::operator > (Directed_Graph that_g) 
{
    unsigned long int sum_of_this = 0;
    unsigned long int sum_of_that = 0;

    for (auto e : this->GetEdgeList()) {
        sum_of_this += e.GetWeight();
    }

    for (auto e : that_g.GetEdgeList()) {
        sum_of_that += e.GetWeight();
    }

    return sum_of_this > sum_of_that;

}

std::ostream& operator<< (std::ostream &out, const Directed_Graph &dg) 
{
    // using adjlist representation
    out << "\nGraph representation by adjacency list: " << "\n";
    for (auto v : dg.GetNodeList())
    {
        out << "\nNode " << v.GetNodeID() << ":" << "\n";
        for (auto e : dg.GetEdgeList()) 
        {
            if (e.GetStartNode().GetNodeID() == v.GetNodeID())
            {
                out << "> ";
                out << e.GetStartNode().GetNodeValue() 
                << " = " << e.GetWeight() << " => " 
                << e.GetEndNode().GetNodeValue()
                << "\n";
            }
        }
    }
    return out;    
}


Directed_Graph Directed_Graph::operator + (Directed_Graph that_g) 
{
    Directed_Graph g_sum;

    g_sum.num_of_edge = this->GetNumEdges() + that_g.GetNumEdges();
    g_sum.num_of_node = this->GetNumNodes() + that_g.GetNumNodes();

    // add the nodes
    for (int i = 0; i <= this->GetNumNodes(); i++) {
        g_sum.AddNode(this->GetNodeList()[i]);
    }
    for (int i = 0; i <= that_g.GetNumNodes(); i++) {
        g_sum.AddNode(that_g.GetNodeList()[i]);
    }

    // add the edges
    for (int i = 0; i <= this->GetNumEdges(); i++) {
        g_sum.AddEdge(this->GetEdgeList()[i]);
    }
    for (int i = 0; i <= that_g.GetNumEdges(); i++) {
        g_sum.AddEdge(that_g.GetEdgeList()[i]);
    }
    
    return g_sum;
}

Directed_Graph Directed_Graph::operator ++ (int) 
{
    Directed_Graph temp = *this;
    vector<Edge> new_edge_list = temp.list_of_edge;
    for (auto e : new_edge_list) {
        e.SetWeight(e.GetWeight() + 1);
    }
    temp.list_of_edge = new_edge_list;
    return temp;
}

Directed_Graph &Directed_Graph::operator ++ () 
{
    for (auto e : this->list_of_edge) {
        e.SetWeight(e.GetWeight()+1);
    }
    return *this;
}