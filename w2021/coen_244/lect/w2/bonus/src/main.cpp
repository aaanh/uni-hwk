#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 2020> deck;
    cout << "Array size: " << sizeof(deck)/sizeof(int) << endl;

    // Initialize the deck from 1 to 2020 and 

    for (size_t i=0; i<sizeof(deck)/sizeof(int); i++) {
        deck[i] = i+1;
        
        // print the debugging msg
        cout << "Init " << deck[i] << " to deck at position: " << i+1 << endl;
    }
    
    // Performing the ops on the deck

    while (true) {
        for (auto i : deck) {
            cout << i << endl;
        }
    }

    return 0;
}