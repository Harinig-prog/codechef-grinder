#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The score can change from A:B to C:D if and only if:
 * 1. Team 1's score does not decrease (C >= A)
 * 2. Team 2's score does not decrease (D >= B)
 * 
 * Since goals can only be added, the number of goals for each team 
 * must be greater than or equal to their initial score.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few integer variables.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Check if the final score is reachable from the initial score
        if (c >= a && d >= b) {
            cout << "POSSIBLE" << "\n";
        } else {
            cout << "IMPOSSIBLE" << "\n";
        }
    }
    
    return 0;
}