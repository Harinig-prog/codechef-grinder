#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef wants to enter the fair with his N friends.
 * Total people = Chef + N friends = N + 1 people.
 * Each person needs 1 pass.
 * Total passes required = N + 1.
 * Chef has K passes.
 * Condition for entry: K >= N + 1.
 * 
 * Constraints: 1 <= N, K <= 100.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        // Chef needs (n + 1) passes in total.
        // If k >= n + 1, he can enter with all his friends.
        if (k > n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}