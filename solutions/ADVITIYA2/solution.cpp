#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given 5 binary integers representing the votes of 5 judges.
 * A participant qualifies if the sum of these integers is >= 4.
 * 
 * Constraints:
 * T <= 100
 * R_i is 0 or 1.
 * Time complexity per test case: O(1)
 * Space complexity: O(1)
 */

void solve() {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        int r;
        cin >> r;
        sum += r;
    }
    
    if (sum >= 4) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}