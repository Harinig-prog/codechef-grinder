#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef earns X, Chefina earns Y (where Y > X).
 * They want to end up with the same amount by donating the difference.
 * The amount to be donated is simply Y - X.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X < Y <= 10
 * 
 * Since the values are very small, standard integer types are sufficient.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
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
        
        // The difference to be donated
        long long donation = y - x;
        
        cout << donation << "\n";
    }

    return 0;
}