#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Q1();

int main(int argc, char *argv[]) 
{
    Q1();
    
    return 1;
}

void Q1() 
{
    ifstream database;
    string line;
    unsigned int line_count = 0; // iter according to num of employee

    try {
        database.open("./db/TAs.txt");
    } catch (...) {
        cout << "Unable to open file" << endl;
    }

    while (getline(database, line)) {
        if (line_count == 0)
        {
            cout << "Number of entries: " << line << "\n";
        } else if (line_count == 1) {
            cout << "Header" << "\n";
            cout << line << "\n";
        } else {
            cout << line << '\n';
        }
        line_count++;
    }
}

