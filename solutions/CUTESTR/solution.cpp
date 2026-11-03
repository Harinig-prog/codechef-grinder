#include <iostream>
#include <string>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    // Read the single string directly as per the problem statement
    if (cin >> s) {
        // Check the conditions:
        // 1. First and last characters are equal (s[0] == s[2])
        // 2. Middle character is 'w' (s[1] == 'w')
        if (s.length() == 3 && s[0] == s[2] && s[1] == 'w') {
            cout << "Cute" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}