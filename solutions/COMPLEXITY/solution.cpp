#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Time Complexity
 * The problem asks to compare two integers X and Y.
 * Algorithm A has more time complexity than B if X > Y.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Check if algorithm A has more comparisons than algorithm B
        if (x > y) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}