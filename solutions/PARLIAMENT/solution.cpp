#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The resolution passes if X >= N / 2.0.
 * Since N and X are integers, the condition "half or more than half" 
 * is equivalent to X * 2 >= N.
 * 
 * Constraints:
 * T <= 5000
 * N <= 100
 * X <= N
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        // The condition is X >= N / 2.
        // To avoid floating point issues, we use 2 * X >= N.
        if (2 * x >= n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}