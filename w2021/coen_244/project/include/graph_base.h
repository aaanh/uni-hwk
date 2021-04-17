#ifndef GRAPH_BASE_H
#define GRAPH_BASE_H

#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

#include "edge.h"
#include "node.h"

using namespace std;

class GraphBase
{
    public:
        GraphBase() {};
        virtual ~GraphBase() {};
        
        // entity ops
        virtual bool addNode(Node&) = 0;
        virtual bool addEdge(Edge&) = 0;

        virtual bool rmNode(int index) = 0;
        virtual bool rmEdge(int index) = 0;
        virtual bool rmEdge(Node&, Node&) = 0;

        virtual unsigned long searchNode(unsigned long node_id) = 0;
        virtual Node getNode(unsigned long) = 0;

        virtual unsigned long getNodeCount() = 0;
        virtual unsigned long getEdgeCount() = 0;

        // data ops
        // virtual bool readDatabase(string path) = 0;
        // virtual bool addDatabase() = 0;
        virtual bool setNumOfEntries(unsigned long) = 0; // done
        virtual unsigned long getNumOfEntries() = 0; // done

        // list ops
        virtual vector<Node*> getNodeList() = 0;
        virtual vector<Edge*> getEdgeList() = 0;

        // graph ops
        virtual void display() = 0;
        virtual bool clean() = 0;
};

#endif