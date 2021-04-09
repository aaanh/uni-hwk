#include "graph.h"


Graph::Graph() 
{
    
}

Graph::~Graph() 
{
    
}

bool Graph::addNode(Node& n) 
{
    bool flag;
    // check if node_count is valid and add
    if (this->node_count < MAX_NODE_COUNT) {
        node_list.push_back(&n);
        node_count++;
        // cout << node_count << endl;
        // cout << "Node added" << endl;
        flag = true;
    } else {
        cout << "Error adding node.\n";
        flag = false;
    }
    return flag;
}

bool Graph::addEdge(Edge& e) 
{
    // check edge needs a graph containing >= 2 nodes
    if (node_count + node_count <= 1) {
        cout << "Not enough nodes.\n";
        return 0;
    } else {
        for (auto edge : edge_list) {
            // check edge exist, add when not exist
            if (*find(edge->getNodePair().begin(), edge->getNodePair().end(), e.getNodePair()[0]) && *find(edge->getNodePair().begin(), edge->getNodePair().end(), e.getNodePair()[1])) {
                cout << "Edge already existed in undirected graph.\n";
                return 0;
            } else {
                edge_list.push_back(&e);
                edge_count++;
                return 1;
            }
        }
    }
}

bool Graph::rmNode(int index) 
{
    if (node_list[index]) {
        int counter = 0;
        for (auto edge : edge_list) {
            if (*find(edge->getNodePair().begin(), edge->getNodePair().end(), node_list[index])) {
                rmEdge(counter);
            }
            counter++;
        }
        node_list.erase(node_list.begin() + index);
        node_count--;
        return 1;
    } else {
        cout << "Node does not exist at index or index is OOB.\n";
        return 0;
    }       
}

bool Graph::rmEdge(int index) 
{
    edge_list.erase(edge_list.begin() + index);
    edge_count--;
}

bool Graph::rmEdge(Node& n1, Node& n2) 
{
    int counter = 0;
    for (auto edge : edge_list) {
        if (*find(edge->getNodePair().begin(), edge->getNodePair().end(), &n1) && *find(edge->getNodePair().begin(), edge->getNodePair().end(), &n2)) {
            rmEdge(counter);
        }
        counter++;
    }
}

unsigned long int Graph::searchNode(unsigned long node_id) 
{
    for (size_t i = 0; i <= node_list.size(); i++) {
        if (node_list[i]->getNodeId() == node_id) {
            return i;
            break;
        } else {
            cout << "Node with node_id = " << node_id << " does not exist.\n";
            return -1;
        }
    }
}

Node Graph::getNode(unsigned long int index) 
{
    return *node_list[index];
}

unsigned long int Graph::getNodeCount() 
{
    return node_count;
}

unsigned long int Graph::getEdgeCount() 
{
    return edge_count;
}

vector<Node*> Graph::getNodeList() 
{
    return this->node_list;
}

vector<Edge*> Graph::getEdgeList() 
{
    return this->edge_list;
}

void Graph::display() 
{
    
}

bool Graph::clean() 
{
    
}
