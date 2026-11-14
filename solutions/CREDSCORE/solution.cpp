#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: CREDSCORE
 * Logic: Check if the given credit score X is greater than or equal to 750.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X, 
    // but standard competitive programming practice often involves 
    // reading until EOF or handling a test case count.
    // Based on the problem description: "The first and only line of input contains a single integer X"
    
    long long X;
    if (cin >> X) {
        if (X >= 750) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}