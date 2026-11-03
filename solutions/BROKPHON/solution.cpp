#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A player i (1-indexed) is involved in a "wrong" message if:
 * 1. The message they received (A[i]) is different from the message the previous player (A[i-1]) sent.
 * 2. The message they sent (A[i+1]) is different from the message they received (A[i]).
 * 
 * Essentially, if A[i] != A[i+1], then either player i whispered it wrong, or player i+1 misheard it.
 * We need to count all unique indices i such that A[i] != A[i+1] or A[i] != A[i-1].
 * 
 * Let's use a boolean array 'is_wrong' of size N to mark players.
 * For each i from 0 to N-2:
 *    If A[i] != A[i+1]:
 *        Mark player i as wrong.
 *        Mark player i+1 as wrong.
 * Finally, count the number of true values in the boolean array.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<bool> is_wrong(N, false);
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] != A[i + 1]) {
            is_wrong[i] = true;
            is_wrong[i + 1] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (is_wrong[i]) {
            count++;
        }
    }
    cout << count << "\n";
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