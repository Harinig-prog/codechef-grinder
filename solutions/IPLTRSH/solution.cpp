#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N students and M tickets.
 * If N > M, then (N - M) students will not get tickets.
 * If N <= M, then all students get tickets, so 0 students are left out.
 * This can be represented as max(0, N - M).
 * 
 * Constraints:
 * T <= 1000
 * N, M <= 10^5
 * Time complexity: O(T)
 * Space complexity: O(1)
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, m;
        cin >> n >> m;
        
        if (n > m) {
            cout << (n - m) << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    
    return 0;
}