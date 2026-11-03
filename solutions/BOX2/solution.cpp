#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let the number of stones in box 1 be x and box 2 be y.
 * Total stones S = X + Y.
 * After moving 't' stones from box 1 to box 2, box 1 has (X - t) and box 2 has (Y + t).
 * The difference is |(X - t) - (Y + t)| = |X - Y - 2t|.
 * We want |X - Y - 2t| = K.
 * This implies two possibilities:
 * 1) X - Y - 2t = K  => 2t = X - Y - K
 * 2) X - Y - 2t = -K => 2t = X - Y + K
 * 
 * Also, we must ensure that the number of stones in each box remains non-negative:
 * 0 <= X - t <= S  and  0 <= Y + t <= S.
 * Since t can be negative (moving from box 2 to box 1), we can generalize:
 * Let 'd' be the net number of stones moved from box 1 to box 2.
 * New box 1: X - d, New box 2: Y + d.
 * Condition: |(X - d) - (Y + d)| = K => |X - Y - 2d| = K.
 * Constraints: 0 <= X - d <= X + Y  =>  -Y <= d <= X.
 * 
 * We need to find the minimum |d| such that:
 * X - Y - 2d = K  OR  X - Y - 2d = -K
 * 2d = X - Y - K  OR  2d = X - Y + K
 * 
 * Since we want minimum |d|, we check if these equations yield an integer d 
 * within the valid range [-Y, X].
 */

void solve() {
    long long X, Y, K;
    cin >> X >> Y >> K;

    long long diff = X - Y;
    long long ans = -1;

    // Case 1: X - Y - 2d = K  => 2d = X - Y - K
    if ((diff - K) % 2 == 0) {
        long long d = (diff - K) / 2;
        if (d >= -Y && d <= X) {
            if (ans == -1 || abs(d) < ans) ans = abs(d);
        }
    }

    // Case 2: X - Y - 2d = -K => 2d = X - Y + K
    if ((diff + K) % 2 == 0) {
        long long d = (diff + K) / 2;
        if (d >= -Y && d <= X) {
            if (ans == -1 || abs(d) < ans) ans = abs(d);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}