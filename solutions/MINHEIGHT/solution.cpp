#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Roller Coaster (MINHEIGHT)
 * Logic: The son can go on the ride if his height X is greater than or equal to 
 * the minimum height H required.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, h;
        cin >> x >> h;
        
        // Check if the son's height is at least the minimum required height
        if (x >= h) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}