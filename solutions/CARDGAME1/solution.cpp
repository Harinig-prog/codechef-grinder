#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have cards from 1 to N. Chef throws card X.
 * Chefina needs to pick a card Y (where Y != X) such that (X + Y) is even.
 * 
 * Parity rules:
 * - Even + Even = Even
 * - Odd + Odd = Even
 * 
 * Case 1: If X is even, Chefina must pick an even card Y (Y != X).
 * Case 2: If X is odd, Chefina must pick an odd card Y (Y != X).
 * 
 * Counting:
 * - Total even numbers in [1, N] = N / 2
 * - Total odd numbers in [1, N] = (N + 1) / 2
 * 
 * If X is even:
 *   Number of even cards available = (N / 2) - 1
 * If X is odd:
 *   Number of odd cards available = ((N + 1) / 2) - 1
 */

void solve() {
    long long N, X;
    cin >> N >> X;

    long long count = 0;
    if (X % 2 == 0) {
        // X is even, need to pick an even card from the remaining deck
        // Total even numbers in 1..N is N/2
        count = (N / 2) - 1;
    } else {
        // X is odd, need to pick an odd card from the remaining deck
        // Total odd numbers in 1..N is (N + 1) / 2
        count = ((N + 1) / 2) - 1;
    }

    cout << count << "\n";
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