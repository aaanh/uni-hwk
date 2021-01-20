#include <iostream>

using namespace std;

int main() {
	int y;
	cout << "Input a year AD: ";
	cin >> y;
	if (y % 100 == 0) {
		if (y % 400 == 0) {
			cout << y << " is a leap year." << endl;
		} else {
			cout << y << " is not a leap year.";
		}
	}
	else if (y % 4 == 0) {
		cout << y << " is a leap year." << endl;
	} else {
		cout << y << " is not a leap year." << endl;
	}
	return 0;
}
