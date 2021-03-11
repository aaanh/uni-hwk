#pragma once

// Standard libs
#include <string>

// Project libs
#include "Edge.h"
#include "Vertex.h"

using namespace std;

class Graph
{
    public:
        Graph();                                // Default constructor
        virtual ~Graph();                       // Destructor

        virtual bool    AddVertex();            // Add a Vertex class obj
        virtual bool    AddVertices();

        virtual bool    RemoveVertex();
        
        virtual bool    AddEdge();

        virtual bool    RemoveEdge();

        virtual bool    SearchVertex();

        virtual bool    SearchEdge();

        virtual string  toString () const;

        virtual bool    clean();

    private:
        


};