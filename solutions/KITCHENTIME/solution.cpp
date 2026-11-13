#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The kitchen works from X pm to Y pm.
 * Since both X and Y are in the same 12-hour cycle (pm), 
 * the duration is simply the difference between the end time and the start time.
 * Duration = Y - X.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X < Y <= 12
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        // Calculate the difference
        int duration = y - x;
        
        // Output the result
        cout << duration << "\n";
    }
    
    return 0;
}