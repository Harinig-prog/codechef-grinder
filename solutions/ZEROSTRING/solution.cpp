#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let 'ones' be the count of '1's in the string and 'zeros' be the count of '0's.
 * We want to reach a state where the string consists only of '0's.
 * 
 * Strategy:
 * 1. We can delete all '1's individually. This takes 'ones' operations.
 * 2. Alternatively, we can perform a flip operation.
 *    - If we flip, the string becomes a mix of '0's and '1's.
 *    - After flipping, the new number of '1's will be 'zeros'.
 *    - To make the string all '0's after a flip, we must delete the remaining '1's.
 *    - Total operations if we flip: 1 (for flip) + 'zeros' (to delete remaining '1's).
 * 
 * Combining these:
 * We can either:
 * - Delete all '1's: cost = ones
 * - Flip and then delete the new '1's: cost = 1 + zeros
 * 
 * However, we can also perform a flip after deleting some characters.
 * If we delete 'k' characters, the string length becomes N-k.
 * If we choose to flip, the cost is 1 + (number of '1's remaining after deletion).
 * 
 * Actually, the optimal strategy is simpler:
 * Let 'ones' be the count of 1s and 'zeros' be the count of 0s.
 * Option A: Delete all '1's. Cost = ones.
 * Option B: Flip the string, then delete the remaining '1's.
 *           After flipping, the number of '1's becomes 'zeros'.
 *           Cost = 1 (flip) + min(ones, zeros + 1).
 *           Wait, if we flip, we have 'zeros' number of '1's. We can either delete them all
 *           or flip again (which is redundant).
 *           So the cost is min(ones, 1 + zeros).
 * 
 * Wait, what if we delete some characters first?
 * If we delete 'x' ones, we have (ones - x) ones left.
 * If we then flip, we have (zeros) ones left.
 * The total cost is x + 1 + zeros.
 * Since we want to minimize this, we should pick x = 0 if we are going to flip.
 * Thus, the cost is min(ones, 1 + zeros).
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ones = 0;
    int zeros = 0;
    for (char c : s) {
        if (c == '1') ones++;
        else zeros++;
    }

    // Option 1: Delete all ones.
    int ans = ones;

    // Option 2: Flip once, then delete the resulting ones (which were originally zeros).
    // The cost is 1 (for the flip) + number of zeros.
    ans = min(ans, 1 + zeros);

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}