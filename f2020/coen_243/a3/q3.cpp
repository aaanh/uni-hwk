#include <iostream>

using namespace std;

void moveRight() {

}

void moveLeft() {

}

void displayGrid() {

}

void rebootPos() {

}

void showArray() {

}

void menu(int choice) {
    switch(choice) {
        case 1:
            moveRight();
            break;
        case 2:
            moveLeft();
            break;
        case 3:
            displayGrid();
            break;
        case 4:
            rebootPos();
            break;
        case 5:
            showArray();
            break;
        case 6:
            cout << "Program will now exit" << endl;
            exit(0);
            break;

    }   
}

int main() {
    array<int, 9> main_arr;
    int cur_pos = 0; // store current position, init to 0
    int choice;

    // initialize the array
    for (size_t i = 0; i < main_arr.size(); i++) {
        main_arr[i] = 0;
    }
    
    // control menu
    do {
        cout << "Controller menu:" << endl;
            << "1. Right" << endl;
            << "2. Left" << endl;
            << "3. Display" << endl;
            << "4. Reboot" << endl;
            << "5. Show array" << endl;
            << "6. Exit" << endl;
        cin >> choice;
    } while (choice != 6);



    return 0;
}