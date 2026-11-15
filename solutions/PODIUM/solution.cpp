#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is in 3rd place.
 * Time gap between Chef (3rd) and Runner-up (2nd) = A
 * Time gap between Runner-up (2nd) and Winner (1st) = B
 * The total time gap between Chef and the Winner is the sum of the two gaps: A + B.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= A, B <= 10
 * The sum A + B will be at most 20, which fits comfortably in a standard integer.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b;
        if (cin >> a >> b) {
            // Calculate the total time gap
            long long total_gap = a + b;
            cout << total_gap << "\n";
        }
    }

    return 0;
}