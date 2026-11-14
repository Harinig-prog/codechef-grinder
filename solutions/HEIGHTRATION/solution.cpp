#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem asks for the "Height" of a fraction a/b, defined as max(a, b).
 * Constraints are small (1 <= a, b <= 100), so standard integer types are sufficient.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format,
    // but we structure it to handle input robustly.
    long long a, b;
    if (cin >> a >> b) {
        // The height is defined as the maximum of the numerator and denominator.
        long long height = max(a, b);
        cout << height << "\n";
    }

    return 0;
}