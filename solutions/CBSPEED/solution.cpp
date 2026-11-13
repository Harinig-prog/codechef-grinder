#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks us to determine if the current brain speed Y is strictly greater 
 * than the threshold limit X.
 * If Y > X, Chef is prone to errors (YES).
 * Otherwise, Chef is not prone to errors (NO).
 * 
 * Constraints: 1 <= X, Y <= 100.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;
    // The problem description implies a single test case per run based on the input format,
    // but standard competitive programming practice handles input as provided.
    if (cin >> X >> Y) {
        if (Y > X) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}