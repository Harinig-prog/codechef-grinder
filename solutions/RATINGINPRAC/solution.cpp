#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Difficulty Rating Order
 * The task is to check if an array of N integers is sorted in non-decreasing order.
 * A sequence is non-decreasing if for all i, A[i] <= A[i+1].
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

    bool is_non_decreasing = true;
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] > A[i + 1]) {
            is_non_decreasing = false;
            break;
        }
    }

    if (is_non_decreasing) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}