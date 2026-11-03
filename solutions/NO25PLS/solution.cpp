#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * An integer M is "imperfect" if:
 * (M % 2 == 0 OR M % 5 == 0) AND NOT (M % 2 == 0 AND M % 5 == 0)
 * This simplifies to:
 * (M % 2 == 0 XOR M % 5 == 0)
 * Or simply: (M % 2 == 0) != (M % 5 == 0)
 * 
 * Given N (1 <= N <= 100), we need to find min |N - M| where M is imperfect.
 * Since N is small, we can simply check integers around N (N-100 to N+100)
 * to find the closest M.
 */

bool is_imperfect(int m) {
    if (m <= 0) return false;
    bool div2 = (m % 2 == 0);
    bool div5 = (m % 5 == 0);
    return (div2 != div5);
}

void solve() {
    int n;
    cin >> n;
    
    int min_diff = 1000;
    // Check a range around N. Since N <= 100, checking 1 to 200 is sufficient.
    for (int m = 1; m <= 200; ++m) {
        if (is_imperfect(m)) {
            int diff = abs(n - m);
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
    }
    cout << min_diff << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}