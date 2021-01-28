#include "../include/NodeList.h"
#include <iostream>
#include <array>

using namespace std;

void PressEnter() {
    cout << "Press [ENTER] to continue...";
    cin.get();
}

int main() {
    NodeList node_list; // init an empty NodeList object

    // Testing member functions of node_list object
    // #. MethodName( ... ) 0/9
    
    // 1. PrintAllNodes() 1/10
    cout << "Testing PrintAllNodes" << endl;
    node_list.PrintAllNodes();
    cout << "\n--- Test Completed ---\n" << endl;
    PressEnter();





    // 2. GetListSize() 2/10
    cout << "\nTesting GetListSize" << endl;
    if (node_list.GetListSize() == 500) cout << "Call GetListSize() success." << endl;
    else cout << "Call GetListSize() unsuccessful.\nExpected 500. Instead got: " << node_list.GetListSize() << endl;
    PressEnter();



    // 3. ModifyNode(size_t, string) 3/10
    cout << "\nTesting ModifyNode" << endl;
    for (size_t i=0; i < node_list.GetListSize(); i++) {
        // modify each iterated node and assign it a string value data converted from the current iterator size_t value in the loop
        node_list.ModifyNode(i, to_string(i+1));
    }
    cout << "Test loop done." << endl;
    cout << "\n--- ModifyNode Completed ---\n" << endl;
    PressEnter();



    // 4. DeleteNode(size_t) 4/10
    cout << "\nTesting DeleteNode" << endl;
    for (size_t i=0; i < node_list.GetListSize() - 1; i+=2) {
        // delete each iterated node by step of 2 by assigning the reserved keyword "N/A"
        node_list.DeleteNode(i);
    }
    cout << "\n--- DeleteNode Completed ---\n" << endl;
    PressEnter();




    // 5. PrintFilledNodes() 5/9
    cout << "\nTesting PrintFilledNodes" << endl;
    node_list.PrintFilledNodes();
    cout << "\n--- PrintFilledNodes Completed ---\n" << endl;
    PressEnter();




    // 6. PrintEmptyNodes() 6/10
    cout << "\nTesting PrintEmptyNodes" << endl;
    node_list.PrintEmptyNodes();
    cout << "\n--- PrintEmptyNodes Completed ---\n" << endl;
    PressEnter();




    // 7. CheckNodeByUID(size_t) 7/10
    cout << "\nTesting CheckNodeByUID" << endl;
    long uid_compare = 1;
    for (size_t i=1; i < node_list.GetListSize(); i+=10) { // automated looping to check for existence, iterated by step 3
        cout << "Check existence for node with UID: " << i << endl;
        if (node_list.GetItems()[i].GetUID() == uid_compare) {
            cout << "Yes" << endl;
        }
        uid_compare+=10;
    }
    cout << "\n--- CheckNodeByUID Completed ---\n" << endl;
    PressEnter();




    // 8. CheckNodeByValue(string) 8/10
    cout << "\nTesting CheckNodeByValue" << endl;
    string value_to_check = "1"; // define value to check for
    cout << "Check existence for node with value: " << value_to_check << endl;
    bool exist = node_list.CheckNodeByValue(value_to_check);
    cout << "Exist? " << exist << endl;
    cout << "\n--- CheckNodeByValue Completed ---\n" << endl;
    PressEnter();




    // 9. CheckNodeExist(size_t, string) 9/10
    cout << "\nTesting CheckNodeExist" << endl;
    exist = node_list.CheckNodeExist();
    cout << "Exist? " << exist;
    cout << "\n--- CheckNodeExist Completed ---\n" << endl;
    PressEnter();




    // 10. GetNode(size_t) 10/10
    cout << "\nTesting GetNode" << endl;
    for (size_t i = 0; i < 27; i += 2) {
        Node temp_node = node_list.GetNode(i);
        // call PrintNode() member function of temp_node
        temp_node.PrintNode();
    }
    cout << "\n--- All Tests Completed ---\n" << endl;
    PressEnter();
}