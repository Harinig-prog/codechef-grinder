#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef buys X stocks at price Y. Total cost = X * Y.
 * Chef sells X stocks at price Z. Total revenue = X * Z.
 * Profit = Total Revenue - Total Cost
 * Profit = (X * Z) - (X * Y)
 * Profit = X * (Z - Y)
 * 
 * Constraints:
 * X, Y, Z are up to 10^4.
 * X * (Z - Y) will be at most 10^4 * 10^4 = 10^8.
 * This fits within a standard 32-bit signed integer, but using long long 
 * is safer and good practice in competitive programming to prevent overflow.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Calculate profit based on the derived formula
        long long profit = x * (z - y);
        
        cout << profit << "\n";
    }
    
    return 0;
}