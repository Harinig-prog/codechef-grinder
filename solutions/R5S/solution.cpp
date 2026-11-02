#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef's current rating is X.
 * Rating change is Y.
 * New rating = X + Y.
 * Chef is 5-star if New rating >= 2000.
 * 
 * Constraints:
 * 0 <= X < 2000
 * -2000 <= Y < 2000
 * The result of X + Y will be in the range [-2000, 4000].
 * Standard 'int' is sufficient as it handles values up to 2*10^9.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;
    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice often involves reading until EOF 
    // or handling a specific number of test cases. Given the problem structure:
    if (cin >> X >> Y) {
        if (X + Y >= 2000) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}