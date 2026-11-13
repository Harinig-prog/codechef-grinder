#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Oneful Pairs
 * A pair (a, b) is a Oneful Pair if a + b + (a * b) == 111.
 * Constraints: 1 <= a, b <= 1000.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    // The problem description implies a single test case based on the input format,
    // but we structure it to handle the input provided.
    if (cin >> a >> b) {
        // Calculate the expression a + b + (a * b)
        // Using long long to prevent any potential overflow, 
        // though with a, b <= 1000, int would suffice (max ~1,002,000).
        long long result = a + b + (a * b);

        if (result == 111) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}