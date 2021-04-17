#include "main.h"

int main()
{
    Graph graph = TestDataUtils();
    TestIO(graph);
    TestGraphDisplay(graph);
}

Graph TestDataUtils() 
{
    cout << "Data directory\n";
    string path = patchDataPath();
    indexDirectory(path);
    
    cout << "Initialize objects\n";
    ifstream data;
    Graph graph;

    // open files
    openFiles(patchDataPath(), data);
    dataParser(graph, data);
    
    return graph;
}

void TestIO(Graph graph)
{
    auto node_list = graph.getNodeList();
    auto edge_list = graph.getEdgeList();

    cout << "Testing Node accesors:\n";
    cout << "> Print column names and all attributes of all nodes\n";
    system("pause");
    node_list[0]->printAttributes();
    system("pause");
    for (auto n : node_list)
    {
        n->print();
    }

    cout << "Testing Edge accessors:\n";
    cout << "> Print ID of node pair\n";
    cout << "node_1\tnode_2\n";
    system("pause");
    int edge_counter = 0;
    for (auto e : edge_list)
    {
        cout << e->getNodePair()[0]->getNodeId() << "," << e->getNodePair()[1]->getNodeId() << "\n";
        if (edge_counter == 1000) break;
        edge_counter++;
    }
}

void TestGraphDisplay(Graph graph)
{
    // display graph
    graph.display();
}