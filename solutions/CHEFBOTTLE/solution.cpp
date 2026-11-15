#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N bottles, each with capacity X.
 * Total water available is K.
 * We want to find the maximum number of bottles that can be filled completely.
 * 
 * 1. The number of bottles that can be filled by the water is floor(K / X).
 * 2. However, Chef only has N bottles available.
 * 3. Therefore, the number of bottles filled cannot exceed N.
 * 4. The result is min(N, floor(K / X)).
 * 
 * Constraints:
 * N, X, K <= 10^5.
 * The calculation fits within standard integer types, but using long long 
 * is safe practice in competitive programming to prevent overflow in intermediate steps.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x, k;
        cin >> n >> x >> k;

        // If capacity is 0, we cannot fill any bottles (though constraints say X >= 1)
        if (x == 0) {
            cout << 0 << "\n";
            continue;
        }

        // Calculate maximum bottles possible based on water
        long long bottles_by_water = k / x;

        // The answer is the minimum of available bottles and bottles filled by water
        long long ans = min(n, bottles_by_water);

        cout << ans << "\n";
    }

    return 0;
}