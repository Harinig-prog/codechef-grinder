#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total Income = N * 50
 * Expenses:
 * - Sugarcane: 20% of (N * 50) = 0.20 * 50 * N = 10 * N
 * - Salt/Mint: 20% of (N * 50) = 0.20 * 50 * N = 10 * N
 * - Rent: 30% of (N * 50) = 0.30 * 50 * N = 15 * N
 * 
 * Total Expenses = 10N + 10N + 15N = 35N
 * Profit = Total Income - Total Expenses
 * Profit = 50N - 35N = 15N
 * 
 * Constraints:
 * N <= 10^6, T <= 1000
 * Max Profit = 15 * 10^6 = 1.5 * 10^7, which fits in a standard 32-bit integer.
 * Using long long is safe practice for competitive programming.
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
        
        // Profit calculation based on derived formula: 15 * N
        long long profit = 15 * n;
        
        cout << profit << "\n";
    }

    return 0;
}