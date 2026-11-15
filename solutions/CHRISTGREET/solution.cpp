#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: CHRISTGREET
 * The problem asks us to check if a given day X in December is the 25th.
 * Constraints: 1 <= X <= 31.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (!(cin >> X)) return 0;

    // Check if the day is 25
    if (X == 25) {
        cout << "CHRISTMAS" << "\n";
    } else {
        cout << "ORDINARY" << "\n";
    }

    return 0;
}