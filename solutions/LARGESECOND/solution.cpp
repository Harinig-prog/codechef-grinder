#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to find the sum of the two largest distinct integers in an array.
 * Since the constraints on A_i are small (1 <= A_i <= 1000), we can use a 
 * boolean array or a set to track unique elements, or simply sort the unique 
 * elements. Given N up to 10^5, an O(N log N) or O(N) approach is required.
 * 
 * Approach:
 * 1. Store all unique elements of the array.
 * 2. Sort the unique elements in descending order.
 * 3. The sum of the first two elements is the answer.
 */

void solve() {
    int n;
    cin >> n;
    
    // Using a set to store unique elements automatically handles duplicates
    // and keeps them sorted.
    set<int> unique_elements;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        unique_elements.insert(val);
    }
    
    // Since the problem guarantees at least two distinct integers exist,
    // we can safely access the last two elements of the set.
    auto it = unique_elements.rbegin();
    int largest = *it;
    it++;
    int second_largest = *it;
    
    cout << (long long)largest + second_largest << "\n";
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