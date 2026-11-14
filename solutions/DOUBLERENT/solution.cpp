#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: DOUBLERENT
 * The problem asks to double the initial rent X.
 * Given constraints: 1 <= X <= 10.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer input X per run,
    // but standard competitive programming practice often involves a test case count.
    // Based on the problem description "The input consists of a single integer X",
    // we read X directly.
    
    long long x;
    if (cin >> x) {
        // Calculate the doubled rent
        long long final_rent = x * 2;
        
        // Output the result
        cout << final_rent << "\n";
    }

    return 0;
}