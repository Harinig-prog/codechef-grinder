#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each friend needs X slices.
 * Total friends = N.
 * Total slices required = N * X.
 * Each pizza has 4 slices.
 * We need to find the minimum number of pizzas (P) such that P * 4 >= N * X.
 * This is equivalent to P = ceil((N * X) / 4.0).
 * Using integer arithmetic, ceil(a / b) can be calculated as (a + b - 1) / b.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        // Total slices needed
        long long total_slices = n * x;

        // Each pizza has 4 slices.
        // We need the smallest integer P such that 4 * P >= total_slices.
        // This is equivalent to (total_slices + 3) / 4 using integer division.
        long long pizzas = (total_slices + 3) / 4;

        cout << pizzas << "\n";
    }

    return 0;
}