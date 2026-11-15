#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * There are N people and X tiles.
 * In each round, every person picks 1 tile.
 * This means in one round, N tiles are used.
 * For the game to be valid:
 * 1. X must be divisible by N (X % N == 0), so that all tiles are used exactly.
 * 2. X must be greater than or equal to N (X >= N), so that at least one round can be played.
 * 
 * Combining these, the condition is (X % N == 0) AND (X >= N).
 */

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        // Check if X is divisible by N and X is at least N
        if (x % n == 0 && x >= n) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}