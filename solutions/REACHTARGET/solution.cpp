#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Reach the Target
 * The problem asks for the difference between the target score (X) 
 * and the current score (Y).
 * 
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1), as we only use a few variables.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        // Read target score X and current score Y
        if (cin >> x >> y) {
            // The number of runs needed to win is X - Y
            cout << (x - y) << "\n";
        }
    }

    return 0;
}