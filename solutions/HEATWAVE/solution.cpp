#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two integers X (previous record high) and Y (current temperature).
 * A new record high is created if and only if the current temperature Y is 
 * strictly greater than the previous record high X.
 * 
 * Constraints: 100 <= X, Y <= 150.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;
    // The problem description implies a single line of input per execution 
    // based on the provided format, but we handle the logic for the given input.
    if (cin >> X >> Y) {
        if (Y > X) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}