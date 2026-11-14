#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N notes of Rs. 2000.
 * Total amount = N * 2000.
 * We need to find how many Rs. 500 notes are equivalent to this total amount.
 * Number of Rs. 500 notes = (N * 2000) / 500
 * Number of Rs. 500 notes = N * 4
 * 
 * Constraints: 1 <= N <= 100.
 * The result will be at most 400, which fits easily into a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    // The problem description implies a single integer N per test case, 
    // but standard competitive programming practice often involves 
    // reading until EOF or a specified number of test cases.
    // Given the constraints and format, we read N directly.
    if (cin >> n) {
        long long result = (long long)n * 4;
        cout << result << "\n";
    }

    return 0;
}