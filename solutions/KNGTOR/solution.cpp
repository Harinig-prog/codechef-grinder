#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N cars of capacity 5 and M cars of capacity 7.
 * The total capacity is simply (N * 5) + (M * 7).
 * Given the constraints (N, M <= 100), the maximum value is 100*5 + 100*7 = 1200,
 * which fits comfortably within a standard 32-bit integer.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, m;
        if (!(cin >> n >> m)) break;
        
        // Calculate total capacity
        long long total_capacity = (n * 5) + (m * 7);
        
        // Output the result
        cout << total_capacity << "\n";
    }

    return 0;
}