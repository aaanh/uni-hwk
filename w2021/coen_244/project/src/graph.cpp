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
    } else if (edge_count == 0)
    {
        edge_list.push_back(&e);
        edge_count++;
    } else {
        for (auto edge : edge_list)
        {
            if (*edge == e)
            {
                // cout << "Edge existed.\n";
                break;
            } else {
                edge_list.push_back(&e);
                edge_count++;
                break;
            }
        }
    }
    return 1;
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
    return 1;       
}

bool Graph::rmEdge(int index) 
{
    edge_list.erase(edge_list.begin() + index);
    edge_count--;
    return 1;
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
    return 1;
}

unsigned long int Graph::searchNode(unsigned long node_id) 
{
    int id;
    for (size_t i = 0; i <= node_list.size(); i++) {
        if (node_list[i]->getNodeId() == node_id) {
            id = i;
            break;
        } else {
            cout << "Node with node_id = " << node_id << " does not exist.\n";
            return -1;
        }
    }
    return id;
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

bool Graph::setNumOfEntries(unsigned long entries) 
{
    this->num_of_entries = entries;
    return 1;
}

unsigned long Graph::getNumOfEntries() 
{
    return num_of_entries;
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
    bool flag = false;
    unsigned long begin, end;
    unsigned long counter = 0;
    vector<string> checked;
    do {
        cout << "\nGraph display module:\n";
        cout << "Enter range for data display (0 - " << getNumOfEntries() << "): ";
        cin >> begin >> end;

        for (size_t i = begin; i <= end; i++)
        {
            checked.clear();
            cout << i <<  " (" << this->getNodeList()[i]->getCountryCode() << ") " << this->getNodeList()[i]->getName();
            checked.push_back(this->getNodeList()[i]->getName());
            for (auto e : this->getEdgeList())
            {
                if ((this->getNodeList()[i]->getCountryCode() == e->getNodePair()[0]->getCountryCode()) && !(find(checked.begin(), checked.end(), e->getNodePair()[1]->getName()) != checked.end()))
                {
                    cout << " = " <<  e->getNodePair()[1]->getName();
                    checked.push_back(e->getNodePair()[1]->getName());
                    counter++;
                }
                if (counter == 3)
                {
                    cout << "\n";
                    counter = 0;
                }
            }
            cout << "\n";
        
        }

    } while (!flag);
}

bool Graph::clean() 
{
    return 1;
}
