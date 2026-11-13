#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: BESTOFTWO
 * The goal is to find the maximum of two integers X and Y.
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
        
        // The final score is the maximum of the two attempts
        if (x >= y) {
            cout << x << "\n";
        } else {
            cout << y << "\n";
        }
    }
    
    return 0;
}