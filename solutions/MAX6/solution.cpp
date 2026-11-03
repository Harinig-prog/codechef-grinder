#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have X runs in 100 balls.
 * Let s be the number of 6s, and r be the remaining balls (100 - s).
 * The runs from 6s are 6 * s.
 * The remaining runs (X - 6 * s) must be achievable using the remaining (100 - s) balls.
 * Since we want to maximize s, we want to use as many 6s as possible.
 * 
 * Constraints:
 * 1. s <= 100 (total balls)
 * 2. 6 * s <= X (cannot score more than X runs)
 * 3. The remaining runs (X - 6 * s) must be achievable in (100 - s) balls.
 *    The maximum runs possible in (100 - s) balls using 0, 1, 2, 3, 4 is 4 * (100 - s).
 *    So, (X - 6 * s) <= 4 * (100 - s)
 *    X - 6s <= 400 - 4s
 *    X - 400 <= 2s
 *    s >= (X - 400) / 2
 * 
 * Since we want the maximum s, we start from s = floor(X / 6) and check downwards.
 * The first s that satisfies (X - 6 * s) <= 4 * (100 - s) is our answer.
 * Actually, since we can score 0 runs, the condition is simply:
 * (X - 6 * s) <= 4 * (100 - s) AND (X - 6 * s) >= 0.
 */

void solve() {
    int X;
    if (!(cin >> X)) return;

    // We want to maximize s such that:
    // 1. 6 * s <= X
    // 2. X - 6 * s <= 4 * (100 - s)  (Remaining runs must be <= max possible with 4s)
    // 3. s <= 100
    
    for (int s = 100; s >= 0; --s) {
        if (6 * s <= X) {
            int remaining_runs = X - 6 * s;
            int remaining_balls = 100 - s;
            if (remaining_runs <= 4 * remaining_balls) {
                cout << s << "\n";
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X, but standard competitive 
    // programming practice often involves test cases. The prompt says "For each 
    // test case", so we handle it accordingly.
    int t = 1; 
    // If the input format implies multiple test cases, uncomment the line below:
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}