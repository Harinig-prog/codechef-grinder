#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks for the number of unattempted problems given the total number of problems (X)
 * and the number of attempted problems (Y).
 * The number of unattempted problems is simply X - Y.
 * 
 * Constraints:
 * 1 <= Y <= X <= 1000
 * Since the values are small (up to 1000), standard integer types are sufficient.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the input format.
    // However, following the instruction to handle multiple test cases if necessary:
    // Given the specific problem format, we read X and Y directly.
    
    long long X, Y;
    if (cin >> X >> Y) {
        // Calculate unattempted problems
        long long unattempted = X - Y;
        
        // Output the result
        cout << unattempted << "\n";
    }

    return 0;
}