#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Four friends want to attend a concert. Each ticket costs X.
 * Total cost = 4 * X.
 * Condition to go: Total cost <= 1000.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X <= 1000
 * 
 * Since 4 * 1000 = 4000, which fits in a standard 32-bit integer,
 * 'int' is sufficient, but 'long long' is used for safety as per instructions.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Calculate total cost
        long long total_cost = 4 * x;
        
        // Check condition
        if (total_cost <= 1000) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}