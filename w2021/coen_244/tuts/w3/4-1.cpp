#include <iostream>

using namespace std;

struct BMI {
    float weight;
    float height;
};

int main() {
	// struct BMI b; // declaration

    struct BMI b = {110, 64}; // declare and init

    cout << "Enter weight in lbs: ";
    cin >> b.weight;
    cout << "Enter height in in.: ";
    cin >> b.height;

    cout << sizeof(BMI) << endl;

    // BMI formula

    float bmi = b.weight*703 / (b.height*b.height);
    cout << "Your BMI is: " << bmi << endl;

    return 0;
    
}