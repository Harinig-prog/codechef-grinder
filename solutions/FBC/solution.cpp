#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The bucket has a total capacity of K liters.
 * It currently contains X liters.
 * The amount of extra water that can be added is the difference between
 * the total capacity and the current amount: K - X.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X < K <= 1000
 * Since K and X are small (up to 1000), standard 'int' is sufficient.
 * Time complexity per test case: O(1)
 * Space complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int k, x;
        cin >> k >> x;
        
        // The maximum extra water is simply the capacity minus current volume.
        int result = k - x;
        
        cout << result << "\n";
    }
    
    return 0;
}