#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to find the minimum number of notes to represent a sum N using denominations
 * {1, 2, 5, 10, 50, 100}.
 * This is a classic greedy problem. Since each denomination is a divisor of the next 
 * larger denomination (or can be formed optimally by the greedy choice), we can 
 * always take as many of the largest possible denomination as possible.
 * 
 * Algorithm:
 * 1. Start with the largest denomination (100).
 * 2. Calculate how many notes of this denomination fit into N (N / denomination).
 * 3. Add this count to the total.
 * 4. Update N to the remainder (N % denomination).
 * 5. Repeat for all denominations in descending order.
 */

void solve() {
    long long n;
    cin >> n;

    int denominations[] = {100, 50, 10, 5, 2, 1};
    long long count = 0;

    for (int i = 0; i < 6; ++i) {
        if (n >= denominations[i]) {
            count += (n / denominations[i]);
            n %= denominations[i];
        }
    }

    cout << count << "\n";
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