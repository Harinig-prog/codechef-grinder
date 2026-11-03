#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Literacy Rate
 * The condition is (L / P) * 100 >= 75.
 * To avoid floating point precision issues, we can rewrite this as:
 * (L * 100) / P >= 75
 * Which is equivalent to:
 * L * 100 >= 75 * P
 * 
 * Given constraints: 1 <= L <= P <= 100.
 * L * 100 will be at most 10,000, which fits comfortably in a standard int.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int p, l;
        cin >> p >> l;

        // Check if (L/P) * 100 >= 75
        // Using cross-multiplication to avoid floating point arithmetic
        if (l * 100 >= 75 * p) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}