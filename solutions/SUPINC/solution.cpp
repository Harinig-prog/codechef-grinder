#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A superincreasing array A satisfies A[i] > sum(A[1]...A[i-1]).
 * To check if a superincreasing array exists with A[K] = X:
 * 
 * 1. To minimize the sum of elements before A[K], we should pick the smallest 
 *    possible positive integers.
 *    The smallest superincreasing sequence is:
 *    A[1] = 1
 *    A[2] = 2 (since 2 > 1)
 *    A[3] = 4 (since 4 > 1+2=3)
 *    A[4] = 8 (since 8 > 1+2+4=7)
 *    In general, A[i] = 2^(i-1).
 * 
 * 2. For A[K] = X to be valid, X must be at least as large as the K-th term 
 *    of the smallest possible superincreasing sequence.
 *    If K is large (e.g., K > 30), 2^(K-1) will exceed the maximum possible 
 *    value of X (10^9).
 * 
 * 3. If K-1 >= 30, then 2^(K-1) > 10^9. Since X <= 10^9, if K > 30, 
 *    it is impossible to satisfy the condition.
 * 
 * 4. Otherwise, we check if X >= 2^(K-1).
 */

void solve() {
    long long N, K, X;
    cin >> N >> K >> X;

    // The smallest possible value for A[K] in a superincreasing sequence
    // is 2^(K-1).
    // If K-1 >= 30, 2^(K-1) > 10^9, which is greater than any possible X.
    if (K - 1 >= 30) {
        cout << "No" << "\n";
        return;
    }

    long long min_val = (1LL << (K - 1));

    if (X >= min_val) {
        cout << "Yes" << "\n";
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