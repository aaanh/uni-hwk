#ifndef GRAPH_H
#define GRAPH_H

#define MAX_NODE_COUNT 100000000

#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

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

        bool rmNode(int index); // done
        bool rmEdge(int index); // done
        bool rmEdge(Node&, Node&); // done

        unsigned long int searchNode(unsigned long node_id); // done
        Node getNode(unsigned long int); // done

        unsigned long int getNodeCount(); // done
        unsigned long int getEdgeCount(); // done

        // data ops
        bool readDatabase(string path); // done
        bool addDatabase(); // done

        // list ops
        vector<Node*> getNodeList(); // done
        vector<Edge*> getEdgeList(); // done

        // graph ops
        /** TODO: Implement during the weekends
        */
        void display();
        bool clean();

    private:
        vector<Node*> node_list;
        vector<Edge*> edge_list;
        unsigned long node_count = 0;
        unsigned long edge_count = 0;

};

#endif