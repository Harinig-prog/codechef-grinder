#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Sleep deprivation
 * Logic: A person is sleep deprived if X < 7.
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Check if Chef slept strictly less than 7 hours
        if (x < 7) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}