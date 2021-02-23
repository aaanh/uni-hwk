#include "ReferenceManager.h"

ReferenceManager::ReferenceManager(int capacity)
{
    for (size_t i = 0; i < capacity; i++) {
        ref_list[i] = new Reference();
    }
}

ReferenceManager::ReferenceManager(const ReferenceManager &rman) 
{
    SetListSize(rman.size);
    capacity = rman.capacity;
    for (int i = 0; i < size; i++) {
        ref_list[i] = rman.ref_list[i];
    }
}

ReferenceManager::~ReferenceManager() 
{
    
}

int ReferenceManager::GetListSize() 
{
    return this->size;
}

void ReferenceManager::SetListSize(int size) 
{
    this->size = size;
}

int ReferenceManager::GetCapacity() 
{
    return this->capacity;
}

bool ReferenceManager::AddReference(Reference *ref) 
{
    if (size < capacity) {
        ref_list[size] = ref;
        size++;
        cout << "size after adding: " << size << endl;
        return 1;
    } else {
        cout << "Reference Manager is full." << endl;
        return 0;
    }
}

int ReferenceManager::GetReferenceID(int index) 
{
    return ref_list[index]->GetUID();
}

/**
 * FIXME: Yeah, this DeleteReference is computationally expensive af.
 * Looking for a more optimized way (when dealing with these containers).
 * 
 */
bool ReferenceManager::DeleteReference(int index) 
{
    // cout << "size before delete: " << size << endl;
    bool op_flag = false;
    if (size == 0) {
        cout << "Nothing to delete." << endl;
        op_flag = false;
    } else {
        for (size_t i = index; i < size; i++) 
        {
            ref_list[i] = ref_list[i+1];
        }
        // cout << "size after delete: " << size << endl;
        op_flag = true;
    }
    size--;
    return op_flag;
}

bool ReferenceManager::SearchReference(int id) 
{
    bool op_flag = false;
    for (size_t i = 0; i < GetListSize(); i++) {
        if (ref_list[i]->GetUID() == id) {
            op_flag = true;
            break;
        }
    }
    return op_flag;
}

void ReferenceManager::PrintReferenceList() 
{
    cout << "=== List of current References ===" << endl;
    for (size_t i = 0; i < GetListSize(); i++) {
        ref_list[i]->PrintReferenceInfo();
    }
}

void ReferenceManager::PrintRMProperties() 
{
    cout << "=== Reference Manager Instance Properties ===" << endl;
    cout << "Capacity: " << GetListSize() << "/" << GetCapacity() << endl;
}
