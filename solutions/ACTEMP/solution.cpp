#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice wants temperature T >= A.
 * Charlie wants temperature T >= C.
 * Bob wants temperature T <= B.
 * 
 * Combining the conditions:
 * T must be >= A AND T must be >= C.
 * This is equivalent to T >= max(A, C).
 * 
 * So we need to find if there exists a T such that:
 * max(A, C) <= T <= B.
 * 
 * Such a T exists if and only if max(A, C) <= B.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // The condition for a valid temperature to exist is max(A, C) <= B
        if (max(a, c) <= b) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}