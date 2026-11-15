#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs to take 3 tablets per day for X days.
 * Total tablets required = 3 * X.
 * Chef already has Y tablets.
 * Chef has enough tablets if Y >= 3 * X.
 * 
 * Constraints:
 * 1 <= X <= 100
 * 0 <= Y <= 1000
 * 3 * X will be at most 300, which fits in a standard integer.
 * Time complexity per test case: O(1)
 * Total time complexity: O(T)
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
        
        // Calculate required tablets
        long long required = 3 * x;
        
        // Check if current tablets are sufficient
        if (y >= required) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}