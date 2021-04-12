#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
#include <algorithm>

#include "TA.h"

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
    unsigned int line_count = 0; // iter according to num of employees
    string colnames = "Student_ID,Last_Name,First_Name,Hire_Year,Classification,Num_of_Working_Hours";

    try {
        database.open("./db/TAs.csv");
    } catch (...) {
        cout << "Unable to open file" << endl;
    }

    // init vars
    string temp_id, lname, fname, hired, classification, work_hours; // employee attributes
    vector<int> line_to_rm; // store line to be removed
    string temp_num_of_entries; // temp num of entries
    int id, num_of_entries; // by stoi

    // // print line to console
    // while (getline(database, line)) {
    //     if (line_count == 0)
    //     {
    //         cout << "Number of entries: " << line << "\n";
    //     } else if (line_count == 1) {
    //         cout << "Header" << "\n";
    //         cout << line << "\n";
    //     } else {
    //         cout << line << '\n';
    //     }
    //     line_count++;
    // }

    // a) remove entries
    // parsing entries
    vector<TA*> ta_list;
    line_count = 1; // reset line count
    while (getline(database, line)) {
        if (line_count == 1)
        {
            stringstream ss(line);
            getline(ss, temp_num_of_entries, '\n');
            num_of_entries = stoi(temp_num_of_entries);
        }
        else if (line_count == 2) 
        {
            cout << "ID,LastName,FirstName,HiredYear,Classification,WorkHours" << "\n";    
            cout << "--------------------------------------------------------" << "\n";    
        } else 
        {
            stringstream ss(line);
            getline(ss, temp_id, ',');
            getline(ss, lname, ',');
            getline(ss, fname, ',');
            getline(ss, hired, ',');
            getline(ss, classification, ',');
            getline(ss, work_hours, ',');

            TA *local_ta = new TA(temp_id, lname, fname, hired, classification, work_hours);
            ta_list.push_back(local_ta);
            // local ta
            cout << "------ Local TA ------\n";
            cout << local_ta->GetStudentID() << "," << local_ta->GetLastName() << "," << local_ta->GetFirstName() << "," << local_ta->GetHireYear() << "," << local_ta->GetClassification() << "," << local_ta->GetWorkHours() << "\n";
            if (classification == "Alum")
            {
                cout << line << endl;
                line_to_rm.push_back(line_count);
            }
        }
        line_count++;
    }
    // remove invalid lines
    line_count = 1; // reset line count for removal step
    cout << "Lines to be removed: ";
    for (auto e : line_to_rm)
    {
        cout << e << ' ';
    }
    cout << "\n";
    reverse(line_to_rm.begin(), line_to_rm.end());
    for (auto e : line_to_rm) 
    {
        cout << "ta size: " << ta_list.size() << "\n";
        cout << "e: " << e << "\n";
        ta_list.erase(ta_list.begin() + e - 3);
        
        num_of_entries--;
    }
    cout << "Entries removed.\n";

    // write edited data
    ofstream write_database("./db/TAs_edited.csv");
    
    if (!write_database.is_open())
    {
        system("touch ./db/TAs_edited.csv");
    }

    line_count = 1;
    for (auto ta : ta_list)
    {
        cout << ta->GetStudentID() << ","
            << ta->GetLastName() << ","
            << ta->GetFirstName() << ","
            << ta->GetHireYear() << ","
            << ta->GetClassification() << ","
            << ta->GetWorkHours() << "\n";
        if (line_count == 1)
        {
            write_database << num_of_entries << "\n";
        }
        else if (line_count == 2)
        {
            write_database << colnames << "\n";
        }
        else
        {
            string id = ta->GetStudentID();
            string lname = ta->GetLastName();
            string fname = ta->GetFirstName();
            int hireyear = ta->GetHireYear();
            string classification = ta->GetClassification();
            int work_hours = ta->GetWorkHours();

            write_database << id << "," << lname << "," << fname << "," << hireyear << "," << classification << "," << work_hours << "\n";
        }
        line_count++;
    }
    write_database.close();
    // write done
}

