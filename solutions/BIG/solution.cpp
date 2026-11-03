#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A student i is happy if A[i] > max(A[0], A[1], ..., A[i-1]).
 * For the first student (i=0), there are no students before them, 
 * so the condition is vacuously true (or simply, they are the first, 
 * so they are always happy).
 * 
 * We can maintain a running maximum of the scores encountered so far.
 * For each student, if their score is greater than the current running maximum,
 * they are happy, and we update the running maximum.
 * 
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N) to store the array, or O(1) if processed on the fly.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int current_max = -1;
    for (int i = 0; i < N; ++i) {
        if (A[i] > current_max) {
            cout << 1 << (i == N - 1 ? "" : " ");
            current_max = A[i];
        } else {
            cout << 0 << (i == N - 1 ? "" : " ");
        }
    }
    cout << "\n";
}

int main() {
    // Fast I/O as requested
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}