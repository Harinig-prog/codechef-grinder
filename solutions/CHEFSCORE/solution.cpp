#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N problems, each worth X marks.
 * Chef can get either 0 or X marks per problem.
 * Total score Y must be a multiple of X, where the multiplier (number of problems solved)
 * is between 0 and N inclusive.
 * 
 * Mathematically:
 * 1. Y must be divisible by X (Y % X == 0).
 * 2. The number of problems solved (Y / X) must be <= N.
 * 3. Special case: If Y == 0, it is always possible (solve 0 problems).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        // If Y is 0, Chef can always achieve this by solving 0 problems.
        if (y == 0) {
            cout << "YES" << "\n";
        } 
        // If Y is not 0, it must be a multiple of X, 
        // and the number of problems solved (y/x) must not exceed N.
        else if (y % x == 0 && (y / x) <= n) {
            cout << "YES" << "\n";
        } 
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}