#include "../include/NodeList.h"

using namespace std;

NodeList::NodeList() {
    
}

void NodeList::PrintAllNodes() {
    // iterate through each Node object and call its PrintNode() function
    for (size_t i = 0; i < this->LIST_SIZE; i++) {
        items++->PrintNode();
    }
}

// This is input handler method for checking if node exists
bool NodeList::CheckNodeByUID(size_t param_uid = 0) {
    bool flag = false;
    if (param_uid == 0) {
        int uid;
        cout << "Enter UID to search: ";
        cin >> uid;
        for (size_t i = 0; i < this->LIST_SIZE; i++) {
            if (items++->GetUID() == uid) {
                flag = true;
                break;
            }
            else flag = false;
        }
    } else {
        for (size_t i = 0; i < this->LIST_SIZE; i++) {
            if (items++->GetUID() == param_uid) {
                flag = true;
                break;
            }
            else flag = false;
        }
    }
    return flag;
}

bool NodeList::CheckNodeByValue(string param_value = "N/A") {
    bool flag = false;
    if (param_value == "N/A") {
        string value;
        cout << "Enter data value to search: ";
        cin >> value;
        for (size_t i = 0; i < this->LIST_SIZE; i++) {
            if (items++->GetValue() == value) {
                flag = true;
                break;
            }
            else flag = false;
        }
    } else {
        for (size_t i = 0; i < this->LIST_SIZE; i++) {
            if (items++->GetValue() == param_value) {
                flag = true;
                break;
            }
            else flag = false;
        }
    }
    return flag;
}

// This method does the preprocessing for the node search
bool NodeList::CheckNodeExist(size_t uid = 0, string value = "N/A") {
    bool flag;
    // prompts user for input if no parameters are passed into the method
    if (uid == 0 && value == "N/A") {
        string user_query; // String variable to store user query
        int choice;
        cout << "1. Search by UID\n2. Search by data value\n> ";
        cin >> choice;
        switch(choice) {
            case 1:
            {
                flag = CheckNodeByUID();
                break;
            }
            case 2:
            {
                flag = CheckNodeByValue();
                break;
            }
            default:
                cout << "Invalid input. Cancelling search..." << endl;
                break;
        }
    }
    else {
        flag = CheckNodeByUID(uid) | CheckNodeByValue(value); // return true (1) if either UID or value gets a hit, false (0) otherwise
    }
    return flag;
}

Node NodeList::GetNode(size_t uid) {
    Node node_temp; // to save exhaustive search result from loop
    for (size_t i; i < LIST_SIZE; i++) {
        if (this->items[i].GetUID() == uid) {
            node_temp = this->items[i];
            break;
        }
        else {
            cout << "Node with UID " << uid << "does not exist.\n";
        }
    }
    return node_temp; 
}

void NodeList::ModifyNode(size_t uid, string new_value) {
    items[uid-1].SetValue(new_value);
}