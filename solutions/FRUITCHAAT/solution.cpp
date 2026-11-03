#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each fruit chaat requires 2 bananas and 1 apple.
 * Given X bananas and Y apples:
 * - The number of chaats possible based on bananas is floor(X / 2).
 * - The number of chaats possible based on apples is Y.
 * - The total number of chaats is the minimum of these two constraints.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // Calculate max chaats based on bananas
        long long max_by_bananas = x / 2;
        
        // Calculate max chaats based on apples
        long long max_by_apples = y;
        
        // The result is the limiting factor between the two
        long long result = min(max_by_bananas, max_by_apples);
        
        cout << result << "\n";
    }
    
    return 0;
}