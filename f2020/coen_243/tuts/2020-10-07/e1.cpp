#include <iostream>

using namespace std;

int main() {

    int temp;
    double sum = 0;
    double average_of_sum;

    for (int i = 1; i <= 10; i++) {
        cout << "input number #" << i << " > ";
        cin >> temp;
        sum += temp;
    }

    average_of_sum = sum / i;
    
    cout << "average is: " << average_of_sum << endl;
    average_of_sum < 5 ? cout << "small numbers" : cout << "large numebrs";

    return 0;
}