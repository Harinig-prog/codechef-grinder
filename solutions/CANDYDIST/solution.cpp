#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N candies and M friends.
 * Conditions:
 * 1. Each friend gets an equal number of candies: N must be divisible by M (N % M == 0).
 * 2. Each friend gets an even number of candies: (N / M) must be even.
 * 
 * Combining these:
 * If N % M != 0, it's impossible (No).
 * If N % M == 0, let X = N / M. We need X % 2 == 0.
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= N, M <= 1000
 * Since N and M are small, standard integer types are sufficient.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        // Check if candies can be distributed equally
        if (n % m == 0) {
            int candies_per_friend = n / m;
            // Check if the equal share is an even number
            if (candies_per_friend % 2 == 0) {
                cout << "Yes" << "\n";
            } else {
                cout << "No" << "\n";
            }
        } else {
            // Cannot distribute equally
            cout << "No" << "\n";
        }
    }
    
    return 0;
}