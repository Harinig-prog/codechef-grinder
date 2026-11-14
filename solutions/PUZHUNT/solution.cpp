#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: PUZHUNT
 * The team size must be between 6 and 8 inclusive.
 * Given N, we check if 6 <= N <= 8.
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    // Check if the team size is within the allowed range [6, 8]
    if (N >= 6 && N <= 8) {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }

    return 0;
}