#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks for the minimum number of button presses to change volume from X to Y.
 * Each press changes the volume by exactly 1.
 * Therefore, the minimum number of presses is the absolute difference between X and Y.
 * |X - Y| = max(X, Y) - min(X, Y).
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X, Y <= 100
 * The values fit within standard integer types.
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
        
        // The minimum number of presses is the absolute difference
        int result = abs(x - y);
        
        cout << result << "\n";
    }
    
    return 0;
}