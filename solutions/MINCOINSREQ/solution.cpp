#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs to pay X rupees using 10-rupee notes and 1-rupee coins.
 * To minimize the number of 1-rupee coins, we should use as many 10-rupee notes as possible.
 * The number of 10-rupee notes used will be floor(X / 10).
 * The remaining amount, which must be paid in 1-rupee coins, is X % 10.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // The minimum number of coins is simply the remainder when X is divided by 10.
        // Any amount divisible by 10 can be covered by 10-rupee notes.
        long long min_coins = x % 10;
        
        cout << min_coins << "\n";
    }
    
    return 0;
}