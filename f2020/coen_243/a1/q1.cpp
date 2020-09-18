/*
	1. (20 marks) Write a program that asks the user to enter two integers and prints the sum, difference, product, and division, and average of these numbers.
*/

#include <iostream>

using namespace std;

int main() {
	signed int a, b;
	cout << "****************************************\n";
	cout << "Enter 2 integers separated by [Space]: ";
	cin >> a >> b;
	signed int sum, dif, pro, div, ave;
	sum = a + b;
	dif = a - b;
	pro = a * b;
	div = a / b;
	ave = (a + b)/2;
	
	cout 
	<< "\n****************************************\n\n"
	<< "The results are: \n\n"
	<< "Sum:		" << sum << "\n"
	<< "Difference:	" << dif << "\n"
	<< "Product:	" << pro << "\n"
	<< "Division:	" << div << "\n"
	<< "Average:	" << ave << "\n" << endl;

	return 0;

}
