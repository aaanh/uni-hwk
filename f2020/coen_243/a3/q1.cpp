#include <iostream>
#include <array>

using namespace std;

int main() {

    int num_of_salespeople;
    int gross;
    int a, b, c, d, e, f, g, h, i;
    a = b = c = d = e = f = g = h = i = 0;
    

    cout << "Enter number of salespeople: ";
    cin >> num_of_salespeople;
    
    array<int, 5> sales_array;
    
    for (size_t j = 0; j < sales_array.size(); ++j) {
        cout << "Enter gross for salesperson #" << j+1 << ": ";
        cin >> gross;
        sales_array[j] = gross;
    }

    for (size_t k = 0; k <= sales_array.size(); k++) {
        float salary = sales_array[k] * 0.09 + 200;

        if (salary >= 1000) {
            i++;
        } else if (salary >= 900) {
            h++;
        } else if (salary >= 800) {
            g++;
        } else if (salary >= 700) {
            f++;
        } else if (salary >= 600) {
            e++;
        } else if (salary >= 500) {
            d++;
        } else if (salary >= 400) {
            c++;
        } else if (salary >= 300) {
            b++;
        } else if (salary >= 200) {
            a++;
        } else {
            break;
        }
    }

    cout << "A. $200 - 299 \t | \t " << a << endl;
    cout << "B. $300 - 399 \t | \t " << b << endl;
    cout << "C. $400 - 499 \t | \t " << c << endl;
    cout << "D. $500 - 599 \t | \t " << d << endl;
    cout << "E. $600 - 699 \t | \t " << e << endl;
    cout << "F. $700 - 799 \t | \t " << f << endl;
    cout << "G. $800 - 899 \t | \t " << g << endl;
    cout << "H. $900 - 999 \t | \t " << h << endl;
    cout << "I. $1000+     \t | \t " << i << endl;

    return 0;
}