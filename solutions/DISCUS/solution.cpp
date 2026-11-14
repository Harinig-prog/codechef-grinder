#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Discus Throw
 * The goal is to find the maximum of three given integers A, B, and C.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        // Use std::max to find the largest of the three values.
        // Since we need the max of three, we can nest max() or use an initializer list.
        long long result = max({a, b, c});
        
        cout << result << "\n";
    }
    
    return 0;
}