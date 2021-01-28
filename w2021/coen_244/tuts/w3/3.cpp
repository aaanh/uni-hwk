#include <iostream>

using namespace std;

void swap (int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

}

void swapRef(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main() {

	// Pass by value

	int a,b;
	a = 10;
	b = 20;
	swap(a,b);

	// pass by reference
	int c,d;
	c = 20;
	d = 30;
	swapRef(c,d);

	return 0;
}