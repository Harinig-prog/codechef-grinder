#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: BATTERYLOW
 * Logic: If the battery level X is 15 or less, output "Yes", otherwise "No".
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a single integer variable.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Check if battery level is 15% or less
        if (x <= 15) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}