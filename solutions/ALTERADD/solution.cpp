#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The operations are:
 * i=1: +1
 * i=2: +2
 * i=3: +1
 * i=4: +2
 * ...
 * Every pair of operations (i=1, i=2) adds 1 + 2 = 3 to A.
 * Let D = B - A.
 * We want to reach D using a sequence of 1, 2, 1, 2, ...
 * 
 * If we perform k pairs of operations, we add 3*k.
 * After k pairs, the next operation (if any) must be +1.
 * 
 * Possible scenarios for D:
 * 1. D % 3 == 0: We can reach this by performing some number of (1, 2) pairs.
 *    Example: 3 = 1+2, 6 = (1+2)+(1+2), etc.
 * 2. D % 3 == 1: We can reach this by performing some number of (1, 2) pairs 
 *    and then one final +1 operation.
 *    Example: 1 = 1, 4 = (1+2)+1, 7 = (1+2)+(1+2)+1.
 * 3. D % 3 == 2: We can reach this by performing some number of (1, 2) pairs 
 *    and then one final +2 operation.
 *    Example: 2 = 2, 5 = (1+2)+2, 8 = (1+2)+(1+2)+2.
 * 
 * Wait, let's re-verify the sequence:
 * 1st op: +1
 * 2nd op: +2
 * 3rd op: +1
 * 4th op: +2
 * 
 * If we stop after an odd number of operations, the total sum is 3k + 1.
 * If we stop after an even number of operations, the total sum is 3k.
 * 
 * Can we reach a sum of 3k + 2?
 * Let's check:
 * 1 op: 1
 * 2 ops: 1+2 = 3
 * 3 ops: 1+2+1 = 4
 * 4 ops: 1+2+1+2 = 6
 * 5 ops: 1+2+1+2+1 = 7
 * 6 ops: 1+2+1+2+1+2 = 9
 * 
 * The reachable values are those where D % 3 != 2.
 * If D % 3 == 2, it is impossible.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long diff = b - a;
        
        if (diff % 3 == 2) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}