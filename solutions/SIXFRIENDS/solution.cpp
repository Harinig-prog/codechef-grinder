#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Six friends need accommodation.
 * Option 1: 3 double rooms. Cost = 3 * X.
 * Option 2: 2 triple rooms. Cost = 2 * Y.
 * We need to find the minimum of (3 * X) and (2 * Y).
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X < Y <= 100
 * Since X and Y are small, standard 'int' is sufficient, but 'long long' 
 * is used for good practice in competitive programming.
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
        
        long long cost_double = 3 * x;
        long long cost_triple = 2 * y;
        
        // Output the minimum of the two options
        if (cost_double < cost_triple) {
            cout << cost_double << "\n";
        } else {
            cout << cost_triple << "\n";
        }
    }
    
    return 0;
}