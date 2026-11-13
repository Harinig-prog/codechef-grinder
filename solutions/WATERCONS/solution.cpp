#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: WATERCONS
 * The problem asks to check if the input integer X is greater than or equal to 2000.
 * Constraints: 1 <= T <= 2000, 1 <= X <= 4000.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a single variable per test case.
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
        
        // Check if Chef drank at least 2000 ml
        if (x >= 2000) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}