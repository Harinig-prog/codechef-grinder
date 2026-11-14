#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: ATM Machine
 * Approach:
 * We maintain the current amount of money in the ATM (K).
 * For each person i from 1 to N, we check if the requested amount A_i <= K.
 * If true, the person gets the money (output '1') and we subtract A_i from K.
 * If false, the person gets nothing (output '0') and K remains unchanged.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the result string or O(1) if printed directly.
 */

void solve() {
    int N;
    long long K;
    if (!(cin >> N >> K)) return;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    string result = "";
    for (int i = 0; i < N; ++i) {
        if (K >= A[i]) {
            result += '1';
            K -= A[i];
        } else {
            result += '0';
        }
    }
    cout << result << "\n";
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