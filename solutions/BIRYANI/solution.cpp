#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Biryani classes
 * The total cost is simply the product of the number of weeks (X) 
 * and the cost per week (Y).
 * 
 * Constraints: 1 <= X, Y <= 100.
 * The maximum possible result is 100 * 100 = 10,000, which fits 
 * comfortably within a standard 32-bit integer.
 */

int main() {
    // Optimize I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        if (cin >> x >> y) {
            // Calculate total cost
            long long total_cost = x * y;
            cout << total_cost << "\n";
        }
    }

    return 0;
}