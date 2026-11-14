#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef And Operators
 * Logic: Compare two integers A and B and print the corresponding relational operator.
 * Constraints: A, B up to 10^9 + 1, so 'long long' is used to ensure safety, 
 * though 'int' would technically suffice for 10^9.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a > b) {
            cout << ">" << "\n";
        } else if (a < b) {
            cout << "<" << "\n";
        } else {
            cout << "=" << "\n";
        }
    }

    return 0;
}