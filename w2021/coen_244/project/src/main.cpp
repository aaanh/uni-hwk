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
    // node and edge
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

    // graph
    cout << "\nTesting graph accessors:\n";
    try {
        graph.getEdgeCount();
        graph.getEdgeList();
        graph.getNode(1);
        graph.getNodeList();
        graph.getNodeCount();
        graph.getNumOfEntries();
        system("pause");
        system("read -n 1 -s -p \"Press any key to continue...\"");
    } catch (...)
    {
        cout << "One or many graph accessors malfunctioned.\n";
        system("pause");
        system("read -n 1 -s -p \"Press any key to continue...\"");
    }
    cout << "\nAll method calls passed." << "\n";
}

void TestGraphDisplay(Graph graph)
{
    // display graph
    graph.display();
}