#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Car 1 cost per km = y1 / x1
 * Car 2 cost per km = y2 / x2
 * 
 * We need to compare y1/x1 and y2/x2.
 * To avoid floating point precision issues, we compare:
 * y1 * x2 vs y2 * x1
 * 
 * If (y1 * x2) < (y2 * x1), Car 1 is cheaper (-1)
 * If (y1 * x2) == (y2 * x1), both are equal (0)
 * If (y1 * x2) > (y2 * x1), Car 2 is cheaper (1)
 * 
 * Constraints: x1, x2, y1, y2 <= 50.
 * The product will be at most 2500, which fits easily in an integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;

        // Compare y1/x1 and y2/x2 by cross-multiplying
        // Cost1 = y1/x1, Cost2 = y2/x2
        // Compare y1 * x2 and y2 * x1
        long long val1 = y1 * x2;
        long long val2 = y2 * x1;

        if (val1 < val2) {
            cout << -1 << "\n";
        } else if (val1 == val2) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }

    return 0;
}