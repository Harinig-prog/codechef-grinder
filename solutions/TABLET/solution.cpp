#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Buying New Tablet
 * Approach:
 * Iterate through all N tablets. For each tablet, check if its price P_i is 
 * less than or equal to the budget B. If it is, calculate the area (W_i * H_i)
 * and keep track of the maximum area found so far.
 * 
 * Time Complexity: O(T * N)
 * Space Complexity: O(1)
 */

void solve() {
    int N;
    long long B;
    cin >> N >> B;

    long long max_area = -1;

    for (int i = 0; i < N; ++i) {
        long long W, H, P;
        cin >> W >> H >> P;

        // Check if the tablet is within budget
        if (P <= B) {
            long long current_area = W * H;
            if (current_area > max_area) {
                max_area = current_area;
            }
        }
    }

    if (max_area == -1) {
        cout << "no tablet" << "\n";
    } else {
        cout << max_area << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}