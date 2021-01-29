#include <iostream>

using namespace std;

struct BMI {
    float weight;
    float height;
};

float CalcBMI(float weight, float height) {
    return weight*703 / (height*height);
}

int main() {
	// struct BMI b; // declaration

    struct BMI b = {110, 64}; // declare and init

    cout << "Enter weight in lbs: ";
    cin >> b.weight;
    cout << "Enter height in in.: ";
    cin >> b.height;

    // BMI formula

    cout << "Your BMI is: " << CalcBMI(b.weight, b.height) << endl;

    return 0;
    
}