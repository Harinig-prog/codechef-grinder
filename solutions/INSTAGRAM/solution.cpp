#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * An account is spam if X > 10 * Y.
 * Constraints: 1 <= T <= 100, 1 <= X, Y <= 100.
 * Since X and Y are small, standard integer types are sufficient.
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
        long long x, y;
        cin >> x >> y;
        
        // Check if following count (x) is strictly greater than 10 times follower count (y)
        if (x > 10 * y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}