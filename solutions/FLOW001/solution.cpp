#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Add Two Numbers (FLOW001)
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1), as we only use a constant amount of extra space.
 */

int main() {
    // Fast I/O setup for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a, b;
        if (cin >> a >> b) {
            // Calculate sum and output result
            // Using long long to prevent potential overflow, 
            // though constraints 10000 + 10000 fit in int.
            cout << (a + b) << "\n";
        }
    }

    return 0;
}