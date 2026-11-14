#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Decrement OR Increment
 * Logic: Check if N % 4 == 0. If true, N = N + 1, else N = N - 1.
 * Constraints: 0 <= N <= 1000.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    // The problem description implies a single input N.
    // If the problem format requires handling multiple test cases, 
    // one would typically see a 't' variable, but based on the 
    // provided description, we read N directly.
    if (cin >> n) {
        if (n % 4 == 0) {
            cout << n + 1 << "\n";
        } else {
            cout << n - 1 << "\n";
        }
    }

    return 0;
}