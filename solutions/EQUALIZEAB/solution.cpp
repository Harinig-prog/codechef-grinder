#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have two numbers A and B. In one operation, we can change (A, B) to:
 * 1. (A + X, B - X)
 * 2. (A - X, B + X)
 * 
 * Let the number of times we perform the first operation be k1 and the second be k2.
 * The final values will be:
 * A' = A + (k1 - k2) * X
 * B' = B - (k1 - k2) * X
 * 
 * Let k = k1 - k2. Then:
 * A' = A + k * X
 * B' = B - k * X
 * 
 * We want A' = B', so:
 * A + k * X = B - k * X
 * 2 * k * X = B - A
 * 
 * This implies that (B - A) must be divisible by (2 * X).
 * If (B - A) is divisible by (2 * X), then there exists an integer k such that 
 * 2 * k * X = B - A, and we can reach the state where A' = B'.
 * 
 * Note: Since k can be negative, k1 and k2 can be any non-negative integers 
 * that satisfy the difference k.
 */

void solve() {
    long long A, B, X;
    cin >> A >> B >> X;

    // We need (B - A) to be divisible by (2 * X)
    // Let diff = B - A
    // We need diff % (2 * X) == 0
    
    long long diff = B - A;
    
    // Since the operation is symmetric, we can check the absolute difference
    // or just check if (B - A) is a multiple of 2*X.
    if (diff % (2 * X) == 0) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}