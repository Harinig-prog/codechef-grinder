#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Sum OR Difference
 * Logic: If N1 > N2, output N1 - N2. Otherwise, output N1 + N2.
 * Constraints: -1000 <= N1, N2 <= 1000.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n1, n2;
    // The problem description implies a single test case based on the sample,
    // but standard competitive programming practice handles input until EOF or 
    // specific test case counts. Given the format, we read the two integers.
    if (cin >> n1 >> n2) {
        if (n1 > n2) {
            cout << (n1 - n2) << "\n";
        } else {
            cout << (n1 + n2) << "\n";
        }
    }

    return 0;
}