#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: RAINFALL1
 * Logic:
 * - LIGHT: X < 3
 * - MODERATE: 3 <= X < 7
 * - HEAVY: X >= 7
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1)
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
        
        if (x < 3) {
            cout << "LIGHT" << "\n";
        } else if (x >= 3 && x < 7) {
            cout << "MODERATE" << "\n";
        } else {
            cout << "HEAVY" << "\n";
        }
    }
    
    return 0;
}