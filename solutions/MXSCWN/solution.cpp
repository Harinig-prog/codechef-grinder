#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef wants to maximize the total coins received while losing at least once.
 * Total coins = Sum of (A_i if he wins, B_i if he loses).
 * Let S = sum of all A_i.
 * If he chooses to lose against opponent k, the total coins will be:
 * Total = (Sum of all A_i) - A_k + B_k
 * Total = S - (A_k - B_k)
 * 
 * To maximize this, we need to minimize (A_k - B_k) among all possible opponents k.
 * Since he must lose at least once, we calculate the total for every possible 
 * single loss and pick the maximum.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the arrays.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];

    long long sum_A = 0;
    for (int i = 0; i < N; ++i) {
        sum_A += A[i];
    }

    long long max_coins = -1; // Initialize with a value smaller than any possible sum

    // We must lose at least once. Try losing against each opponent i.
    for (int i = 0; i < N; ++i) {
        // If we lose against i, we get B[i] instead of A[i]
        long long current_total = sum_A - A[i] + B[i];
        if (max_coins == -1 || current_total > max_coins) {
            max_coins = current_total;
        }
    }

    cout << max_coins << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}