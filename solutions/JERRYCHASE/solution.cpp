#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Tom can catch Jerry if and only if Tom's speed (Y) is strictly greater than 
 * Jerry's speed (X). If Tom's speed is less than or equal to Jerry's speed, 
 * and they start at different positions, the distance between them will 
 * either increase or remain constant, meaning Tom will never catch Jerry.
 * 
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
        long long x, y;
        cin >> x >> y;
        
        // Tom catches Jerry if Y > X
        if (y > x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}