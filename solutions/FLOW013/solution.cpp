#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Valid Triangles
 * A triangle is valid if the sum of its three angles is exactly 180 degrees.
 * Constraints: 1 <= T <= 1000, 1 <= A, B, C <= 180.
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
        long long a, b, c;
        cin >> a >> b >> c;

        // Check if the sum of angles is exactly 180
        if ((a + b + c) == 180) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}