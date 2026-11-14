#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Lunchtime
 * Logic: Chef's lunchtime is between 1 pm and 4 pm inclusive.
 * Given an integer X, we need to check if 1 <= X <= 4.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Check if the current time X is within the range [1, 4]
        if (x >= 1 && x <= 4) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}