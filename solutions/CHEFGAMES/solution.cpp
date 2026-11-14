#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The ball is 'IN' if and only if all 4 referees return 0.
 * If any referee returns 1, the ball is 'OUT'.
 * 
 * Logic:
 * Read 4 integers. If the sum of these integers is 0, output "IN".
 * Otherwise, output "OUT".
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int r1, r2, r3, r4;
        cin >> r1 >> r2 >> r3 >> r4;
        
        // If all referees agree it is inside (0), the sum will be 0.
        // If any referee says outside (1), the sum will be > 0.
        if (r1 + r2 + r3 + r4 == 0) {
            cout << "IN" << "\n";
        } else {
            cout << "OUT" << "\n";
        }
    }
    
    return 0;
}