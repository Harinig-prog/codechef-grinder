#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three distinct integers X, Y, and Z representing the count of problems
 * set, tested, and written editorials for. We need to identify which category has
 * the maximum value.
 * 
 * Since X, Y, and Z are distinct, there will always be a unique maximum.
 * Time Complexity: O(1) per test case, O(T) total.
 * Space Complexity: O(1).
 */

void solve() {
    int X, Y, Z;
    if (!(cin >> X >> Y >> Z)) return;

    if (X > Y && X > Z) {
        cout << "Setter" << "\n";
    } else if (Y > X && Y > Z) {
        cout << "Tester" << "\n";
    } else {
        cout << "Editorialist" << "\n";
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