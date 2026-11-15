#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A nibble is defined as 4 bits.
 * A program is "Good" if it takes exactly X nibbles, where X is a positive integer.
 * This means the total number of bits N must be divisible by 4 (N % 4 == 0).
 * Additionally, since X must be a positive integer, N must be at least 4.
 * Given constraints: 1 <= N <= 1000.
 * If N is divisible by 4, then N/4 will be >= 1 (since N >= 1, the smallest multiple of 4 is 4).
 * Therefore, the condition simplifies to N % 4 == 0.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Check if N is a multiple of 4
        if (n % 4 == 0) {
            cout << "Good" << "\n";
        } else {
            cout << "Not Good" << "\n";
        }
    }
    
    return 0;
}