#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Given A < B < C, the maximum value is C and the minimum value is A.
 * The problem asks for max(A, B, C) - min(A, B, C).
 * Since A < B < C, max(A, B, C) = C and min(A, B, C) = A.
 * Therefore, the result is simply C - A.
 * 
 * Constraints: 1 <= A < B < C <= 10.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        // Since A < B < C is guaranteed:
        // max(A, B, C) is C
        // min(A, B, C) is A
        // Result is C - A
        cout << (c - a) << "\n";
    }

    return 0;
}