#include <iostream>
#include <array>

using namespace std;

// global var initialization

array<int, 9> main_arr;
int cur_pos = 0; // store current position, init to 0
int choice;
int size = main_arr.size();

// function definitions

// void moveRight() {

// }

// void moveLeft() {

// }

// void displayGrid() {

// }

array<int, 9> rebootPos(array<int, 9> main_arr, int size) {
    array<int, 9> loc_arr = main_arr;
    for (size_t i = 0; i < size; i++) {
        loc_arr[i] = 0;
    }
    loc_arr[0] = 1;
    return loc_arr;
}

void showArray(array<int, 9> main_arr, int size) {
    for (size_t i = 0; i < size; i++) {
        cout << main_arr[i];
    }
}

// menu

void menu(int choice) {
    switch(choice) {
        // case 1:
        //     moveRight();
        //     break;
        // case 2:
        //     moveLeft();
        //     break;
        // case 3:
        //     displayGrid();
        //     break;
        case 4:
            main_arr = rebootPos(main_arr, size);
            break;
        case 5:
            showArray(main_arr, size);
            break;
        case 6:
            cout << "Program will now exit" << endl;
            exit(0);
            break;

    }   
}

// main driver function

int main() {
    
    // control menu
    do {
        
        cout << "\nController menu:" << endl
            << "1. Right" << endl
            << "2. Left" << endl
            << "3. Display" << endl
            << "4. Reboot" << endl
            << "5. Show array" << endl
            << "6. Exit" << endl;
        cout << "Enter option: ";
        cin >> choice;
        cout << endl;
        menu(choice);
    } while (choice != 6);



    return 0;
}