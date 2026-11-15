#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice has A chocolates and Bob has B chocolates.
 * Total chocolates = A + B.
 * To distribute them equally between two people, the total sum (A + B) 
 * must be divisible by 2.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        // Check if the sum is even
        if ((a + b) % 2 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}