#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have an array A of size N. We can repeatedly add the last element to the second-to-last
 * element and remove the last element. This means we can reduce the array size until only
 * one element remains, or stop at any point where N >= 1.
 * 
 * Let the current array be A_1, A_2, ..., A_k.
 * If we perform the operation, the array becomes A_1, A_2, ..., A_{k-2}, (A_{k-1} + A_k).
 * 
 * Notice that the prefix A_1, A_2, ..., A_{k-2} remains unchanged.
 * To make all elements even, we must be able to make every element from A_1 to A_{k-1} even.
 * 
 * Specifically:
 * 1. A_1 must be even. If A_1 is odd, we can never change it because the operation 
 *    only affects the last two elements.
 * 2. If A_1 is even, we look at A_2. If A_2 is odd, we must add A_3 to it to make it even.
 *    If A_2 + A_3 is still odd, we must add A_4, and so on.
 * 
 * Actually, the only way to make the array consist of only even numbers is:
 * - A_1 must be even.
 * - A_2 must be even OR (A_2 + A_3 + ... + A_N) must be even.
 * 
 * Wait, let's re-evaluate:
 * We can reduce the array to any size m (1 <= m <= N).
 * If we reduce to size m, the elements will be:
 * A_1, A_2, ..., A_{m-1}, (A_m + A_{m+1} + ... + A_N).
 * For this to work, all elements A_1, ..., A_{m-1} must be even, AND the sum (A_m + ... + A_N) must be even.
 * 
 * This is possible if there exists some index i (1 <= i <= N) such that:
 * 1. All A_j for j < i are even.
 * 2. The sum of elements from A_i to A_N is even.
 */

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Check if there exists a split point i (0-indexed) such that
    // all elements before i are even, and the sum of elements from i to N-1 is even.
    bool possible = false;
    
    // Calculate suffix sums
    vector<long long> suffix_sum(N + 1, 0);
    for (int i = N - 1; i >= 0; --i) {
        suffix_sum[i] = suffix_sum[i + 1] + A[i];
    }

    for (int i = 0; i < N; ++i) {
        // Check if all elements before i are even
        bool prefix_even = true;
        for (int j = 0; j < i; ++j) {
            if (A[j] % 2 != 0) {
                prefix_even = false;
                break;
            }
        }
        
        if (prefix_even && (suffix_sum[i] % 2 == 0)) {
            possible = true;
            break;
        }
    }

    if (possible) cout << "Yes" << "\n";
    else cout << "No" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}