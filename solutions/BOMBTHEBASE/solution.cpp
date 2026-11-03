#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A bomb with strength X destroys house i if A[i] < X.
 * If house i is destroyed, all houses 1 to i are destroyed.
 * To maximize the number of destroyed houses, we need to find the largest index i
 * such that A[i] < X. If such an i exists, the number of destroyed houses is i.
 * If no such house exists, the answer is 0.
 * 
 * Complexity:
 * Time: O(N) per test case, O(sum of N) total.
 * Space: O(1) auxiliary space (if we process input on the fly).
 */

void solve() {
    int N;
    long long X;
    cin >> N >> X;
    
    int max_index = 0;
    for (int i = 1; i <= N; ++i) {
        long long A;
        cin >> A;
        // If the current house can be destroyed, update the max_index.
        // Since we want the largest index i such that A[i] < X,
        // we simply keep track of the last index that satisfies the condition.
        if (A < X) {
            max_index = i;
        }
    }
    
    cout << max_index << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}