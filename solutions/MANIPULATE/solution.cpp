#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Ezio can manipulate at most X guards.
 * There are Y guards.
 * He can manipulate all of them if X >= Y.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X, Y <= 100
 * Since X and Y are small (up to 100), standard int is sufficient.
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
        int x, y;
        cin >> x >> y;
        
        // Check if Ezio's capacity X is greater than or equal to the number of guards Y
        if (x >= y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}