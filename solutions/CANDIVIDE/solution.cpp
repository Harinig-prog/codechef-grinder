#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N candies and 3 friends.
 * We need to distribute all N candies equally among the 3 friends.
 * This is possible if and only if N is divisible by 3.
 * Mathematically, N % 3 == 0.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= N <= 100
 * Time complexity per test case: O(1)
 * Space complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n;
        cin >> n;
        
        // Check if N is divisible by 3
        if (n % 3 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}