#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The robot starts at position X.
 * It executes N commands.
 * We need to count the number of distinct integer coordinates visited.
 * 
 * Since N is small (up to 100), we can track all visited coordinates using a 
 * std::set<long long> to store unique positions.
 * The robot starts at X, so X is always visited.
 * For each command 'L' or 'R', update the current position and insert it into the set.
 * Finally, the size of the set is the answer.
 * 
 * Time Complexity: O(N log N) per test case, where N is the number of commands.
 * Space Complexity: O(N) to store the visited coordinates.
 */

void solve() {
    int N;
    long long X;
    cin >> N >> X;
    string S;
    cin >> S;

    set<long long> visited;
    long long current_pos = X;
    
    // The robot starts at X, so it visits X initially.
    visited.insert(current_pos);

    for (char move : S) {
        if (move == 'L') {
            current_pos--;
        } else if (move == 'R') {
            current_pos++;
        }
        visited.insert(current_pos);
    }

    cout << visited.size() << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}