#include "utils.h"

string col_names = "Student_ID,Last_Name,First_Name,Hire_Year,Classification,Num_of_Working_Hours";
unsigned int entries;

ifstream OpenDatabase()
{
    ifstream db("./db/TAs.csv");
    if (db)
    {
        cout << "File opened successfully." << "\n";
    } else {
        cout << "Failed to open file." << "\n";
        exit(1);
    }
    return db;
}

ifstream OpenCheckedDatabase()
{
    ifstream db("./db/TAs_edited.csv");
    if (db)
    {
        cout << "File opened successfully." << "\n";
    } else {
        cout << "Failed to open file." << "\n";
        exit(1);
    }
    return db;
}

vector<TA*> ParseDatabase(ifstream &db)
{
    // metadata
    string line;
    unsigned int line_count;

    // init vars
    string temp_id, lname, fname, hired, classification, work_hours; // employee attributes
    vector<int> line_to_rm; // store line to be removed
    string temp_num_of_entries; // temp num of entries
    int id; // by stoi

    vector<TA*> ta_list;
    line_count = 0; // reset line count
    while (getline(db, line)) {
        if (line_count == 0)
        {
            stringstream ss(line);
            getline(ss, temp_num_of_entries, '\n');
            entries = stoi(temp_num_of_entries);
        }
        else if (line_count == 1) 
        {
            col_names = line;    
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
        }
        line_count++;
    }
    return ta_list;
}

void PrintContainer(vector<TA*> parsed) // output data from the vector
{
    cout << "Number of entries: " << entries << "\n";
    cout << col_names << "\n";
    for (auto ta : parsed)
    {
        cout << ta->GetStudentID() << "," << ta->GetLastName() << "," << ta->GetFirstName() << "," << ta->GetHireYear() << "," << ta->GetClassification() << "," << ta->GetWorkHours() << "\n";
    }
}

void PrintDatabase(ifstream &db) // output lines in db file
{
    string line;
    while(getline(db, line))
    {
        cout << line << '\n';
    }
}

void PrintOldData()
{
    ifstream db("./db/TAs.csv");
    string line;
    while(getline(db, line))
    {
        cout << line << '\n';
    }
}

void PrintNewData()
{
    ifstream db("./db/TAs_edited.csv");
    string line;
    while(getline(db, line))
    {
        cout << line << '\n';
    }
}

vector<TA*> CheckDatabase(vector<TA*> parsed)
{
    vector<int> entries_to_rm;
    int entry_counter = 0;
    for (auto ta : parsed)
    {
        if (ta->GetClassification() == "Alum")
        {
            entries_to_rm.push_back(entry_counter);
        }
        entry_counter++;
    }
    cout << "Indices to be removed: " << "\n";
    for (auto i : entries_to_rm)
    {
        cout << i << ' ';
    }
    cout << "\n";
    reverse(entries_to_rm.begin(), entries_to_rm.end());
    for (auto e : entries_to_rm)
    {
        parsed.erase(parsed.begin() + e);
        entries--;
    }
    cout << "Invalid entries removed.\n";
    return parsed;
}

void WriteDatabase(vector<TA*> checked)
{
    ofstream db("./db/TAs_edited.csv");
    
    if (!db.is_open())
    {
        system("touch ../db/TAs_cleaned.csv");
        db.open("../db/TAs_edited.csv");
    }

    int line_count = 0;
    for (auto ta : checked)
    {
        cout << ta->GetStudentID() << ","
            << ta->GetLastName() << ","
            << ta->GetFirstName() << ","
            << ta->GetHireYear() << ","
            << ta->GetClassification() << ","
            << ta->GetWorkHours() << "\n";
        if (line_count == 0)
        {
            db << entries << "\n";
        }
        else if (line_count == 1)
        {
            db << col_names << "\n";
        }
        else
        {
            string id = ta->GetStudentID();
            string lname = ta->GetLastName();
            string fname = ta->GetFirstName();
            int hireyear = ta->GetHireYear();
            string classification = ta->GetClassification();
            int work_hours = ta->GetWorkHours();

            db << id << "," << lname << "," << fname << "," << hireyear << "," << classification << "," << work_hours << "\n";
        }
        line_count++;
    }
    db.close();
}

bool IsExistTA(int id)
{
    bool flag = true;
    ifstream db = OpenCheckedDatabase();
    vector<TA*> ta_list = ParseDatabase(db);
    for (auto ta : ta_list)
    {
        if (stoi(ta->GetStudentID()) == id)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void AddNewTA()
{
    string id, lname, fname, hired_year, classification, work_hours;
    bool flag = true;

    cout << "Enter new TA information: ";

    do {
        cout << "> ID: ";
        cin >> id;
        flag = IsExistTA(stoi(id));
    } while (!flag);

    cout << "> Last name: ";
    cin >> lname;
    cout << "> First name: ";
    cin >> fname;
    cout << "Hired year: ";
    cin >> hired_year;
    cout << "Classification: ";
    cin >> classification;
    cout << "Hours worked: ";
    cin >> work_hours;

    ofstream db("./db/TAs_edited.csv");
    db << id << "," << lname << "," << fname << "," << hired_year << "," << classification << "," << work_hours << "\n";

}