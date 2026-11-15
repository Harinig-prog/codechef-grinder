#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Interior Design
 * The problem asks us to compare the total cost of two styles.
 * Style 1 cost = X1 + Y1
 * Style 2 cost = X2 + Y2
 * We need to output min(X1 + Y1, X2 + Y2).
 * 
 * Constraints: 1 <= X1, Y1, X2, Y2 <= 100.
 * The maximum possible sum is 200, which fits easily into a standard integer.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        long long cost1 = x1 + y1;
        long long cost2 = x2 + y2;
        
        if (cost1 < cost2) {
            cout << cost1 << "\n";
        } else {
            cout << cost2 << "\n";
        }
    }
    
    return 0;
}