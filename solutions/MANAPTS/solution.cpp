#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chefario has Y mana points and each attack costs X mana points.
 * The maximum number of attacks he can perform is the integer division of Y by X.
 * Mathematically, this is floor(Y / X).
 * 
 * Constraints:
 * T <= 10^5
 * X <= 100
 * Y <= 1000
 * Since X and Y are small, standard integer division is sufficient.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // The number of attacks is Y / X.
        // If Y < X, the result of integer division is 0, which is correct.
        long long max_attacks = y / x;
        
        cout << max_attacks << "\n";
    }
    
    return 0;
}