#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given X channels numbered 1 to X.
 * Even-numbered channels stop working.
 * We need to count the number of odd-numbered channels in the range [1, X].
 * 
 * Logic:
 * If X is even (e.g., 4), the channels are 1, 2, 3, 4. Odd: 1, 3 (Total: 2).
 * If X is odd (e.g., 5), the channels are 1, 2, 3, 4, 5. Odd: 1, 3, 5 (Total: 3).
 * The formula for the number of odd integers up to X is (X + 1) / 2 using integer division.
 * 
 * Constraints: 1 <= X <= 100.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (!(cin >> X)) return 0;

    // The number of odd integers in the range [1, X] is ceil(X / 2.0),
    // which is equivalent to (X + 1) / 2 in integer arithmetic.
    int working_channels = (X + 1) / 2;

    cout << working_channels << "\n";

    return 0;
}