#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef's current IQ is X.
 * After learning an instrument, his IQ becomes X + 7.
 * We need to check if (X + 7) > 170.
 * 
 * Constraints: 100 <= X <= 169.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer input per run,
    // but standard competitive programming practice often involves 
    // handling test cases if specified. Given the problem format:
    int X;
    if (cin >> X) {
        if (X + 7 > 170) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}