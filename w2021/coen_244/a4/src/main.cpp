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

void Q2()
{
    cout << "\nStart of Question 2a driver\n";
    cout << "-----------------------------\n";
    // init the base container
    vector<ElectronicDevice*> container;
    // init derived objects
    Smartwatch *device_1 = new Smartwatch("Apple", 12345, "white", 499.0, 24);
    Smartwatch *device_2 = new Smartwatch("Samsung", 54321, "black", 379.99, 20);
    Cellphone *device_3 = new Cellphone("Apple", 13245, "midnight", 999.00, 3);
    Cellphone *device_4 = new Cellphone("Google", 12435, "gray", 549.99, 2);
    Laptop *device_5 = new Laptop("Lenovo", 12354, "titanium", 1424.49, 6, true);
    Laptop *device_6 = new Laptop("Dell", 51234, "silver", 1699.99, 4, false);
    // add objects to base container
    container.push_back(device_1);
    container.push_back(device_2);
    container.push_back(device_3);
    container.push_back(device_4);
    container.push_back(device_5);
    container.push_back(device_6);
    
}
