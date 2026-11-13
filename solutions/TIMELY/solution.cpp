#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs 30 minutes to reach the office.
 * X is the time in minutes before the deadline that Chef leaves.
 * If X >= 30, Chef reaches on time or early.
 * If X < 30, Chef reaches late.
 * 
 * Constraints:
 * 1 <= T <= 60
 * 1 <= X <= 60
 * Time complexity: O(T)
 * Space complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // If Chef leaves 30 or more minutes before, he reaches on time.
        if (x >= 30) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}