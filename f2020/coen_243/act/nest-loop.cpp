#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 5; i++) {
		for (int k = i; k <= 5; k++) {
			cout << k << " ";
		}
		cout << "\n";
	}
	return 0;
}
