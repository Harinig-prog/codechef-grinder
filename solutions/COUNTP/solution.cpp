#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to partition array A into two non-empty subsequences S1 and S2 such that
 * sum(S1) * sum(S2) is odd.
 * 
 * For the product of two integers to be odd, both integers must be odd.
 * So, sum(S1) must be odd AND sum(S2) must be odd.
 * 
 * Let the total sum of the array be S = sum(S1) + sum(S2).
 * If sum(S1) is odd and sum(S2) is odd, then S = odd + odd = even.
 * Therefore, a necessary condition is that the total sum of the array must be even.
 * 
 * If the total sum is even, can we always partition it?
 * We need at least one odd number in S1 and at least one odd number in S2 to make their sums odd.
 * If there are no odd numbers in the array, the sum of any subsequence is even, so the product is even.
 * If there is exactly one odd number, the total sum is odd (impossible).
 * If there are two or more odd numbers, we can put one odd number in S1 and the rest of the odd numbers in S2.
 * The remaining even numbers can be distributed arbitrarily.
 * Since the total sum is even, and we have at least two odd numbers, the parity of the sums will work out:
 * sum(S1) = odd + (some evens) = odd.
 * sum(S2) = (sum of remaining odds) + (remaining evens).
 * Since total sum is even and sum(S1) is odd, sum(S2) must be even - odd = odd.
 * 
 * Conclusion:
 * The condition is satisfied if and only if:
 * 1. The total sum of the array is even.
 * 2. There are at least two odd numbers in the array.
 */

void solve() {
    int N;
    cin >> N;
    long long total_sum = 0;
    int odd_count = 0;
    for (int i = 0; i < N; ++i) {
        long long a;
        cin >> a;
        total_sum += a;
        if (a % 2 != 0) {
            odd_count++;
        }
    }

    if (total_sum % 2 == 0 && odd_count >= 2) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}