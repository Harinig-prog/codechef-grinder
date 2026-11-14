#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: HOTCOLD
 * Logic: If temperature C > 20, print HOT, else print COLD.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a single integer variable.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long c;
        cin >> c;
        
        // Check if temperature is strictly above 20
        if (c > 20) {
            cout << "HOT" << "\n";
        } else {
            cout << "COLD" << "\n";
        }
    }
    
    return 0;
}