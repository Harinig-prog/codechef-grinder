#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have an N x M chocolate bar. We need to divide it into 2 equal pieces
 * using a single cut along a grid line.
 * 
 * Total area = N * M.
 * If we cut it into 2 equal pieces, each piece must have an area of (N * M) / 2.
 * This is only possible if (N * M) is even.
 * 
 * If we cut along a horizontal line, we split N into two parts, say N1 and N2,
 * such that N1 + N2 = N. The pieces would be (N1 * M) and (N2 * M).
 * For these to be equal, N1 * M = N2 * M => N1 = N2.
 * This implies N must be even (N = 2 * N1).
 * 
 * If we cut along a vertical line, we split M into two parts, say M1 and M2,
 * such that M1 + M2 = M. The pieces would be (N * M1) and (N * M2).
 * For these to be equal, N * M1 = N * M2 => M1 = M2.
 * This implies M must be even (M = 2 * M1).
 * 
 * Therefore, it is possible to divide the chocolate into 2 equal pieces
 * if and only if N is even OR M is even.
 * Note: If N=1 and M=1, N*M=1 (odd), output No.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        // The condition for splitting into two equal pieces is that 
        // at least one dimension must be even.
        // If both are odd, their product is odd, and they cannot be divided by 2.
        if (n % 2 == 0 || m % 2 == 0) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}