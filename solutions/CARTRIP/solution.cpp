#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The cost is 10 per km.
 * There is a minimum charge for 300 kms.
 * If X < 300, the cost is 300 * 10 = 3000.
 * If X >= 300, the cost is X * 10.
 * This can be simplified as max(X, 300) * 10.
 * 
 * Constraints:
 * T <= 100
 * X <= 1000
 * The maximum possible cost is 1000 * 10 = 10000, which fits in a standard int.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Calculate the effective distance to charge for
        int effective_kms = max(x, 300);
        
        // Calculate total cost
        long long cost = (long long)effective_kms * 10;
        
        cout << cost << "\n";
    }
    
    return 0;
}