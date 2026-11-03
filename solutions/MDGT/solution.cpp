#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Bhoomi is at index N-1 (0-indexed).
 * She wants to reach index 'i' such that H[N-1] > max(H[0], ..., H[i-1]).
 * The number of swaps to reach index 'i' is (N-1) - i.
 * To minimize swaps, we want the largest 'i' such that the condition holds.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }

    if (N == 1) {
        cout << 0 << "\n";
        return;
    }

    int bhoomi_height = H[N - 1];
    int target_i = 0;

    // We check every possible position 'i' from N-1 down to 0.
    // The first one that satisfies the condition is the one requiring 
    // the minimum number of swaps.
    for (int i = N - 1; i >= 0; --i) {
        bool can_see = true;
        for (int j = 0; j < i; ++j) {
            if (H[j] >= bhoomi_height) {
                can_see = false;
                break;
            }
        }
        
        if (can_see) {
            target_i = i;
            break;
        }
    }
    
    // Swaps needed to move from index N-1 to target_i is (N-1) - target_i
    cout << (N - 1) - target_i << "\n";
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