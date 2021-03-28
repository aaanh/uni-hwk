#ifndef DIGRAPH_H
#define DIGRAPH_H

#include "graph.h"

class Directed_Graph : public Graph 
{
    public:
        Directed_Graph();
        virtual ~Directed_Graph();
        
        bool    AddNode(Node&)          ; // Add a Node class obj
        bool    AddNodes(vector<Node*>); // Add multiple Node class obj using array of type Node
        bool    RemoveNode()              ; // Remove a Node class obj and remove the connecting Edge obj

        bool    AddEdge(Edge&)              ; // Add an Edge class obj
        bool    RemoveEdge(Edge&)           ; // Remove an Edge class obj
        
        bool    SearchNode(const Node&) ; // Search for a Node class obj
        
        bool    SearchEdge(const Edge&)     ; // Search for an Edge class obj

        vector<Node> GetNodeList() const;
        vector<Edge>   GetEdgeList() const  ;
        
        int     GetNumNodes()            ;
        int     GetNumEdges()               ;
        void    Display()                   ; // adjlist representation
        
        bool    Clean()                     ; // Wipe Graph class obj of Node and Edge

        // Operator overloading
        bool    operator == (Directed_Graph that_g); // strict
        void    operator = (Directed_Graph that_g); // 
        
        void    operator ++ (); // prefix increment
        void    operator ++ (int); // postfix increment
        
        bool    operator > (Directed_Graph);
        void    operator << (Directed_Graph);

        Directed_Graph operator + (Directed_Graph); // new Graph obj contains all nodes and edges of operands



    private:
        const int           MAX_NUM_VERTICES    = 500;
        const int           MAX_NUM_EDGES       = MAX_NUM_VERTICES*(MAX_NUM_VERTICES-1)/2; // general graph property
        
        unsigned int        num_of_node       = 0; // <= MAX_NUM_VERTICES
        unsigned int        num_of_edge         = 0; // <= MAX_NUM_EDGES

        vector<Node>      list_of_node; // STL vector storing nodes
        vector<Edge>        list_of_edge; // STL vector storing edgess
};

#endif