#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N minions, each with an initial characteristic value.
 * A transmogrifier adds K to each value.
 * A minion is "Wolverine-like" if (initial_value + K) % 7 == 0.
 * We need to count how many minions satisfy this condition.
 * 
 * Constraints:
 * T <= 100, N <= 100, K <= 100, values <= 10^5.
 * The values will not exceed 10^5 + 100, which fits comfortably in a standard 32-bit integer.
 * Time complexity per test case: O(N).
 * Total time complexity: O(T * N), which is at most 10^4 operations, well within the 1s limit.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        int wolverine_count = 0;
        for (int i = 0; i < n; ++i) {
            long long val;
            cin >> val;
            
            // Apply transformation
            long long new_val = val + k;
            
            // Check divisibility by 7
            if (new_val % 7 == 0) {
                wolverine_count++;
            }
        }
        
        cout << wolverine_count << "\n";
    }
    
    return 0;
}