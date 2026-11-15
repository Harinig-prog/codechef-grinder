#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The insurance policy states:
 * - Maximum rebate is X.
 * - If repair cost Y <= X, rebate is Y.
 * - If repair cost Y > X, rebate is X.
 * 
 * This is equivalent to finding the minimum of X and Y.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
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
        
        // The rebated amount is the minimum of the repair cost (y) 
        // and the maximum coverage (x).
        if (y <= x) {
            cout << y << "\n";
        } else {
            cout << x << "\n";
        }
    }
    
    return 0;
}