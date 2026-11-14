#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N pages to read.
 * Chef can read at most X pages per day for Y days.
 * The total number of pages Chef can read in Y days is X * Y.
 * If (X * Y) >= N, Chef can complete the book.
 * Otherwise, Chef cannot.
 * 
 * Constraints:
 * N <= 100, X, Y <= 10.
 * The product X * Y will be at most 100, which fits in a standard integer.
 * Time complexity per test case: O(1).
 * Space complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        // Calculate total capacity
        long long total_capacity = x * y;

        // Check if capacity is sufficient
        if (total_capacity >= n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}