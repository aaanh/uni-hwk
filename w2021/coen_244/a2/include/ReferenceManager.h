#pragma once

#include "Reference.h"

#include <array>

class ReferenceManager
{
    public:
        /**
         * Regular constructor with <int> size
         * @param int capacity
         * 
         */
        ReferenceManager(int capacity);

        ReferenceManager(const ReferenceManager &rman); // Copy constructor

        virtual ~ReferenceManager();

        int GetListSize(); // return the size value
        void SetListSize(int); // set the size value

        int GetCapacity(); // return the capacity

        bool AddReference(Reference *ref); // add a Reference object at first empty index
        
        int GetReferenceID(int index); // get Reference object ID at index

        bool DeleteReference(int index); // delete Reference object at index and shift left to fill

        bool SearchReference(int id); // check existence of Reference with ID

        void PrintReferenceList(); // this calls the reference print function
        void PrintRMProperties(); // this prints the private data members

    private:
        Reference **ref_list;
        int capacity{500};
        int size{0};
};