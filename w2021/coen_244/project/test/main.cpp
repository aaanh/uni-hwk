#include <iostream>

#include "vertex.h"
#include "graph.h"
#include "edge.h"
#include "digraph.h"

using namespace std;

// test functions declarations
void HollisticTest_1();


// utility functions
void PressEnter();


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
    PressEnter();
    
    // initialize some vertices
    Vertex *v1 = new Vertex(1, "a");
    Vertex *v2 = new Vertex(2, "b");
    Vertex *v3 = new Vertex(3, "c");
    Vertex *v4 = new Vertex(4, "d");
    Vertex *v5 = new Vertex(5, "e");
    cout << "\n5 new vertices initialized" << endl;
    PressEnter();

    // put created vertices into a storage vector
    vector<Vertex*> v_list;
    v_list.push_back(v1);
    v_list.push_back(v2);
    v_list.push_back(v3);
    v_list.push_back(v4);
    v_list.push_back(v5);
    cout << "created and stored in a vector" << endl;
    PressEnter();

    // print vertices info to check
    for (auto v : v_list) {
        v->PrintVertexInfo();
        PressEnter();
    }

    // add one vertex
    cout << "adding single vertex v1" << endl;
    dg.AddVertex(*v1);
    cout << "v1 added" << endl;
    dg.GetVertexList()[0].PrintVertexInfo();
    PressEnter();
    
    // remove that added vertex
    dg.RemoveVertex();
    cout << "Vertex removed" << endl;
    cout << "Vertex list size after removal: " << dg.GetVertexList().size() << endl;
    PressEnter();

    // add multiple vertices
    dg.AddVertices(v_list);
    for (auto v : v_list) {
        v->PrintVertexInfo();
        PressEnter();
    }
    PressEnter();
    
    // initilize a bunch of edges
    Edge *e1 = new Edge(1, dg.GetVertexList()[1], dg.GetVertexList()[0]);
    Edge *e2 = new Edge(5, dg.GetVertexList()[2], dg.GetVertexList()[3]);
    Edge *e3 = new Edge(2, dg.GetVertexList()[3], dg.GetVertexList()[4]);
    Edge *e4 = new Edge(8, dg.GetVertexList()[4], dg.GetVertexList()[2]);
    Edge *e5 = new Edge(3, dg.GetVertexList()[0], dg.GetVertexList()[1]);
    Edge *e6 = new Edge(2, dg.GetVertexList()[0], dg.GetVertexList()[2]);
    cout << "A bunch of new edges initialized" << endl;
    PressEnter();

    // add edges into graph
    dg.AddEdge(*e1);
    dg.AddEdge(*e2);
    dg.AddEdge(*e3);
    dg.AddEdge(*e4);
    dg.AddEdge(*e5);
    dg.AddEdge(*e6);
    cout << "A bunch of those edges added to graph" << endl;
    PressEnter();

    // console.log(that_graph) eyy lmao, wrong language、 バーバカ!
    // print(dg) また違うよ、お前本気慣れるなさい！！！
    dg.Display();

}


// utility functions implementations
void PressEnter() 
{
    cout << "Press [ENTER] to continue...";
    cin.get();
}