#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * 1 kg of pulp = 1000 pages.
 * 1 notebook = 100 pages.
 * Therefore, 1 kg of pulp = 1000 / 100 = 10 notebooks.
 * For N kg of pulp, the number of notebooks = N * 10.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= N <= 100
 * N * 10 will be at most 1000, which fits easily into a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n;
        cin >> n;
        
        // Calculation: 
        // Total pages = n * 1000
        // Total notebooks = (n * 1000) / 100 = n * 10
        long long notebooks = n * 10;
        
        cout << notebooks << "\n";
    }

    return 0;
}