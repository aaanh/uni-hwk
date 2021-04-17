#include "main.h"

int main()
{
	TestDataUtils();
}

void TestDataUtils() 
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
    
    // display graph
    graph.display();
}