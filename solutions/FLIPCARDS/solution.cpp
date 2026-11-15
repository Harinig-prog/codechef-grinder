#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N cards in total.
 * X cards are face-up.
 * (N - X) cards are face-down.
 * 
 * To make all cards face-up, we must flip all (N - X) face-down cards.
 * To make all cards face-down, we must flip all X face-up cards.
 * 
 * The goal is to find the minimum number of operations, which is:
 * min(X, N - X)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, x;
        cin >> n >> x;

        // The number of face-up cards is x.
        // The number of face-down cards is (n - x).
        // We can either flip all face-up cards to make them face-down,
        // or flip all face-down cards to make them face-up.
        // The minimum operations is the smaller of these two counts.
        int result = min(x, n - x);
        
        cout << result << "\n";
    }

    return 0;
}