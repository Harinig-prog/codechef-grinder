#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Battery Health
 * Logic: An iPhone is in optimal condition if battery health X >= 80.
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Check if battery health is 80% or above
        if (x >= 80) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}