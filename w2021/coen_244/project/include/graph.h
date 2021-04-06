#ifndef GRAPH_H
#define GRAPH_H

#define MAX_NODE_COUNT 100000

#include <vector>
#include <string>

#include "node.h"
#include "edge.h"

using namespace std;

class Graph {
    public:
        Graph();
        ~Graph();

        // entity ops

        bool addNode(Node&); // done
        bool addEdge(Edge&); // done

        bool rmNode(int index);
        bool rmEdge(int index);
        bool rmEdge(const Node&, const Node&);

        unsigned long int searchNode(int node_id);
        Node getNode(unsigned long int);

        unsigned long int getNodeCount();
        unsigned long int getEdgeCount();

        // data ops

        bool readDatabase();
        bool addDatabase();

        // list ops

        vector<Node*> getNodeList();
        vector<Edge*> getEdgeList();

        // graph ops

        void display();
        bool clean();

    private:
        vector<Node*> node_list;
        vector<Edge*> edge_list;
        unsigned long int node_count = 0;
        unsigned long int edge_count = 0;

};

#endif