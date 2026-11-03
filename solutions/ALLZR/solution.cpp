#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let x be the number of times we perform Type 1 operation.
 * Let y be the number of times we perform Type 2 operation.
 * 
 * The operations are:
 * Type 1: A -> A-1, B -> B-2
 * Type 2: B -> B-1, C -> C-3
 * 
 * To make A, B, and C zero:
 * 1. A - x = 0  => x = A
 * 2. C - 3y = 0 => y = C / 3 (must be divisible)
 * 3. B - 2x - y = 0
 * 
 * Substituting x and y into the B equation:
 * B - 2(A) - (C/3) = 0
 * B = 2A + C/3
 * 
 * Conditions for "Yes":
 * 1. C must be divisible by 3 (C % 3 == 0).
 * 2. B must equal 2*A + C/3.
 * 3. Since x and y represent counts of operations, x and y must be non-negative.
 *    Given A, B, C >= 1, x = A is always >= 1.
 *    Given C >= 1 and C % 3 == 0, y = C/3 is always >= 1.
 */

void solve() {
    long long A, B, C;
    cin >> A >> B >> C;

    if (C % 3 == 0) {
        long long x = A;
        long long y = C / 3;
        
        if (B == 2 * x + y) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    } else {
        cout << "No" << "\n";
    }
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