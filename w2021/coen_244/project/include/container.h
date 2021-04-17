#ifndef CONTAINER_H
#define CONTAINER_H

#include <vector>

#include "graph_base.h"
#include "node.h"
#include "edge.h"

class Container
{
    public:
        Container();
        Container(const Container& c);
        ~Container();

        GraphBase* getGraph(int c_index) const;
        void addGraph(GraphBase* g);
        vector<GraphBase*> getContainer() const;

    private:
        vector<GraphBase*> container;
        int size = container.size();
};

#endif