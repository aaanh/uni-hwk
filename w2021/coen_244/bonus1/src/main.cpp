#include <iostream>
#include <array>
#include <vector>
#include <iomanip>

using namespace std;

void PressEnter() {
    cout << "Press [ENTER] to continue...";
    cin.get();
};

int main() {
    vector<int> deck;
    
    // init the vector for deck of 2020 cards
    for (auto i=1; i <= 2020; i++) {
        deck.push_back(i);
        // cout << "Init " << deck[i-1] << " at pos " << i - 1 << endl; 
    }

    cout << "Deck initialized" << endl;
    PressEnter();

    {
        int line_breaker = 1;
        for (size_t j = 0; j < deck.size(); j++) {
            cout << setw(5);
            cout << deck[j];
            line_breaker++;
            if (line_breaker == 100) {
                cout << endl;
                line_breaker = 1;
            };
        }
    }

    cout << "\n\nEntering loop..." << endl;
    PressEnter();

    // looping
    size_t iterator = 1;
    while (true) {
        
        cout << "--- SHUFFLE #" << iterator <<  " ---" << endl;
        PressEnter();
        // This is where the shuffling happens
        for (size_t i = 0; i <= deck.size(); i++) {
            int temp = deck[0];

            // erase first 2 elements in vector
            deck.erase(deck.begin());
            deck.erase(deck.begin());

            // add temp element to the tail
            deck.push_back(temp);
        }

        // This is where the display happens
        int line_breaker = 1; // line breaks when the flag satisfies set condition
        for (size_t j = 0; j < deck.size(); j++) {
            cout << setw(5);
            cout << deck[j];
            line_breaker++;
            if (line_breaker == 100) {
                cout << endl;
                line_breaker = 1;
            };
        }
        iterator++;
        cout << "\n\n";
    }

    return 0;
}