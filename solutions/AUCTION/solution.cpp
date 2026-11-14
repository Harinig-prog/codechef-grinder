#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: AUCTION
 * The problem asks us to identify the maximum of three distinct integers A, B, and C.
 * Alice bids A, Bob bids B, and Charlie bids C.
 * Since A, B, and C are distinct, there will always be a unique maximum.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

void solve() {
    int A, B, C;
    if (!(cin >> A >> B >> C)) return;

    if (A > B && A > C) {
        cout << "Alice" << "\n";
    } else if (B > A && B > C) {
        cout << "Bob" << "\n";
    } else {
        cout << "Charlie" << "\n";
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