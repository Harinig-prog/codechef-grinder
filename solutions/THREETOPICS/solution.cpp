#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: The Three Topics
 * The problem asks us to check if a given topic X is one of the three topics 
 * (A, B, or C) that the Chef has prepared.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C, X;
    // The problem description implies a single line of input per test case.
    // Reading the four integers.
    if (cin >> A >> B >> C >> X) {
        // Check if X matches any of the prepared topics A, B, or C.
        if (X == A || X == B || X == C) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}