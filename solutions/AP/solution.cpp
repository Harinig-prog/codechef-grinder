#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three integers X, Y, Z.
 * An arithmetic progression (AP) satisfies the condition: Y - X = Z - Y,
 * which simplifies to 2 * Y = X + Z.
 * 
 * We want to find the minimum number of operations to satisfy this.
 * Possible answers:
 * 0: If 2 * Y == X + Z, it is already an AP.
 * 1: If we can change one number to satisfy the condition.
 *    - Change X: X = 2 * Y - Z
 *    - Change Y: Y = (X + Z) / 2 (only possible if X + Z is even)
 *    - Change Z: Z = 2 * Y - X
 *    Since we can change any number to *any* integer, we can always satisfy the 
 *    condition by changing one of the numbers. Thus, if it's not 0, it must be 1.
 * 2: Not possible, because we can always fix the sequence in at most 1 operation.
 */

void solve() {
    long long X, Y, Z;
    cin >> X >> Y >> Z;

    // Check if it is already an AP
    if (2 * Y == X + Z) {
        cout << 0 << "\n";
    } else {
        // We can always change one element to make it an AP.
        // For example, change Z to (2 * Y - X).
        // Since the problem asks for the minimum number of operations,
        // and we already checked for 0, the answer must be 1.
        cout << 1 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}