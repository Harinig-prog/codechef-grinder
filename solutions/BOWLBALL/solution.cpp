#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Bowling Balls
 * The task is to count how many integers A_i in a given array satisfy X <= A_i <= Y.
 * Constraints:
 * T <= 100
 * N <= 100
 * 6 <= X <= Y <= 16
 * 6 <= A_i <= 16
 * 
 * Time Complexity: O(T * N)
 * Space Complexity: O(N)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int weight;
            cin >> weight;
            // Check if the bowling ball weight is within the inclusive range [X, Y]
            if (weight >= x && weight <= y) {
                count++;
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}