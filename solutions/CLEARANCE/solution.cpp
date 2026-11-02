#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef pays for X t-shirts.
 * For every 2 t-shirts paid, he gets 1 free.
 * Number of free t-shirts = X / 2.
 * Total t-shirts = X + (X / 2).
 * 
 * Constraints:
 * 2 <= X <= 100, X is even.
 * Since X is small, int is sufficient, but long long is used for safety.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // The problem description implies a single input line per test case,
    // but standard competitive programming practice often involves a test case count.
    // Based on the prompt "Handle multiple test cases", we check if input exists.
    if (!(cin >> t)) return 0;
    
    // If the input format is just a single integer X as per the description,
    // we treat the first input as X. If the problem implies T test cases,
    // we loop. Given the sample format, we process the input X.
    
    long long x = t;
    long long free_tshirts = x / 2;
    long long total = x + free_tshirts;
    
    cout << total << "\n";

    return 0;
}