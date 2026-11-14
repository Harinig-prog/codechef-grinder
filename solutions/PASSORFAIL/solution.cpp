#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total questions = N
 * Correct answers = X
 * Incorrect answers = N - X
 * Marks for correct = 3
 * Penalty for incorrect = -1
 * Total score = (X * 3) + ((N - X) * -1)
 *             = 3X - N + X
 *             = 4X - N
 * Chef passes if Total score >= P
 * 
 * Constraints:
 * N <= 100, X <= N, P <= 3*N
 * The maximum possible score is 3*100 = 300, minimum is -100.
 * Standard 'int' is sufficient for these calculations.
 */

void solve() {
    int N, X, P;
    if (!(cin >> N >> X >> P)) return;

    // Calculate score based on the formula derived
    int score = (3 * X) - (N - X);

    // Check if score meets the passing criteria
    if (score >= P) {
        cout << "PASS" << "\n";
    } else {
        cout << "FAIL" << "\n";
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