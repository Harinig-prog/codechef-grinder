#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Buy Please
 * The total cost is calculated as (a * x) + (b * y).
 * Given constraints: 1 <= a, b, x, y <= 10^3.
 * The maximum possible value is (1000 * 1000) + (1000 * 1000) = 2,000,000.
 * This fits comfortably within a standard 32-bit signed integer, 
 * but using long long is a safe practice in competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, x, y;
    
    // The problem description implies a single line of input containing 4 integers.
    // There is no mention of multiple test cases (t), so we read once.
    if (cin >> a >> b >> x >> y) {
        long long total_cost = (a * x) + (b * y);
        cout << total_cost << "\n";
    }

    return 0;
}