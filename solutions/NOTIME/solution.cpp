#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs H hours to solve the problem.
 * He currently has x hours left.
 * He can travel to any of the N time zones, where the i-th zone adds T_i hours.
 * Total time available if he chooses time zone i is (x + T_i).
 * He can solve the problem if there exists at least one i such that (x + T_i) >= H.
 * 
 * Constraints:
 * N, H, x, T_i are all <= 100.
 * Time complexity: O(N) per test case.
 * Space complexity: O(1) extra space.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, H, x;
    // The problem description implies a single test case structure based on the input format,
    // but we handle the input as specified.
    if (!(cin >> N >> H >> x)) return 0;

    bool possible = false;
    for (int i = 0; i < N; ++i) {
        int T;
        cin >> T;
        // Check if current time zone allows solving the problem
        if (x + T >= H) {
            possible = true;
        }
    }

    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}