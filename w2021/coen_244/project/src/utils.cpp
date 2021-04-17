#include <filesystem>
#include <string>

#include "utils.h"

std::string getOsName()
{
    #ifdef _WIN32 
    return "Windows 32-bit";
    #elif _WIN64 
    return "Windows 64-bit";
    #elif (__APPLE__ || __MACH__)
    return "macOS";
    #elif __linux__
    return "Linux";
    #elif __FreeBSD__
    return "FreeBSD";
    #elif __unix || __unix__
    return "Unix";
    #else
    return "Other";
    #endif
}

std::string getCurrentPath()
{
    std::string local_path = fs::current_path().string();
    return local_path;
}

std::string patchDataPath()
{
    
    std::string patched;
    if (getOsName() == "Windows 64-bit" || getOsName() == "Windows 32-bit")
    {
        patched = getCurrentPath().substr(0, (getCurrentPath().length())) + "\\data\\cleaned";
    }
    else
    {
        patched = getCurrentPath().substr(0, (getCurrentPath().length())) + "/data/cleaned/";
    }
    return patched;
}

void indexDirectory(std::string path)
{
    int file_count = 0;
    for (const auto &entry : fs::directory_iterator(path)) ++file_count;
        std::cout << "Found " << file_count << ": \n";
    for (const auto &entry : fs::directory_iterator(path)) 
        std::cout << "> " << entry.path() << "\n";
}

void openFiles(std::string path, std::ifstream &data)
{
    // try {
        if ((getOsName() == "Windows 64-bit") + (getOsName() == "Windows 32-bit")) 
        {
            data.open(path + "\\entity.csv");
            std::cout << (path + "\\entity.csv") << "\n";
        } else if ((getOsName() == "macOS") || getOsName() == "Linux")
        {
            data.open(path + "/entity.csv");
        }

        if (!(data.is_open()))
        {
            std::cout << "Failed to open database. Check path.\n";
        } else {
            std::cout << "Database opened successfully.\n";
        }
}

void printDatabase(std::ifstream &data) 
{
    std::string line;
    std::string temp_id, n, j, jd, cc, c;
    unsigned long int id;
    int line_count = 0;
    while (std::getline(data, line))
    {
        if (line_count != 0) 
        {
            // get the csv data
            std::stringstream ss(line);
            getline(ss, temp_id, ',');
            getline(ss, n, ',');
            getline(ss, j, ',');
            getline(ss, jd, ',');
            getline(ss, cc, ',');
            getline(ss, c, ',');

            // type conversion
            id = stod(temp_id);
        
            // print data
            std::cout << "> Entry ID       : " << id << "\n";
            std::cout << ">> Name          : " << n << "\n";
            std::cout << ">> Jurisdiction  : " << j << "\n";
            std::cout << ">> J. Description: " << jd << "\n";
            std::cout << ">> Country code  : " << cc << "\n";
            std::cout << ">> Country       : " << c << "\n";

            std::cout << "\n-------------------\n\n";
        }
        line_count++;
    }
}

void dataParser(Graph &graph, std::ifstream &data)
{
    std::string line;
    std::string temp_id, name, j, jd, cc, c;
    unsigned long id;
    int line_count = 0;
    clock_t start, end;
    start = clock();
    while (std::getline(data, line))
    {
        if (line_count != 0) 
        {
            // get the csv data
            std::stringstream ss(line);
            getline(ss, temp_id, ',');
            getline(ss, name, ',');
            getline(ss, j, ',');
            getline(ss, jd, ',');
            getline(ss, cc, ',');
            getline(ss, c, ',');
            // type conversion
            id = stoi(temp_id);

            Node *n = new Node(id, name, j, jd, cc, c);

            graph.addNode(*n);

            for (auto node : graph.getNodeList())
            {
                if (n->getCountryCode() == node->getCountryCode())
                {
                    Edge *e = new Edge(*n, *node);
                    graph.addEdge(*e);
                }
            }
        }
        line_count++;
        std::cout << "Parsing entry: " << line_count << "\r";
        graph.setNumOfEntries(line_count);
        std::cout.flush();
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Parse time: " << fixed << time_taken << setprecision(5) << " seconds" << "\n";
    std::cout << "Database parsed successfully. Found: " << line_count << " entries.\n";
}