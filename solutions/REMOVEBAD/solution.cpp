#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * To make all elements in an array the same with the minimum number of operations,
 * we need to keep the elements that appear most frequently in the array.
 * 
 * If the most frequent element appears 'max_freq' times, we want to keep all 
 * occurrences of this element and remove all other elements.
 * 
 * The number of elements to remove = Total elements (N) - Frequency of the most frequent element.
 * 
 * Constraints:
 * N <= 10^5, Sum of N <= 3 * 10^5.
 * A_i <= N.
 * An O(N) approach per test case using a frequency array or hash map is optimal.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    // Since A_i <= N, we can use a frequency array of size N + 1.
    // Using a vector for dynamic sizing based on N.
    vector<int> freq(n + 1, 0);
    int max_freq = 0;
    
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        freq[val]++;
        if (freq[val] > max_freq) {
            max_freq = freq[val];
        }
    }
    
    // The minimum operations required is N - max_freq
    cout << (n - max_freq) << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}