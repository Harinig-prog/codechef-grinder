#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is ranked X. We need to determine if he is in the top 10.
 * This means we check if X <= 10.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X <= 100
 * 
 * Time Complexity: O(T) - We process each test case in constant time.
 * Space Complexity: O(1) - We use a constant amount of extra space.
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Check if rank is within the top 10
        if (x <= 10) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}