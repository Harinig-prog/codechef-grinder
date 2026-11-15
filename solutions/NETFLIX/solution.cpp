#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three amounts A, B, and C representing the money Alice, Bob, and Charlie have.
 * A Netflix subscription costs X.
 * We need to check if any two of them can combine their money to meet or exceed X.
 * The possible pairs are:
 * 1. Alice and Bob: A + B >= X
 * 2. Alice and Charlie: A + C >= X
 * 3. Bob and Charlie: B + C >= X
 * 
 * If any of these conditions are true, output YES, otherwise NO.
 * Constraints are small (up to 100), so standard integer types are sufficient.
 */

void solve() {
    int A, B, C, X;
    if (!(cin >> A >> B >> C >> X)) return;

    // Check all three possible combinations
    if ((A + B >= X) || (A + C >= X) || (B + C >= X)) {
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