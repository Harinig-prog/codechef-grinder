#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Final Population
 * Logic: The final population is calculated by taking the initial population X,
 * subtracting the people who left (Y), and adding the people who immigrated (Z).
 * Formula: Final = X - Y + Z
 * Constraints: X, Y, Z are small (up to 10), so standard int is sufficient.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        if (cin >> x >> y >> z) {
            // Calculate final population
            long long final_population = x - y + z;
            cout << final_population << "\n";
        }
    }

    return 0;
}