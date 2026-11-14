#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs 1 patty and 1 bun to make 1 burger.
 * If Chef has A patties and B buns, the number of burgers he can make is limited 
 * by the smaller of the two quantities.
 * Therefore, the answer is min(A, B).
 * 
 * Constraints:
 * A, B <= 10^5. The result fits in a standard integer.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        // The maximum number of burgers is the minimum of patties and buns
        cout << min(a, b) << "\n";
    }

    return 0;
}