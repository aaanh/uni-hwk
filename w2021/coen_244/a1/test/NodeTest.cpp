#include <iostream>
#include "../include/Node.h"

void PressEnter() {
    cout << "Press [ENTER] to continue...";
    cin.get();
}

int main() {
    cout << "Testing Node class" << endl;

    // Creating dummy nodes
    Node node_1;
    Node node_2;

    // Testing methods
    cout << "Node 1: " << endl;
    node_1.PrintNode();

    PressEnter();

    cout << "Node 2: " << endl;
    node_2.PrintNode();
    
    // Choose which node to change value
    int choice;
    cout << "Choose node to modify: ";
    cin >> choice;
    cin.ignore(256, '\n');

    switch(choice) {
        case 1:
        {
            cout << "Change data value for Node 1..." << endl;
            cout << "Enter new data value: ";
            string new_value;
            cin >> new_value;
            node_1.SetValue(new_value);
            cout << "Updated Node 1: " << endl;
            node_1.PrintNode();
            break;
        }
        case 2:
        {
            cout << "Change data value for Node 2..." << endl;
            cout << "Enter new data value: ";
            string new_value;
            cin >> new_value;
            node_2.SetValue(new_value);
            cout << "Updated Node 2: " << endl;
            node_2.PrintNode();    
            break;
        }
        default:
            cout << "\nTHROW ERROR: Out of bounds" << endl;
            break;
    }

    // Cloning a node
    cout << "Now cloning node_1 and node_2 into new nodes..." << endl;
    Node cloned_node_1 = node_1.Clone();
    Node cloned_node_2 = node_2.Clone();

    // Printing new nodes info
    cloned_node_1.PrintNode();
    cloned_node_2.PrintNode();

    cout << "\n ----- End of NodeTest.cpp -----" << endl;
    
    PressEnter();
}