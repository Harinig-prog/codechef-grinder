#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N cupcakes. He chooses a package size A (1 <= A <= N).
 * The number of leftover cupcakes is N % A.
 * We want to maximize N % A.
 * 
 * If we choose A = N, N % N = 0.
 * If we choose A = N/2 + 1, then:
 * N = 2 * (N/2) + (0 or 1).
 * If N is even, N = 2k, N % (k+1) = 2k % (k+1) = k-1.
 * If N is odd, N = 2k+1, N % (k+1) = (2k+1) % (k+1) = k.
 * 
 * Mathematically, for any N > 2, the remainder N % A is maximized when A > N/2.
 * Specifically, if we choose A = N/2 + 1, the remainder is N - (N/2 + 1) = N/2 - 1 (for even)
 * or N - (N/2 + 1) = N/2 (for odd).
 * Actually, the simplest way to get the maximum remainder is to pick A such that 
 * the remainder is as large as possible. For any N, choosing A = N/2 + 1 
 * results in a remainder of floor(N/2) - 1 or floor(N/2).
 * 
 * Testing small values:
 * N=2: A=2, rem=0. Output 2.
 * N=3: A=2, rem=1. Output 2. (Wait, sample says 3 for N=5? Let's recheck)
 * N=5: 
 * A=1: 5%1=0
 * A=2: 5%2=1
 * A=3: 5%3=2
 * A=4: 5%4=1
 * A=5: 5%5=0
 * Max remainder is 2, achieved at A=3.
 * 
 * The pattern is: for N > 2, the answer is N/2 + 1.
 * For N=2, the answer is 2.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 2) {
            cout << 2 << "\n";
        } else {
            // For N > 2, N/2 + 1 is the optimal package size
            cout << (n / 2) + 1 << "\n";
        }
    }
    return 0;
}