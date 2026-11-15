#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total time required = X * Y (in minutes).
 * Total time available = Z * 24 * 60 (in minutes).
 * Chef can complete the assignments if (X * Y) <= (Z * 24 * 60).
 * 
 * Constraints:
 * X, Y <= 100
 * Z <= 10
 * Max required time = 100 * 100 = 10,000 minutes.
 * Max available time = 10 * 24 * 60 = 14,400 minutes.
 * Since these values fit well within a standard 32-bit integer, 
 * 'long long' is safe but 'int' would also suffice.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Calculate total minutes needed
        long long total_needed = x * y;
        
        // Calculate total minutes available in Z days
        // 1 day = 24 hours, 1 hour = 60 minutes
        long long total_available = z * 24 * 60;
        
        if (total_needed <= total_available) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}