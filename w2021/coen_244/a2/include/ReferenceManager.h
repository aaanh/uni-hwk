#pragma once

#include "Reference.h"

#include <array>


class ReferenceManager
{
    public:
        ReferenceManager(/* args */);
        ReferenceManager(int capacity);
        ~ReferenceManager();

        bool AddReference(Reference &ref);
        int GetID(int position);
        bool DeleteReference(int position);
        bool SearchReference(int id);


    private:
        const int CAPACITY{500};
        Reference *reference_list{ new Reference[CAPACITY]{} };
        int size;
};