#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Fever
 * Logic: A person has a fever if their temperature X > 98.
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
        
        // Check if temperature is strictly greater than 98
        if (x > 98) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}