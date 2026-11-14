#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef earns X coins per bill.
 * Chef pays Y bills.
 * Total coins earned = X * Y.
 * Each bag costs 100 coins.
 * Maximum bags = floor(Total coins / 100).
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X, Y <= 1000
 * Max coins = 1000 * 1000 = 1,000,000.
 * This fits within a standard 32-bit integer, but using long long is safe practice.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Calculate total coins
        long long total_coins = x * y;
        
        // Calculate number of bags (integer division by 100)
        long long bags = total_coins / 100;
        
        cout << bags << "\n";
    }
    
    return 0;
}