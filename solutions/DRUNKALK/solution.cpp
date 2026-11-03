#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * In every 2 seconds (a pair of 1st and 2nd second), the drunkard moves:
 * +3 (forward) - 1 (backward) = +2 net displacement.
 * 
 * If k is even:
 * There are k/2 pairs of (3, -1).
 * Total displacement = (k/2) * 2 = k.
 * 
 * If k is odd:
 * There are (k-1)/2 pairs of (3, -1) plus one extra 3-step forward move.
 * Total displacement = ((k-1)/2) * 2 + 3 = (k-1) + 3 = k + 2.
 * 
 * Constraints:
 * T <= 100,000
 * k <= 100,000
 * The logic is O(1) per test case, which is well within the time limit.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long k;
        cin >> k;
        
        if (k == 0) {
            cout << 0 << "\n";
        } else if (k % 2 == 0) {
            // Even seconds: k/2 pairs of (+3, -1) = +2 net each
            cout << k << "\n";
        } else {
            // Odd seconds: (k-1)/2 pairs of (+3, -1) + one final +3
            // (k-1) + 3 = k + 2
            cout << k + 2 << "\n";
        }
    }
    
    return 0;
}