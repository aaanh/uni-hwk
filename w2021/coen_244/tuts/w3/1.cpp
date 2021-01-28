#include <iostream>

using namespace std;

int main() {

	// Dynamically allocate an array in the heap
	int *p;
	p = new int[5];

	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;
	p[4] = 5;

	for (size_t i = 0; i < 5; i++) {
		cout << p[i] << endl;
	}

	delete[] p;

	return 0;
}