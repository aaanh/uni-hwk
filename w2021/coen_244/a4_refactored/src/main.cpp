#include "main.h"

int main(int argc, char *argv[]) 
{
    Q1a();
    Q1b();

    return 1;
}

void Q1a()
{
    cout << "\nStart of Question 1a driver\n";
    cout << "-----------------------------\n";
    ifstream db = OpenDatabase();
    vector<TA*> ta_list = ParseDatabase(db);
    cout << "\nDatabase contains: " << "\n";
    db = OpenDatabase();
    PrintDatabase(db);
    ta_list = CheckDatabase(ta_list);
    cout << "\nContainer now has: " << endl;
    PrintContainer(ta_list);
    WriteDatabase(ta_list);
    cout << "\nNew database contains: " << endl;
    db = OpenCheckedDatabase();
    PrintDatabase(db);
    cout << "\nEnd of Question 1a driver\n";
    cout << "-----------------------------\n";
}

void Q1b()
{
    cout << "\nStart of Question 1b driver\n";
    cout << "-----------------------------\n";
    AddNewTA();
}
