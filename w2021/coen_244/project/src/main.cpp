#include "main.h"

int main(int argc, char const* argv[])
{
	TestDataUtils();
}

void TestDataUtils() 
{
    ifstream data;
    ifstream *data_ptr = &data;
    openFiles(patchDataPath(), *data_ptr);
}