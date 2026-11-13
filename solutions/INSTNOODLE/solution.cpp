#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has X stoves.
 * Each stove can cook 1 packet per minute.
 * In Y minutes, each stove can cook Y packets.
 * Total packets = X * Y.
 * Since each customer orders 1 packet, the total number of customers is X * Y.
 * 
 * Constraints:
 * 1 <= X, Y <= 1000
 * The maximum value of X * Y is 1,000,000, which fits comfortably in a standard 32-bit integer.
 * However, using long long is a safe practice in competitive programming to prevent overflow.
 */

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y;
    
    // Read the input values X and Y
    if (cin >> X >> Y) {
        // Calculate the total number of customers
        long long result = X * Y;
        
        // Output the result
        cout << result << "\n";
    }

    return 0;
}