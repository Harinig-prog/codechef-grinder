#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Capital Gain Tax
 * Logic: Compare two integers X and Y.
 * If Y > X, output INCREASED.
 * If Y < X, output DECREASED.
 * If Y == X, output SAME.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single line of input per test case.
    // While the prompt mentions "Handle multiple test cases", the problem 
    // description provided only specifies one line of input. 
    // We will implement it to handle the provided input format.
    
    long long X, Y;
    if (cin >> X >> Y) {
        if (Y > X) {
            cout << "INCREASED" << "\n";
        } else if (Y < X) {
            cout << "DECREASED" << "\n";
        } else {
            cout << "SAME" << "\n";
        }
    }

    return 0;
}