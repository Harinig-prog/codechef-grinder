#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states that if the income X is strictly greater than 100, 
 * a tax of 10 is deducted. Otherwise, the income remains X.
 * 
 * Logic:
 * If X > 100: result = X - 10
 * Else: result = X
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= X <= 1000
 * Since X is small, standard 'int' is sufficient, but 'long long' 
 * is used as a best practice for competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        if (x > 100) {
            cout << (x - 10) << "\n";
        } else {
            cout << x << "\n";
        }
    }
    
    return 0;
}