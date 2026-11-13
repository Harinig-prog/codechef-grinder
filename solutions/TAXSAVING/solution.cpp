#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef earns X rupees.
 * Tax is applied if income > Y.
 * To avoid tax, the effective income (X - investment) must be <= Y.
 * We want to minimize the investment (I).
 * X - I <= Y
 * X - Y <= I
 * The minimum integer I that satisfies this is X - Y.
 * 
 * Constraints: 1 <= Y < X <= 100.
 * Since X and Y are small, standard integers are sufficient, 
 * but using long long is good practice for competitive programming.
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
        
        // The minimum investment required is the difference between 
        // the earned amount and the tax threshold.
        long long min_investment = x - y;
        
        cout << min_investment << "\n";
    }

    return 0;
}