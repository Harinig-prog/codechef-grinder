#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef and SnackDown
 * The years SnackDown was hosted are: 2010, 2015, 2016, 2017, 2019.
 * We can store these in a set or use a simple conditional check.
 * Given the constraints (2010 <= N <= 2019), a simple check is optimal.
 */

void solve() {
    int n;
    cin >> n;
    
    if (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019) {
        cout << "HOSTED" << "\n";
    } else {
        cout << "NOT HOSTED" << "\n";
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