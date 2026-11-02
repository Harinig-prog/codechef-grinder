#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given X ones and Y twos, where both X and Y are even.
 * We need to form the smallest possible palindrome using all these digits.
 * 
 * To make a number as small as possible:
 * 1. We want the smallest digits at the most significant positions (left side).
 * 2. Since 1 < 2, we should place as many 1s as possible at the beginning.
 * 3. Because it must be a palindrome, whatever we place at the beginning must 
 *    also be placed at the end.
 * 
 * Strategy:
 * - Place half of the 1s (X/2) at the start.
 * - Place all the 2s (Y) in the middle.
 * - Place the remaining half of the 1s (X/2) at the end.
 * 
 * Example: X=2, Y=2
 * Half of X is 1.
 * Start: 1
 * Middle: 22
 * End: 1
 * Result: 1221
 * 
 * Example: X=4, Y=0
 * Half of X is 2.
 * Start: 11
 * Middle: (empty)
 * End: 11
 * Result: 1111
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Print X/2 ones
        for (int i = 0; i < x / 2; ++i) {
            cout << '1';
        }

        // Print all Y twos
        for (int i = 0; i < y; ++i) {
            cout << '2';
        }

        // Print X/2 ones
        for (int i = 0; i < x / 2; ++i) {
            cout << '1';
        }

        cout << "\n";
    }

    return 0;
}