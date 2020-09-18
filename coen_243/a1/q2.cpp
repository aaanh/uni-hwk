/*
2. (20 marks) Write a program that takes the income of an employee and calculates the corresponding net income and tax portion based on the following information:
    tax = 40%:    income > 100,000 $  
    tax = 30%:     80 K <= income < 100 K
    tax = 20%:     60 K <= income <80 K
    tax = 10%:     40 K <= income <60 K
    tax = 0%:      income <40 K
*/

#include <iostream>

using namespace std;

int main() {

    int income;

    cout << "Enter your income: ";
    cin >> income;

    if (income >= 100000) {
        cout << "Tax = 40%" << endl
        << "Net income: " << (income - income*0.4) << endl;
    } else if (income < 100000 && income >= 80000) {
        cout << "Tax = 30%" << endl
        << "Net income: " << (income - income*0.3) << endl;
    } else if (income < 80000  && income >= 60000) {
        cout << "Tax = 20%" << endl
        << "Net income: " << (income - income*0.2) << endl;
    } else if (income < 60000 && income >= 40000) {
        cout << "Tax = 10%" << endl
        << "Net income: " << (income - income*0.1) << endl;
    } else cout << "Tax = 0%" << endl << "Net income: " << income << endl;

    return 0;
}