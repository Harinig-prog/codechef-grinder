#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given the marked prices A and B, and discounts C and D.
 * The final price of the first TV is (A - C).
 * The final price of the second TV is (B - D).
 * We need to compare these two values and output:
 * - "First" if (A - C) < (B - D)
 * - "Second" if (A - C) > (B - D)
 * - "Any" if (A - C) == (B - D)
 * 
 * Constraints:
 * T <= 5000
 * A, B <= 100
 * C <= A, D <= B
 * Since the values are small, standard 'int' is sufficient, but 'long long' 
 * is used for good practice in competitive programming.
 */

void solve() {
    long long A, B, C, D;
    if (!(cin >> A >> B >> C >> D)) return;

    long long price1 = A - C;
    long long price2 = B - D;

    if (price1 < price2) {
        cout << "First" << "\n";
    } else if (price2 < price1) {
        cout << "Second" << "\n";
    } else {
        cout << "Any" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}