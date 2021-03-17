#include <iostream>

#include "vertex.h"
#include "graph.h"
#include "edge.h"
#include "digraph.h"

using namespace std;

// test functions declarations

void HollisticTest_1();


// main driver

int main()
{
    cout << "Hollistic Test 1" << endl;
	HollisticTest_1();

    cout << "\nEnd of driver." << endl;
}

// test functions implementations

void HollisticTest_1() {
    // initialize graph object
    Directed_Graph dg;
    cout << "\nnew directed graph object created." << endl;
    
    // initialize some vertices
    Vertex *v1 = new Vertex(1, "1");
    Vertex *v2 = new Vertex(2, "2");
    Vertex *v3 = new Vertex(3, "3");
    Vertex *v4 = new Vertex(4, "4");
    Vertex *v5 = new Vertex(5, "5");
    cout << "\n5 new vertices initialized" << endl;

    // put created vertices into a storage vector
    vector<Vertex*> v_list;
    v_list.push_back(v1);
    v_list.push_back(v2);
    v_list.push_back(v3);
    v_list.push_back(v4);
    v_list.push_back(v5);
    cout << "created and stored in a vector" << endl;

    // print vertices info to check
    for (auto v : v_list) {
        v->PrintVertexInfo();
    }

    // add one vertex
    dg.AddVertex(*v1);
    cout << "v1 added" << endl;
    dg.GetVertexList()[0].PrintVertexInfo();
    // add multiple vertices
    
}