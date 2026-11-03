#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two integers A and B representing the number of slices Alice and Bob have.
 * While A != B, Charlie eats half (rounded up) of the larger pile.
 * We need to track the total number of slices eaten.
 * 
 * Constraints: 1 <= A, B <= 100.
 * Since the values are small, a simple simulation loop will work perfectly.
 * Even if A or B were larger, the process converges quickly because the larger pile
 * is reduced by at least half each step.
 */

void solve() {
    long long A, B;
    if (!(cin >> A >> B)) return;

    long long total_eaten = 0;

    while (A != B) {
        if (A > B) {
            // Charlie eats half of Alice's slices, rounded up.
            // ceil(A / 2.0) is equivalent to (A + 1) / 2 using integer division.
            long long eaten = (A + 1) / 2;
            total_eaten += eaten;
            A -= eaten;
        } else {
            // Charlie eats half of Bob's slices, rounded up.
            long long eaten = (B + 1) / 2;
            total_eaten += eaten;
            B -= eaten;
        }
    }

    cout << total_eaten << "\n";
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