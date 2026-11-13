#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Find Remainder
 * The task is to compute A % B for T test cases.
 * Constraints: 1 <= T <= 1000, 1 <= A, B <= 10000.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a, b;
        if (cin >> a >> b) {
            // The remainder operator % in C++ returns the remainder of division.
            // Given constraints 1 <= A, B <= 10000, no overflow issues with int,
            // but long long is used for safety as per instructions.
            cout << (a % b) << "\n";
        }
    }

    return 0;
}