#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Initial balance = W
 * Monthly deposit = X
 * Monthly deduction = Y
 * Net change per month = (X - Y)
 * After Z months, the total change is Z * (X - Y)
 * Final balance = W + Z * (X - Y)
 * 
 * Constraints:
 * W, X, Y, Z <= 10^4
 * The result can be negative, and the maximum possible value is 10^4 + 10^4 * 10^4 = 100,010,000.
 * This fits comfortably within a standard 32-bit signed integer, but using long long 
 * is a good practice to prevent overflow in competitive programming.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long w, x, y, z;
        cin >> w >> x >> y >> z;
        
        // Calculate final balance
        // Final = Initial + (Months * (Deposit - Deduction))
        long long final_balance = w + (z * (x - y));
        
        cout << final_balance << "\n";
    }
    
    return 0;
}