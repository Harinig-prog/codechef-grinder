#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Gi-Hun and Ali have height K.
 * A player i is visible to Gi-Hun if their height H_i <= K.
 * If a player has height H_i > K, they block the line of sight.
 * Therefore, any player with height strictly greater than K must be removed (shot).
 * We need to count how many players have H_i > K.
 * 
 * Time Complexity: O(N) per test case, O(sum of N) total.
 * Space Complexity: O(1) auxiliary space (excluding input storage).
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        int count = 0;
        for (int i = 0; i < n; ++i) {
            long long h;
            cin >> h;
            // If the player's height is greater than K, they must be shot.
            if (h > k) {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}