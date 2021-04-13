#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
#include <algorithm>

#include "TA.h"

using namespace std;

ifstream OpenDatabase();
ifstream OpenCheckedDatabase();
vector<TA*> ParseDatabase(ifstream &db);
vector<TA*> CheckDatabase(vector<TA*> parsed);
void WriteDatabase(vector<TA*> checked);
void PrintDatabase(ifstream &db);
void PrintContainer(vector<TA*> parsed);

void AddNewTA();
void IsExistTA();

#endif