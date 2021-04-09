#include "main.h"

int main(int argc, char const* argv[])
{
	TestDataUtils();
}

void TestDataUtils() 
{
    ifstream data;
    cout << getCurrentPath() << endl;
    string patched = patchDataPath();
    cout << patched << endl;
    openFiles(patchDataPath(), data);
    printDatabase(data);
}