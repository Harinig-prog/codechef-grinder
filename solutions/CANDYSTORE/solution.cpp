#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has a goal X.
 * If Y <= X, Chef earns 1 rupee per chocolate sold. Total = Y.
 * If Y > X, Chef earns 1 rupee for the first X chocolates, 
 * and 2 rupees for each of the (Y - X) extra chocolates.
 * Total = X + (Y - X) * 2.
 * 
 * Constraints: 1 <= X, Y <= 10.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
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

        if (y <= x) {
            // Chef did not exceed the goal
            cout << y << "\n";
        } else {
            // Chef exceeded the goal
            // First X chocolates earn 1 rupee each
            // Remaining (Y - X) chocolates earn 2 rupees each
            long long total = x + (y - x) * 2;
            cout << total << "\n";
        }
    }

    return 0;
}