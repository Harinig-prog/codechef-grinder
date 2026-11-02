#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * RCB qualifies if (X - Y) >= 18.
 * Otherwise, CSK qualifies.
 * Constraints: 150 <= X <= 250, 150 <= Y <= X + 6.
 * Since the values fit within standard integer types, 'int' is sufficient,
 * but 'long long' is used for safety as per instructions.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y;
    // The problem description implies a single test case per run based on the input format.
    // However, if the platform expects multiple test cases, the logic remains the same.
    // Based on the provided format, we read X and Y.
    if (cin >> X >> Y) {
        if (X - Y >= 18) {
            cout << "RCB" << "\n";
        } else {
            cout << "CSK" << "\n";
        }
    }

    return 0;
}