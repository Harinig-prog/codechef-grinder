#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: LUCKYSEVEN
 * The problem asks for the 7th character of a string of length 10.
 * In C++, strings are 0-indexed, so the 7th character is at index 6.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1) to store the string of length 10.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single string input per execution 
    // based on the sample cases provided.
    string s;
    if (cin >> s) {
        // The 7th character is at index 6 (0-indexed)
        cout << s[6] << "\n";
    }

    return 0;
}