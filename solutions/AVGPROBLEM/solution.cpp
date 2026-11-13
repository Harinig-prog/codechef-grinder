#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to check if (A + B) / 2 > C.
 * To avoid floating point precision issues, we can multiply both sides by 2:
 * (A + B) / 2 > C  <=>  A + B > 2 * C
 * 
 * Constraints: 1 <= A, B, C <= 10.
 * The values are small, so standard 'int' is sufficient.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // Using the derived inequality: A + B > 2 * C
        if ((a + b) > (2 * c)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}