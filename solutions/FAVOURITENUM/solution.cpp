#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice likes A if: (A % 2 == 0) AND (A % 7 == 0)
 * Bob likes A if: (A % 2 != 0) AND (A % 9 == 0)
 * Otherwise: Charlie takes it.
 * 
 * Constraints: 1 <= A <= 1000, 1 <= T <= 100.
 * Time Complexity: O(T)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a;
        cin >> a;
        
        // Check Alice's condition: Even and multiple of 7
        bool aliceLikes = (a % 2 == 0) && (a % 7 == 0);
        
        // Check Bob's condition: Odd and multiple of 9
        bool bobLikes = (a % 2 != 0) && (a % 9 == 0);
        
        if (aliceLikes) {
            cout << "Alice" << "\n";
        } else if (bobLikes) {
            cout << "Bob" << "\n";
        } else {
            cout << "Charlie" << "\n";
        }
    }
    
    return 0;
}