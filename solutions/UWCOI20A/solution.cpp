#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: UWCOI20A - Find maximum in an Array
 * The task is to find the maximum value in an array of N integers.
 * Time Complexity: O(N) per test case, where N is the number of mountains.
 * Space Complexity: O(1) auxiliary space (excluding input storage).
 */

int main() {
    // Optimize I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long max_height = -1; // Heights are >= 0, so -1 is a safe initial value
        for (int i = 0; i < n; ++i) {
            long long current_height;
            cin >> current_height;
            if (current_height > max_height) {
                max_height = current_height;
            }
        }
        
        cout << max_height << "\n";
    }
    
    return 0;
}