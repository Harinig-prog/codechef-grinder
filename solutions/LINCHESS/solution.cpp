#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is at position K. A player at position P_i can capture Chef if K is a multiple of P_i.
 * That is, K % P_i == 0.
 * The number of moves required for a player at P_i to reach K is (K / P_i).
 * We want to minimize the number of moves, which is equivalent to maximizing P_i 
 * such that P_i is a divisor of K.
 * 
 * Constraints:
 * T <= 100, N <= 1000, K <= 10^9.
 * An O(N) approach per test case is perfectly fine (100 * 1000 = 10^5 operations).
 */

void solve() {
    int N;
    long long K;
    cin >> N >> K;
    
    vector<long long> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }
    
    long long best_p = -1;
    long long min_moves = -1;
    
    for (int i = 0; i < N; ++i) {
        // Check if the player can reach K
        if (K % P[i] == 0) {
            long long moves = K / P[i];
            // We want the smallest number of moves
            if (min_moves == -1 || moves < min_moves) {
                min_moves = moves;
                best_p = P[i];
            }
        }
    }
    
    cout << best_p << "\n";
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