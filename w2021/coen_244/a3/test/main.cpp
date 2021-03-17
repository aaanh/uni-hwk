#include <iostream>

#include "vertex.h"
#include "graph.h"
#include "edge.h"
#include "digraph.h"

using namespace std;

void HollisticTest_1() 
{
    // initialize graph object
    Graph *dg = new Directed_Graph();
    cout << "new directed graph object created." << endl;
    dg->AddVertex();
    
}

int main()
{
    cout << "Hollistic Test 1" << endl;
	HollisticTest_1();

    cout << "\nEnd of driver." << endl;
}