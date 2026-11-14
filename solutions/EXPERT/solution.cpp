#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Expert Setter
 * Logic:
 * A setter is an expert if (Y / X) >= 0.5.
 * To avoid floating point precision issues, we can rewrite this as:
 * Y / X >= 1 / 2
 * Multiplying both sides by 2X (since X > 0):
 * 2 * Y >= X
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Check if at least 50% of problems are approved
        // Using 2 * y >= x avoids floating point division
        if (2 * y >= x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}