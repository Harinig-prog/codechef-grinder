#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have coins of denominations 5 and 10.
 * To pay exactly X rupees:
 * 1. If X is not divisible by 5, it is impossible to pay, so output -1.
 * 2. If X is divisible by 5, we want to minimize the number of coins.
 *    Since 10 > 5, we should use as many 10-rupee coins as possible.
 *    - Number of 10-rupee coins = X / 10
 *    - Remaining amount = X % 10
 *    - If remainder is 0, we are done.
 *    - If remainder is 5, we need exactly one 5-rupee coin.
 * 
 * Logic:
 * If X % 5 != 0: return -1
 * Else:
 *   coins = (X / 10) + ((X % 10) / 5)
 *   This simplifies to:
 *   If X % 10 == 0: X / 10
 *   Else: (X / 10) + 1
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x;
        cin >> x;

        // If X is not divisible by 5, it's impossible to form the sum
        if (x % 5 != 0) {
            cout << -1 << "\n";
        } else {
            // Use as many 10s as possible
            int coins = x / 10;
            // If there's a remainder (which must be 5 if divisible by 5), add one 5-rupee coin
            if (x % 10 != 0) {
                coins += 1;
            }
            cout << coins << "\n";
        }
    }

    return 0;
}