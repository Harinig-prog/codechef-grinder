#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given the formula v^2 = 2 * g * H.
 * We want to find the height H such that the velocity v equals the speed of light c.
 * Substituting v = c into the equation:
 * c^2 = 2 * g * H
 * H = c^2 / (2 * g)
 * 
 * Constraints:
 * 1 <= T <= 5 * 10^3
 * 1 <= g <= 10
 * 1000 <= c <= 3000
 * 
 * Calculation:
 * Max value of c^2 = 3000 * 3000 = 9,000,000.
 * Min value of 2 * g = 2 * 1 = 2.
 * The result fits well within a standard 32-bit integer, but using long long
 * is safer and good practice in competitive programming to prevent overflow.
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long g, c;
        cin >> g >> c;
        
        // Calculate H = c^2 / (2 * g)
        // Since the problem guarantees 2 * g divides c^2, integer division is exact.
        long long h = (c * c) / (2 * g);
        
        cout << h << "\n";
    }
    
    return 0;
}