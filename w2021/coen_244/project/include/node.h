#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>

using namespace std;

class Node {
    public:
        Node();
        Node(unsigned long int, string, string, string, string, string);
        Node(const Node&);
        ~Node();

        bool setNodeId(unsigned long int);
        bool setName(string);
        bool setJurisdiction(string);
        bool setJurisdictionDesc(string);
        bool setCountryCode(string);
        bool setCountryName(string);
        
        unsigned long int getNodeId();
        string getName();
        string getJurisdiction();
        string getJurisdictionDesc();
        string getCountryCode();
        string getCountryName();

    private:
        unsigned long int node_id;
        string name;
        string jurisdiction;
        string jurisdiction_desc;
        string country_code;
        string country_name;
};

#endif