#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>

using namespace std;

int main() {
    ifstream inFile;
    inFile.open("grades.txt");

    ofstream outFile;
    outFile.open("grades_copy.txt");


    if (!inFile) {
        cout << "File coud not be opened" << endl;
    }
    else {
        int grade;
        inFile >> grade;
        while (!inFile.eof()) {
            cout << "Grade: " << grade << endl;
            inFile >> grade;
            outFile << grade << "\n";
        }
    }
    inFile.close();
}