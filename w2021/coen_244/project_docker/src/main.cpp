#include "main.h"

int main(int argc, char const* argv[])
{
	TestDataUtils();
}

void TestDataUtils() 
{
    ifstream data;
    Graph graph;
    openFiles(patchDataPath(), data);
    dataParser(graph, data);
}