#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Access Code Equality
 * The task is to check if the input string S is exactly "WECNITK".
 * The problem specifies that the comparison is case-sensitive.
 * Time Complexity: O(1) per test case (since the string length is fixed at 7).
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    // The problem description implies a single input string S of length 7.
    // While the prompt mentions handling multiple test cases, the problem 
    // description provided only specifies one input line. 
    // We will read the string and compare it.
    if (cin >> s) {
        if (s == "WECNITK") {
            cout << "Welcome to Web Club!" << "\n";
        } else {
            cout << "Access denied" << "\n";
        }
    }

    return 0;
}