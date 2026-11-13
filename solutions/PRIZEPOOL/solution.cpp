#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - Top 10 participants receive X each. Total = 10 * X.
 * - Ranks 11 to 100 (inclusive) is 100 - 11 + 1 = 90 participants.
 * - These 90 participants receive Y each. Total = 90 * Y.
 * - Total Prize Money = 10 * X + 90 * Y.
 * 
 * Constraints:
 * - T <= 1000
 * - 1 <= Y <= X <= 1000
 * - Max possible value: 10 * 1000 + 90 * 1000 = 100,000.
 * - This fits comfortably within a standard 32-bit integer, but using 
 *   long long is good practice to prevent overflow in similar problems.
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
        
        // Calculate total prize money
        long long total_prize = (10 * x) + (90 * y);
        
        cout << total_prize << "\n";
    }
    
    return 0;
}