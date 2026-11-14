#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs N candies. He has X candies.
 * If X >= N, he needs 0 packets.
 * If X < N, he needs (N - X) more candies.
 * Since each packet contains 4 candies, he needs to buy ceil((N - X) / 4) packets.
 * Using integer arithmetic, ceil(a / b) can be calculated as (a + b - 1) / b.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        if (x >= n) {
            cout << 0 << "\n";
        } else {
            long long needed = n - x;
            // Calculate ceiling of needed / 4
            long long packets = (needed + 3) / 4;
            cout << packets << "\n";
        }
    }

    return 0;
}