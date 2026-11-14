#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The 107% rule states that Chef's time Y must be less than or equal to 107% of X.
 * Mathematically: Y <= 1.07 * X
 * To avoid floating point precision issues, we can multiply both sides by 100:
 * 100 * Y <= 107 * X
 * 
 * Constraints:
 * 1 <= X <= Y <= 200
 * Since X and Y are at most 200, 107 * X will be at most 21400, 
 * which fits comfortably within a standard 32-bit integer.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        // Check if Chef's time Y is within 107% of X
        // Using the derived inequality: 100 * Y <= 107 * X
        if (100 * y <= 107 * x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}