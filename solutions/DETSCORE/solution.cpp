#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states that a problem is worth X points and consists of 10 test cases.
 * Each test case is worth the same amount of points.
 * Therefore, the points per test case = X / 10.
 * If Chef passes N test cases, the total score = (X / 10) * N.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 10 <= X <= 200
 * 0 <= N <= 10
 * X is a multiple of 10.
 * 
 * Since X is a multiple of 10, X/10 will always be an integer.
 * The maximum possible score is 200, which fits easily into a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, n;
        cin >> x >> n;
        
        // Calculate points per test case
        long long points_per_case = x / 10;
        
        // Calculate total score
        long long total_score = points_per_case * n;
        
        cout << total_score << "\n";
    }
    
    return 0;
}