#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to maximize |A_x - A_y| + |A_y - A_z| + |A_z - A_x|.
 * Let the sorted values of the chosen indices be a <= b <= c.
 * The expression becomes (b - a) + (c - b) + (c - a) = 2c - 2a = 2 * (max - min).
 * To maximize this, we should pick the smallest element in the array as 'a' 
 * and the largest element in the array as 'c'.
 * For 'b', any other element in the array will work, as long as the indices are distinct.
 * Since N >= 3, we can always pick the minimum element, the maximum element, 
 * and any other element to satisfy the distinct indices requirement.
 * 
 * Time Complexity: O(N) per test case to find min and max.
 * Space Complexity: O(1) auxiliary space (or O(N) to store the array).
 */

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long min_val = 2e9; // Larger than any possible A_i
    long long max_val = -2e9; // Smaller than any possible A_i
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < min_val) min_val = a[i];
        if (a[i] > max_val) max_val = a[i];
    }
    
    // The expression simplifies to 2 * (max_val - min_val)
    long long result = 2 * (max_val - min_val);
    cout << result << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}