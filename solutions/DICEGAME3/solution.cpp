#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N rounds.
 * Round 1: Score = X1
 * Round i (i > 1): 
 *   If X_{i-1} == 1, Score += 2 * Xi
 *   Else, Score += Xi
 * 
 * To maximize the score:
 * - If we roll a 1, the next round's roll is doubled.
 * - To maximize the total, we want to roll a 1, then immediately roll a 6.
 * - This pattern [1, 6, 1, 6, ...] gives 1 + 12 + 1 + 12...
 * 
 * Let's analyze N:
 * If N is even: We can have N/2 pairs of (1, 6).
 * Total score = (1 + 12) * (N/2) = 13 * (N/2).
 * 
 * If N is odd: We can have (N-1)/2 pairs of (1, 6) and one extra roll.
 * To maximize, we should end with a 6 if possible, or start with a 6.
 * Actually, the pattern [6, 1, 6, 1, 6] for N=5:
 * 6 + 1 + 12 + 1 + 12 = 32.
 * Pattern [1, 6, 1, 6, 6]:
 * 1 + 12 + 1 + 12 + 6 = 32.
 * 
 * General formula:
 * Each pair (1, 6) contributes 13.
 * If N is even: N/2 * 13.
 * If N is odd: (N-1)/2 * 13 + 6.
 */

void solve() {
    long long N;
    cin >> N;
    
    if (N % 2 == 0) {
        cout << (N / 2) * 13 << "\n";
    } else {
        cout << ((N - 1) / 2) * 13 + 6 << "\n";
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