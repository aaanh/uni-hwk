#include <iostream>

#include "node.h"
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
    
    // initialize some nodes
    Node *v1 = new Node(1, "a");
    Node *v2 = new Node(2, "b");
    Node *v3 = new Node(3, "c");
    Node *v4 = new Node(4, "d");
    Node *v5 = new Node(5, "e");
    cout << "\n5 new nodes initialized" << endl;
    PressEnter();

    // put created nodes into a storage vector
    vector<Node*> v_list;
    v_list.push_back(v1);
    v_list.push_back(v2);
    v_list.push_back(v3);
    v_list.push_back(v4);
    v_list.push_back(v5);
    cout << "created and stored in a vector" << endl;
    PressEnter();

    // print nodes info to check
    for (auto v : v_list) {
        v->PrintNodeInfo();
        PressEnter();
    }

    // add one node
    cout << "adding single node v1" << endl;
    dg.AddNode(*v1);
    cout << "v1 added" << endl;
    dg.GetNodeList()[0].PrintNodeInfo();
    PressEnter();
    
    // remove that added node
    dg.RemoveNode();
    cout << "Node removed" << endl;
    cout << "Node list size after removal: " << dg.GetNodeList().size() << endl;
    PressEnter();

    // add multiple nodes
    dg.AddNodes(v_list);
    for (auto v : v_list) {
        v->PrintNodeInfo();
        PressEnter();
    }
    PressEnter();
    
    // initilize a bunch of edges
    Edge *e1 = new Edge(1, dg.GetNodeList()[1], dg.GetNodeList()[0]);
    Edge *e2 = new Edge(5, dg.GetNodeList()[2], dg.GetNodeList()[3]);
    Edge *e3 = new Edge(2, dg.GetNodeList()[3], dg.GetNodeList()[4]);
    Edge *e4 = new Edge(8, dg.GetNodeList()[4], dg.GetNodeList()[2]);
    Edge *e5 = new Edge(3, dg.GetNodeList()[0], dg.GetNodeList()[1]);
    Edge *e6 = new Edge(2, dg.GetNodeList()[0], dg.GetNodeList()[2]);
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