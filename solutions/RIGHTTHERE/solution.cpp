#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef wants to host N people in a hall with capacity X.
 * The condition to host the party is that the number of people N 
 * must be less than or equal to the capacity X (N <= X).
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= N, X <= 10
 * Since N and X are small, standard integer types are sufficient.
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
        long long n, x;
        cin >> n >> x;
        
        // Check if the number of people is within the hall's capacity
        if (n <= x) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}