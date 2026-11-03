#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef attacks with power P, then P becomes floor(P/2).
 * This continues until P becomes 0.
 * The total damage dealt is the sum of the geometric series:
 * P + floor(P/2) + floor(P/4) + floor(P/8) + ...
 * 
 * Since P <= 10^5, the number of terms is small (log2(10^5) approx 17).
 * We can simulate the process directly for each test case.
 * 
 * Time Complexity: O(T * log(P))
 * Space Complexity: O(1)
 */

void solve() {
    long long H, P;
    if (!(cin >> H >> P)) return;

    long long total_damage = 0;
    long long current_p = P;

    while (current_p > 0) {
        total_damage += current_p;
        current_p /= 2;
    }

    if (total_damage >= H) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}