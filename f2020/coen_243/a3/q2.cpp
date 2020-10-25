#include <iostream>

using namespace std;

bool testPalindrome(string s, int first, int last) {
    int len = s.length();

    if (len == 0 || len == 1) {
        return true;
    } else if (len == 2) {
        if (s[0] == s[1]) {
            return true;
        } else return false;
    } else if (len == 3) {
        if (s[0] == s[2]) {
            return true;
        } else return false;
    } else {
        cout << s << endl;
        s = s.substr(first, last);
        cout << s << endl;
        return testPalindrome(s, ++first, --last);
    }
}

int main() {
    string s;

    cout << "Enter string to check: ";
    getline(cin, s);
    
    int first = 0;
    int last = s.length() - 1;

    testPalindrome(s, first, last) ? cout << "Yes" : cout << "No";
    cout << endl;

    return 0;
}