#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to determine if N = 2X + 7Y for non-negative integers X, Y.
 * This is a variation of the Frobenius Coin Problem.
 * Since we can use any number of 2s, we can represent any even number.
 * If we use Y 7s, the remaining value is N - 7Y.
 * For this to be representable by 2s, (N - 7Y) must be non-negative and even.
 * 
 * We can iterate through possible values of Y.
 * Since 2X = N - 7Y, and X >= 0, we must have 7Y <= N.
 * Also, (N - 7Y) must be even.
 * If N is even, we can pick Y = 0, 2, 4... (as long as 7Y <= N).
 * If N is odd, we can pick Y = 1, 3, 5... (as long as 7Y <= N).
 * 
 * Actually, we only need to check if there exists a Y such that 0 <= 7Y <= N 
 * and (N - 7Y) % 2 == 0.
 * Since 7 is odd, if Y is odd, 7Y is odd. If Y is even, 7Y is even.
 * If N is even:
 *   - If we pick Y even, 7Y is even, N - 7Y is even. (Possible if N >= 7Y)
 *   - If we pick Y odd, 7Y is odd, N - 7Y is odd. (Impossible)
 * If N is odd:
 *   - If we pick Y odd, 7Y is odd, N - 7Y is even. (Possible if N >= 7Y)
 *   - If we pick Y even, 7Y is even, N - 7Y is odd. (Impossible)
 * 
 * So, we just need to check if there exists a Y such that 7Y <= N and 
 * (N - 7Y) is even. This is equivalent to checking if there is a Y 
 * such that 7Y <= N and Y has the same parity as N.
 * 
 * The smallest Y with the same parity as N is:
 * - If N is even, Y = 0. Check if 0 <= N. (Always true for N >= 0)
 * - If N is odd, Y = 1. Check if 7 <= N.
 * 
 * Wait, let's re-verify:
 * N=1: No (7*1 > 1)
 * N=3: No (7*1 > 3)
 * N=5: No (7*1 > 5)
 * N=7: Yes (Y=1, 7*1=7, 7<=7, 7-7=0 even)
 * N=9: Yes (Y=1, 7*1=7, 7<=9, 9-7=2 even)
 * N=11: Yes (Y=1, 7*1=7, 7<=11, 11-7=4 even)
 * 
 * The condition is simply: N >= 0 and (N is even OR N >= 7).
 * Let's check:
 * N=1: Odd, 1 < 7 -> NO
 * N=3: Odd, 3 < 7 -> NO
 * N=5: Odd, 5 < 7 -> NO
 * N=2: Even -> YES
 * N=4: Even -> YES
 * N=6: Even -> YES
 * N=7: Odd, 7 >= 7 -> YES
 */

void solve() {
    long long N;
    cin >> N;
    if (N < 0) {
        cout << "NO" << "\n";
        return;
    }
    if (N % 2 == 0) {
        cout << "YES" << "\n";
    } else {
        if (N >= 7) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
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