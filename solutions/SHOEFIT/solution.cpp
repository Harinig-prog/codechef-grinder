#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three shoes, each represented by 0 (left) or 1 (right).
 * We can go out if we have at least one left shoe (0) and at least one right shoe (1).
 * 
 * Logic:
 * - If all three are 0, we have no right shoe -> Output 0.
 * - If all three are 1, we have no left shoe -> Output 0.
 * - Otherwise, we have at least one 0 and at least one 1 -> Output 1.
 * 
 * This simplifies to: Output 1 if the sum of (A, B, C) is not 0 and not 3.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int sum = a + b + c;
        
        // If sum is 0, all are left shoes.
        // If sum is 3, all are right shoes.
        // In any other case (1 or 2), we have a mix of left and right.
        if (sum > 0 && sum < 3) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}