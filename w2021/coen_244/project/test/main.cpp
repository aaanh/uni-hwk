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
    cout << "\n----- Hollistic Test 1 -----" << endl;

	HollisticTest_1();

    cout << "\nEnd of driver, boissss. Skrrt skrrt." << endl;
}

// test functions implementations
void HollisticTest_1() {
    // initialize graph object
    Directed_Graph dg;
    cout << "\nnew directed graph object created." << endl;
    
    // initialize some vertices
    Vertex *v1 = new Vertex(1, "a");
    Vertex *v2 = new Vertex(2, "b");
    Vertex *v3 = new Vertex(3, "c");
    Vertex *v4 = new Vertex(4, "d");
    Vertex *v5 = new Vertex(5, "e");
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
    cout << "adding single vertex v1" << endl;
    dg.AddVertex(*v1);
    cout << "v1 added" << endl;
    dg.GetVertexList()[0].PrintVertexInfo();
    
    // remove that added vertex
    dg.RemoveVertex();
    cout << "Vertex removed" << endl;
    cout << "Vertex list size after removal: " << dg.GetVertexList().size() << endl;
    
    // add multiple vertices
    dg.AddVertices(v_list);
    
    // initilize a bunch of edges
    Edge *e1 = new Edge(1, dg.GetVertexList()[1], dg.GetVertexList()[0]);
    Edge *e2 = new Edge(5, dg.GetVertexList()[2], dg.GetVertexList()[3]);
    Edge *e3 = new Edge(2, dg.GetVertexList()[3], dg.GetVertexList()[4]);
    Edge *e4 = new Edge(8, dg.GetVertexList()[4], dg.GetVertexList()[2]);
    Edge *e5 = new Edge(3, dg.GetVertexList()[0], dg.GetVertexList()[1]);
    Edge *e6 = new Edge(2, dg.GetVertexList()[0], dg.GetVertexList()[2]);

    // add edges into graph
    dg.AddEdge(*e1);
    dg.AddEdge(*e2);
    dg.AddEdge(*e3);
    dg.AddEdge(*e4);
    dg.AddEdge(*e5);
    dg.AddEdge(*e6);

    // console.log(that_graph) eyy lmao
    dg.Display();

}