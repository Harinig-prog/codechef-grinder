#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Online cost = N
 * Discounted online cost = N - (10% of N) = N - 0.1 * N = 0.9 * N
 * To avoid floating point issues, we can compare 0.9 * N with M.
 * Multiplying both sides by 10, we compare 9 * N with 10 * M.
 * 
 * Logic:
 * If 9 * N < 10 * M: ONLINE
 * If 9 * N > 10 * M: DINING
 * If 9 * N == 10 * M: EITHER
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        // Using long long to prevent overflow, though constraints N, M <= 1000
        // make int sufficient, long long is safer practice.
        long long online_cost_scaled = 9 * n;
        long long dining_cost_scaled = 10 * m;

        if (online_cost_scaled < dining_cost_scaled) {
            cout << "ONLINE" << "\n";
        } else if (online_cost_scaled > dining_cost_scaled) {
            cout << "DINING" << "\n";
        } else {
            cout << "EITHER" << "\n";
        }
    }

    return 0;
}