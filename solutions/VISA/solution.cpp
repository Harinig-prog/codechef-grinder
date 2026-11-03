#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem requires checking three conditions:
 * 1. x2 >= x1 (Solved problems)
 * 2. y2 >= y1 (Rating)
 * 3. z2 <= z1 (Last submission time)
 * 
 * If all three are true, output "YES", otherwise "NO".
 * Constraints are small, so standard integer types are sufficient.
 * Time complexity per test case: O(1)
 * Total time complexity: O(T)
 */

void solve() {
    int x1, x2, y1, y2, z1, z2;
    if (!(cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2)) return;

    // Check the three conditions
    if (x2 >= x1 && y2 >= y1 && z2 <= z1) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}