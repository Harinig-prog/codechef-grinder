#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Donation Drive
 * The goal is to find the difference between the target donations (N) 
 * and the collected donations (X).
 * 
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1), as we only use a few variables.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        // The remaining donations needed is simply N - X.
        // Given constraints 1 <= X <= N <= 20, the result will always be >= 0.
        long long remaining = n - x;
        
        cout << remaining << "\n";
    }
    
    return 0;
}