#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Remaining Neighborhoods
 * The total number of neighborhoods is 100.
 * Given N neighborhoods visited, the remaining is 100 - N.
 * Constraints: 0 <= N <= 100.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // The problem description implies a single input N, but standard competitive 
    // programming practice often involves test cases. If the problem specifies 
    // a single line of input, we handle it accordingly.
    if (!(cin >> t)) return 0;
    
    // Based on the problem description, N is the input.
    // If the input format implies a single integer N:
    int n = t;
    int total_neighborhoods = 100;
    cout << (total_neighborhoods - n) << "\n";

    return 0;
}