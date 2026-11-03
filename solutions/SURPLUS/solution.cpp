#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let Net_A = A1 - A2
 * Let Net_B = B1 - B2
 * Since the countries A, B, and C trade only between themselves, the sum of their 
 * net exports must be zero.
 * Net_A + Net_B + Net_C = 0
 * Therefore, Net_C = -(Net_A + Net_B)
 * Country C is in trade surplus if Net_C > 0.
 * Substituting: -(Net_A + Net_B) > 0
 * Which is equivalent to: Net_A + Net_B < 0
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        long long net_a = a1 - a2;
        long long net_b = b1 - b2;
        
        // Net_C = -(net_a + net_b)
        // We need Net_C > 0, which means -(net_a + net_b) > 0
        // Or simply: net_a + net_b < 0
        if ((net_a + net_b) < 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}