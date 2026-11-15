#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The investment is "good" if the interest rate X is at least twice the inflation rate Y.
 * Mathematically, this is: X >= 2 * Y.
 * 
 * Constraints:
 * 1 <= T <= 400
 * 1 <= X, Y <= 20
 * 
 * Since X and Y are small, standard integer types are sufficient.
 * Time Complexity: O(T) per test case, which is well within the 1s limit.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int x, y;
        cin >> x >> y;

        // Check if interest rate X is at least twice the inflation rate Y
        if (x >= 2 * y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}