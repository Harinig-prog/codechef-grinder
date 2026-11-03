#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The frog starts at position N.
 * Jump 1 (odd): Left by (N-1) -> pos = N - (N-1) = 1
 * Jump 2 (even): Right by (N-2) -> pos = 1 + (N-2) = N-1
 * Jump 3 (odd): Left by (N-3) -> pos = (N-1) - (N-3) = 2
 * Jump 4 (even): Right by (N-4) -> pos = 2 + (N-4) = N-2
 * Jump 5 (odd): Left by (N-5) -> pos = (N-2) - (N-5) = 3
 * Jump 6 (even): Right by (N-6) -> pos = 3 + (N-6) = N-3
 * 
 * Pattern Observation:
 * N=2: 1
 * N=3: 2
 * N=4: 2
 * N=5: 3
 * N=6: 3
 * N=7: 4
 * N=8: 4
 * 
 * The sequence is: 1, 2, 2, 3, 3, 4, 4, 5, 5...
 * For N >= 2, the result is floor(N/2) + 1.
 * Let's verify:
 * N=2: floor(2/2) + 1 = 2 (Wait, sample says 1)
 * Let's re-check:
 * N=2: 1
 * N=3: 2
 * N=4: 2
 * N=5: 3
 * N=6: 3
 * 
 * The formula is actually ceil(N/2).
 * N=2: ceil(2/2) = 1
 * N=3: ceil(3/2) = 2
 * N=4: ceil(4/2) = 2
 * N=5: ceil(5/2) = 3
 * N=6: ceil(6/2) = 3
 * This matches all sample cases.
 */

void solve() {
    long long N;
    cin >> N;
    // ceil(N/2) can be calculated as (N + 1) / 2 using integer division
    long long ans = (N + 1) / 2;
    cout << ans << "\n";
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