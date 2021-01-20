#include <iostream>

using namespace std;

int main() {

    // Init vars
    string username;
    int h, w;

    // Declaring functions for modularity
    bool CheckWidth(int w);
    bool DrawAgain();
    void PressEnter();

    // Program intro (just a bit RPG and pop subculture references for added amusement)
    cout << "# You woke up a bit disoriented but before you can process anything. You hear a voice in your head." << endl;
    PressEnter();
    cout << "# Administrator: You're finally awake. Got hit by truck-kun?" << endl;
    PressEnter();
    cout << "# Administrator: What's your name, traveller? " << endl;
    cout << "> My name is ";
    cin >> username;
    cout << endl;

    cout << ">>> Welcome " << username << " to Chaldea <<<\n\nFirst you will need a house to take shelter before you can defeat the demon king.\n" << endl;
    cout << "# Build a house, you will." << endl;
    cout << "-----------------------------------" << endl;

    // Program body
    do {
        int  tries = 0;
        do {
            if (tries < 3) {
            tries++;
            cout << "Please enter the dimensions for your house now (H x W)" << endl;
            cout << "Note: Width must be even and larger than 2" << endl;
            cout << "-----------------------------------" << endl;
            cout << "# Try " << tries << "/3 > ";
            cout << "Enter dimensions here: ";
            cin >> h >> w;
            cout << "\n> I want a house with "
                    << "height of " << h << " and "
                    << "width of " << w << ", please."
                    << "\n\n";
            } else {
                cout << tries << " tries were made. \nYou traveller cannot even follow instructions. \nWe shall wait until another reincarnation. \nGoodbye, " << username << "\n\n";
                exit(EXIT_FAILURE);
            };
        } while (CheckWidth(w) == false);

        if (CheckWidth(w) == true) {
            // Roof construction
            for (int i = 2; i <= w;) {
                for (int k = (w-i)/2+1; k >= 2; k--) {
                    cout << " ";
                }
                for (int j = 2; j <= i; j+=2) {
                    cout << "**";
                }
                cout << "\n";
                i+=2;
            }
            // Body construction
            for (int m = h+1; m >= 1; m--) {
                if (m == 1) {
                    for (int i = 1; i <= w; i++) {
                        cout << "-";
                    }
                }
                else {
                    cout << "|";
                    for (int j = 1; j <= w-2; j++) {
                        cout << " ";
                    }
                    cout << "|";
                }
                cout << "\n";
            }
        }

    } while (DrawAgain() == true);

    return 0;
}

// function to check width specs

bool CheckWidth(int w) {
    if (w % 2 == 0 && w > 2) {
        return true;
    } else {
        cout << "> Wrong specs for width!" << "\n\n";
        return false;
    }
}

// DrawAgain flag function

bool DrawAgain() {
    char flag;
    cout << "Do you wanna build a sno... another house? (y/n) > ";
    cin >> flag;
    if (flag == 'y' || flag == 'Y') {
        cout << "\n";
        return true;
    }
    else {
        return false;
    }
}

// I don't want to keep writing the same lines multiple times

void PressEnter() {
    cout << "Press enter to continue...";
    getchar();
    cout << endl;
}
