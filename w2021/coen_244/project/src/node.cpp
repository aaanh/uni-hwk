#include "node.h"

Node::Node() 
{
    
}

Node::Node(unsigned long id, string name, string jurisdiction, string jurisdiction_desc, string country_code, string country_name) 
{
    try {
        setNodeId(id);
        setName(name);
        setJurisdiction(jurisdiction);
        setJurisdictionDesc(jurisdiction_desc);
        setCountryCode(country_code);
        setCountryName(country_name);

    } catch (...) {
        cout << "Initialization error for Node object.\n";
    }
}

Node::Node(const Node& n) : node_id(n.node_id), 
                            name(n.name), 
                            jurisdiction(n.jurisdiction), 
                            jurisdiction_desc(n.jurisdiction_desc), 
                            country_code(n.country_code),
                            country_name(n.country_name) 
                            {}

Node::~Node() 
{
    
}

bool Node::setNodeId(unsigned long int node_id) 
{
    this->node_id = node_id;
    return 1;
}

bool Node::setName(string name) 
{
    try {
        this->name = name;
        return 1;
    } catch (...) {
        cout << "Bad name input.\n";
        return 0;
    }
}

bool Node::setJurisdiction(string jurisdiction) 
{
    try {
        this->jurisdiction = jurisdiction;
        return 1;
    } catch (...) {
        cout << "Bad jurisdiction input.\n";
        return 0;
    }
}

bool Node::setJurisdictionDesc(string jurisdiction_desc) 
{
    try {
        this->jurisdiction_desc = jurisdiction_desc; 
        return 1;
    } catch (...) {
        cout << "Bad jurisdiction_desc input.\n";
        return 0;
    }
}

bool Node::setCountryCode(string country_code) 
{
    try {
        this->country_code = country_code;
        return 1;
    } catch (...) {
        cout << "Bad country_code input.\n";
        return 0;
    }
}

bool Node::setCountryName(string country_name) 
{
    try {
        this->country_name = country_name;
        return 1;
    } catch (...) {
        cout << "Bad country_name input.\n";
        return 0;
    }
}

unsigned long int Node::getNodeId() 
{
    return this->node_id;
}

string Node::getName() 
{
    return this->name;
}

string Node::getJurisdiction() 
{
    return this->jurisdiction;
}

string Node::getJurisdictionDesc() 
{
    return this->jurisdiction_desc;
}

string Node::getCountryCode() 
{
    return country_code;
}

string Node::getCountryName() 
{
    return country_name;
}

void Node::printAttributes() 
{
    cout << "(Node attributes)\nnode_id,name,jurisdiction,jurisdiction_desc,country_code,country_name" << "\n";
}

void Node::print() 
{
    cout << getNodeId() << "," << getName() << "," 
    << getJurisdiction() << "," << getJurisdictionDesc() << "," 
    << getCountryCode() << "," << getCountryName() << "\n";
}
