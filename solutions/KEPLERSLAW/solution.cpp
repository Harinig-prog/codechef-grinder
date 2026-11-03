#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Kepler's 3rd Law states T^2 proportional to R^3.
 * This means T^2 / R^3 = constant.
 * For two planets, the law is satisfied if:
 * (T1^2) / (R1^3) == (T2^2) / (R2^3)
 * 
 * To avoid floating point precision issues, we can cross-multiply:
 * (T1^2) * (R2^3) == (T2^2) * (R1^3)
 * 
 * Constraints:
 * T1, T2, R1, R2 are between 1 and 10.
 * Maximum value: 10^2 * 10^3 = 100,000.
 * This fits comfortably within a standard 32-bit integer, 
 * but we will use long long to be safe and follow best practices.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        
        // Calculate T^2 and R^3 for both planets
        long long lhs = (t1 * t1) * (r2 * r2 * r2);
        long long rhs = (t2 * t2) * (r1 * r1 * r1);
        
        if (lhs == rhs) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}