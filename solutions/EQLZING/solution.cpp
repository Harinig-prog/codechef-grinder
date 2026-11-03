#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have two integers A and B.
 * In one operation, we can add d to A and subtract d from B, or vice versa.
 * Let the new values be A' and B'.
 * A' = A + d, B' = B - d  => A' + B' = A + d + B - d = A + B
 * A' = A - d, B' = B + d  => A' + B' = A - d + B + d = A + B
 * 
 * The sum of the two numbers remains invariant under these operations.
 * If we want to make A and B equal, let the final value be X.
 * Then A' = X and B' = X.
 * The sum is A' + B' = 2X.
 * Since the sum is invariant, 2X = A + B.
 * This implies that (A + B) must be an even number for X to be an integer.
 * 
 * If (A + B) is even, we can always reach the state where A = B = (A + B) / 2.
 * For example, if A < B, we can choose d = (B - A) / 2.
 * Then A' = A + (B - A) / 2 = (A + B) / 2
 * And B' = B - (B - A) / 2 = (2B - B + A) / 2 = (A + B) / 2.
 * 
 * Thus, the condition is simply that (A + B) must be divisible by 2.
 * This is equivalent to saying A and B must have the same parity (both even or both odd).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // Check if the sum is even
        if ((a + b) % 2 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}