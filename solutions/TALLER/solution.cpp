#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Who is taller!
 * Logic: Compare two integers X and Y. If X > Y, Alice is taller (A). 
 * Otherwise, Bob is taller (B).
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
        long long x, y;
        cin >> x >> y;
        
        // Compare heights as per problem constraints
        if (x > y) {
            cout << "A" << "\n";
        } else {
            cout << "B" << "\n";
        }
    }
    
    return 0;
}