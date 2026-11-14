#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has X coins of 5 rupees and Y coins of 10 rupees.
 * Total money = (X * 5) + (Y * 10).
 * Each chocolate costs Z rupees.
 * The number of chocolates Chef can buy is the integer division of total money by Z.
 * 
 * Constraints:
 * X, Y, Z <= 1000.
 * Total money max = (1000 * 5) + (1000 * 10) = 15000.
 * This fits well within a standard 32-bit integer, but using long long is safer 
 * practice in competitive programming to prevent overflow in similar problems.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Calculate total money
        long long total_money = (x * 5) + (y * 10);
        
        // Calculate maximum chocolates
        // Since Z >= 1, division by zero is not possible
        long long max_chocolates = total_money / z;
        
        cout << max_chocolates << "\n";
    }
    
    return 0;
}