#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Janmansh has 3 assignments, each taking 1 hour.
 * Total time required = 3 hours.
 * Deadline is 10 pm.
 * If he starts at X pm, he finishes at X + 3 pm.
 * He can complete the assignments if X + 3 <= 10, which simplifies to X <= 7.
 * 
 * Constraints:
 * 1 <= T <= 10
 * 1 <= X <= 9
 * Time complexity: O(T)
 * Space complexity: O(1)
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x;
        cin >> x;
        
        // If he starts at X, he finishes at X + 3.
        // The deadline is 10 pm.
        if (x + 3 <= 10) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}