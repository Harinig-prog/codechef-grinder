#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef travels X km to the office and X km back home.
 * Total distance per day = X + X = 2 * X.
 * The office is open 5 days a week.
 * Total distance per week = (2 * X) * 5 = 10 * X.
 * 
 * Constraints:
 * 1 <= T <= 10
 * 1 <= X <= 10
 * 
 * Since X is small, the maximum result is 10 * 10 = 100, which fits in a standard integer.
 * Using long long is good practice for competitive programming to prevent overflow in larger problems.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Calculation: 2 trips (to and fro) * 5 days * distance X
        long long total_distance = x * 2 * 5;
        
        cout << total_distance << "\n";
    }

    return 0;
}