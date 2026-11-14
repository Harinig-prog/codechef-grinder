#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have X students and Y chairs.
 * Each student needs one chair.
 * If X > Y, we need (X - Y) additional chairs.
 * If X <= Y, we need 0 additional chairs.
 * This can be expressed as max(0, X - Y).
 * 
 * Constraints:
 * T <= 1000
 * 0 <= X, Y <= 100
 * Time complexity per test case: O(1)
 * Total time complexity: O(T)
 * Space complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        // Calculate the difference. If x > y, we need x - y chairs.
        // Otherwise, we need 0.
        if (x > y) {
            cout << (x - y) << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    
    return 0;
}