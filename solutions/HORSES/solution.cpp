#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N horses with skill levels S[i]. We need to find the minimum 
 * difference between any two horses' skill levels.
 * 
 * Approach:
 * 1. If we sort the array of skill levels, the minimum difference must occur 
 *    between two adjacent elements in the sorted array.
 * 2. Sorting takes O(N log N) time.
 * 3. After sorting, we iterate through the array once to find the minimum 
 *    difference between adjacent elements, which takes O(N) time.
 * 4. Total time complexity per test case: O(N log N).
 * 5. Given N <= 5000 and T <= 10, O(T * N log N) is well within the 1.5s limit.
 * 6. Skill values are up to 10^9, so the difference fits in a standard 32-bit 
 *    integer, but using long long is safer for general competitive programming.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<long long> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    
    // Sort the skills to bring the closest values next to each other
    sort(s.begin(), s.end());
    
    // Initialize min_diff with a large value
    long long min_diff = 2000000000LL; // Larger than max possible difference (10^9)
    
    // Compare adjacent elements
    for (int i = 0; i < n - 1; ++i) {
        long long diff = s[i + 1] - s[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }
    
    cout << min_diff << "\n";
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