#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() {
    vector<int> deck;
    
    // init the vector for deck of 2020 cards
    for (auto i=1; i <= 2020; i++) {
        deck.push_back(i);
        cout << "Init " << deck[i-1] << " at pos " << i - 1 << endl; 
    }

    // looping

    while (true) {
        size_t iterator = 0;
        for (size_t i = 0; i <= deck.size(); i++) {
            int temp = deck[0];

            // erase first 2 elements in vector
            deck.erase(deck.begin());
            deck.erase(deck.begin());

            // add temp element to the tail
            deck.push_back(temp);
        }
        for (size_t j = 0; j <= deck.size(); j++) {
            int lineBreaker = 1;
            cout << deck[j] << " ";
            lineBreaker++;
            if (lineBreaker == 10) cout << endl;
        }
    }

    return 0;
}