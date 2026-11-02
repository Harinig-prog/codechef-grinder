#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice and Bob must end up with the exact same multiset of animals.
 * Let the total multiset of animals in the store be S.
 * If Alice has multiset A and Bob has multiset B, then A = B.
 * Since A + B = S (where + denotes multiset union), this implies 2 * A = S.
 * For this to be possible, every animal type must appear an even number of times 
 * in the total multiset S. If any animal type appears an odd number of times, 
 * it is impossible to split them equally between Alice and Bob.
 * 
 * Algorithm:
 * 1. Count the frequency of each animal type.
 * 2. Check if every frequency is even.
 * 3. If all are even, output YES, otherwise output NO.
 * 
 * Complexity:
 * Time: O(N) per test case, where N is the number of animals.
 * Space: O(K) where K is the range of animal types (100).
 */

void solve() {
    int n;
    cin >> n;
    
    // Since animal types are between 1 and 100, we can use a frequency array.
    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        counts[a]++;
    }
    
    bool possible = true;
    for (auto const& [type, count] : counts) {
        if (count % 2 != 0) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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