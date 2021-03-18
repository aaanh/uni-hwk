#ifndef VERTEX_H
#define VERTEX_H

// Standard libs
#include <string>
#include <iostream>

using namespace std;

class Vertex {
    public:
        Vertex(); // default constructor
        Vertex(int id, string value); // regular constructor, id and value
        Vertex(const Vertex&); // copy constructor
        virtual ~Vertex();

        bool    SetVertexID(int);
        bool    SetVertexValue(string);
        int     GetVertexID() const;
        string  GetVertexValue() const;

        void    PrintVertexInfo() const;

    private:
        int     id;
        string  value;
};

#endif