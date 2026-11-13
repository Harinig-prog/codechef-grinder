#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: GDTURN
 * The problem asks us to determine if the sum of two dice rolls (X and Y) is greater than 6.
 * Constraints: 1 <= T <= 100, 1 <= X, Y <= 6.
 * Since the maximum sum is 12, standard 'int' is sufficient.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int x, y;
        cin >> x >> y;

        // A turn is "good" if the sum of the dice is strictly greater than 6.
        if (x + y > 6) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}