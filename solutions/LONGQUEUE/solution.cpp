#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Sushil is at the N-th position (index N-1).
 * Let his wealth be X = A[N-1].
 * He can bully the person at index i (where i < N-1) if A[i] <= X / 2.
 * Since he only bullies the person directly in front of him, he will keep
 * moving forward as long as the person immediately in front of him satisfies
 * the condition A[i] <= X / 2.
 * 
 * We start from the person at index N-2 and move backwards.
 * If A[i] <= X / 2, he bullies them (position decreases).
 * If A[i] > X / 2, he stops bullying because he cannot bully this person,
 * and since he can only bully the person directly in front, he cannot reach
 * anyone further ahead.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int sushil_wealth = A[N - 1];
    int current_pos = N; // 1-based position

    // Check people from the one directly in front of Sushil (index N-2)
    // backwards to the start of the line.
    for (int i = N - 2; i >= 0; --i) {
        if (A[i] <= sushil_wealth / 2) {
            current_pos--;
        } else {
            // Cannot bully this person, so he stops here.
            break;
        }
    }

    cout << current_pos << "\n";
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