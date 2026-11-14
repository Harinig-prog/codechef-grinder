#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: CHEFONDATE
 * Chef has X dollars and the bill is Y dollars.
 * Chef can pay if X >= Y.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Chef has enough money if his money X is greater than or equal to the bill Y
        if (x >= y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}