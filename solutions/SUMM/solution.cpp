#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: SUMM
 * The task is to verify if A + B == C.
 * Constraints: 0 <= A, B, C <= 100.
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
        long long a, b, c;
        cin >> a >> b >> c;

        // Check if the sum of A and B equals C
        if (a + b == c) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}