#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N elephants and C total candies.
 * Each elephant i requires at least A[i] candies.
 * To make all elephants happy, we need to provide at least sum(A[1...N]) candies.
 * If total candies C >= sum(A[1...N]), then it is possible to make them happy.
 * Otherwise, it is not.
 * 
 * Constraints:
 * T <= 1000
 * N <= 100
 * C <= 10^9
 * A[i] <= 10000
 * 
 * The sum of A[i] can be at most 100 * 10000 = 1,000,000.
 * This fits within a standard 32-bit integer, but using long long is safer
 * and good practice for competitive programming to avoid overflow.
 */

void solve() {
    int N;
    long long C;
    cin >> N >> C;
    
    long long sum_required = 0;
    for (int i = 0; i < N; ++i) {
        long long a;
        cin >> a;
        sum_required += a;
    }
    
    if (C >= sum_required) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
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