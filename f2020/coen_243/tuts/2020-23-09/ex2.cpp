#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Enter 1st int: ";
	cin >> a;
	if (a > 5)
	{
		int b;
		cout << "Enter 2nd int: ";
		cin >> b;

		if (b > 5)
		{
			cout << "0";
		}
	}
	else
	{
		cout << "hello";
	}

	return 0;
}
