#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Bone Appetit
 * The total number of treats is calculated as (N * X) + (M * Y).
 * Constraints: N, M <= 100 and X, Y <= 1000.
 * The maximum possible value is (100 * 1000) + (100 * 1000) = 200,000.
 * This fits comfortably within a standard 32-bit integer, but using long long
 * is good practice for competitive programming to prevent overflow in similar problems.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case structure based on the input format,
    // but standard competitive programming practice handles input as specified.
    // Reading N, M and X, Y.
    long long N, M, X, Y;
    
    if (cin >> N >> M >> X >> Y) {
        // Calculate total treats
        long long total_treats = (N * X) + (M * Y);
        
        // Output the result
        cout << total_treats << "\n";
    }

    return 0;
}