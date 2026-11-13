#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Practice makes us perfect
 * Approach: Iterate through the 4 given integers and count how many are >= 10.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p[4];
    int count = 0;

    // Read the 4 integers
    for (int i = 0; i < 4; ++i) {
        if (!(cin >> p[i])) break;
        // Check if the target of at least 10 problems is met
        if (p[i] >= 10) {
            count++;
        }
    }

    // Output the result
    cout << count << "\n";

    return 0;
}