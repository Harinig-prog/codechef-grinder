#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states that the water cooler requires 2 liters of water for 1 hour.
 * Therefore, for N hours, the water required is N * 2 liters.
 * 
 * Constraints:
 * T <= 1000
 * N <= 1000
 * The result N * 2 will be at most 2000, which fits comfortably within a standard 
 * 32-bit integer (int). However, using long long is a good practice to prevent 
 * potential overflow in similar problems.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n;
        cin >> n;
        
        // Calculate required water: 2 liters per hour
        long long result = n * 2;
        
        cout << result << "\n";
    }

    return 0;
}