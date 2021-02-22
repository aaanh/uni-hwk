#pragma once

#include "Reference.h"

#include <array>

class ReferenceManager
{
    public:
        ReferenceManager(/* args */); // default constructor
        ReferenceManager(int capacity); // overload constructor
        ~ReferenceManager(); // destructor

        /**
         * Add a reference object into the reference_list array
         * @param Reference &ref
         * @return 1 if successfully added, 0 if unsuccessful or out-of-bounds
         * 
         */
        bool AddReference(Reference &ref);

        /**
         * Delete a reference object from the reference_list array and shift array elements to begin
         * @param int position
         * @return 1 if the existing reference object at the position in the array and successfully deleted;
         * 0 (op failure due to) the reference object is not found at the position in the array
         * 
         */
        bool DeleteReference(int position);

        /**
         * Search for existence of reference with <int> id
         * @param int id
         * @return 1 if found, 0 if not found
         * 
         */
        bool SearchReference(int id);

        /**
         * Get the <int> id of the reference object at <int> position
         * @param int position
         * @return <int> id
         * 
         */
        int GetID(int position);

        /**
         * Get the size of the ReferenceManager object by calculating
         * existing number of Reference class objects in the reference_list array
         * @return <int> size
         * 
         */
        int GetSize();


    private:
        const int CAPACITY{500}; 
        Reference **ref_arr = new Reference*[CAPACITY];
        int size = GetSize();
};