#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Alice and Marks
 * Logic: Alice is happy if X >= 2 * Y.
 * Constraints: 1 <= X, Y <= 100.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice is to handle cases if specified.
    // Given the constraints and description, we read X and Y.
    int X, Y;
    if (cin >> X >> Y) {
        if (X >= 2 * Y) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}