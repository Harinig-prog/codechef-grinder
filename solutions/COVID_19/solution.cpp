#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * 1. Row constraint: If two people are in the same row, there must be at least one empty seat between them.
 *    In a row of M seats, the maximum number of people we can seat is ceil(M / 2.0).
 *    This can be calculated as (M + 1) / 2.
 * 
 * 2. Column constraint: If two people are in different rows, there must be at least one empty row between them.
 *    In N rows, if we pick rows i and j, there must be a row k such that i < k < j.
 *    This means we can pick rows 1, 3, 5, ... up to N.
 *    The number of such rows is ceil(N / 2.0), which is (N + 1) / 2.
 * 
 * Total tickets = (Number of rows allowed) * (Number of seats allowed per row)
 * Total = ((N + 1) / 2) * ((M + 1) / 2)
 * 
 * Constraints: N, M <= 100. The result will fit in a standard integer.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        // Calculate rows allowed: (N+1)/2
        // Calculate seats allowed: (M+1)/2
        long long rows_allowed = (n + 1) / 2;
        long long seats_allowed = (m + 1) / 2;

        long long max_tickets = rows_allowed * seats_allowed;

        cout << max_tickets << "\n";
    }

    return 0;
}