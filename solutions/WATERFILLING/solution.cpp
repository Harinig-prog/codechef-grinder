#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three integers B1, B2, B3 representing the state of three bottles.
 * 0 = empty, 1 = full.
 * Condition for "Water filling time": At least two bottles are empty.
 * This means the count of 0s in the input must be >= 2.
 * Otherwise, output "Not now".
 * 
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
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        
        // Count how many bottles are empty (value is 0)
        int empty_count = 0;
        if (b1 == 0) empty_count++;
        if (b2 == 0) empty_count++;
        if (b3 == 0) empty_count++;
        
        // Check condition: at least two bottles are empty
        if (empty_count >= 2) {
            cout << "Water filling time" << "\n";
        } else {
            cout << "Not now" << "\n";
        }
    }
    
    return 0;
}