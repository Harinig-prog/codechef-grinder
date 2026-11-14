#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The information is revealed after K weeks.
 * Since 1 week = 7 days, the total time in days is K * 7.
 * Chef has already waited for X days.
 * The remaining days to wait = (K * 7) - X.
 * 
 * Constraints:
 * 1 <= T <= 500
 * 1 <= K <= 10
 * 1 <= X < 7 * K
 * 
 * Time Complexity: O(T) - We perform a constant number of operations per test case.
 * Space Complexity: O(1) - No extra data structures used.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long k, x;
        cin >> k >> x;
        
        // Calculate total days in K weeks
        long long total_days = k * 7;
        
        // Calculate remaining days
        long long remaining_days = total_days - x;
        
        // Output the result
        cout << remaining_days << "\n";
    }
    
    return 0;
}