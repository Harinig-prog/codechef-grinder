#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A number is "pretty" if its last digit is 2, 3, or 9.
 * We need to count how many such numbers exist in the range [L, R].
 * 
 * Approach:
 * Let f(N) be the number of pretty numbers in the range [1, N].
 * The answer for [L, R] is f(R) - f(L - 1).
 * 
 * In every block of 10 numbers (e.g., 1-10, 11-20), the last digits repeat 
 * the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 0.
 * In each block of 10, there are exactly 3 pretty numbers (ending in 2, 3, 9).
 * 
 * For a given N:
 * 1. Full blocks of 10: (N / 10) * 3
 * 2. Remaining part: (N % 10). We check each digit from 1 to (N % 10) 
 *    to see if it is 2, 3, or 9.
 */

long long countPretty(int n) {
    if (n < 0) return 0;
    long long count = (n / 10) * 3;
    int remainder = n % 10;
    for (int i = 1; i <= remainder; ++i) {
        if (i == 2 || i == 3 || i == 9) {
            count++;
        }
    }
    return count;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << countPretty(r) - countPretty(l - 1) << "\n";
    }
    return 0;
}