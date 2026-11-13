#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A week consists of 7 days.
 * Given X rainy days and Y cloudy days, the number of clear days is 7 - (X + Y).
 * Constraints: 0 <= X, Y <= 7 and X + Y <= 7.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;
    // The problem description implies a single test case based on the input format,
    // but standard practice is to handle input as specified.
    if (cin >> X >> Y) {
        int clear_days = 7 - (X + Y);
        cout << clear_days << "\n";
    }

    return 0;
}