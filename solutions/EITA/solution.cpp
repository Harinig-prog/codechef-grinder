#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Strategy 1: Work x units every day for 7 days. Total = 7 * x.
 * Strategy 2: Work y units for d days, and z units for (7 - d) days. Total = (y * d) + (z * (7 - d)).
 * We need to find max(Strategy 1, Strategy 2).
 * 
 * Constraints:
 * T <= 5000
 * d < 7
 * x, y, z <= 18
 * The values are small enough that standard integer types are sufficient, 
 * but using long long is safe practice.
 */

void solve() {
    long long d, x, y, z;
    if (!(cin >> d >> x >> y >> z)) return;

    long long strategy1 = 7 * x;
    long long strategy2 = (y * d) + (z * (7 - d));

    cout << max(strategy1, strategy2) << "\n";
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