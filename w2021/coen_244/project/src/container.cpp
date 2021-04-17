#include "container.h"

Container::Container() 
{
    
}

Container::Container(const Container& c)
{
    this->container = c.getContainer();
}

Container::~Container() 
{
    
}

GraphBase* Container::getGraph(int c_index) const
{
    return this->container[c_index];
}

void Container::addGraph(GraphBase* g)
{
    this->container.push_back(g);
}

vector<GraphBase*> Container::getContainer() const
{
    return this->container;
}
