#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A company has a monopolistic advantage if its revenue is strictly greater than 
 * the sum of the other two companies' revenues.
 * 
 * Let the revenues be R1, R2, R3.
 * Condition 1: R1 > (R2 + R3)
 * Condition 2: R2 > (R1 + R3)
 * Condition 3: R3 > (R1 + R2)
 * 
 * If any of these conditions are true, output "YES", otherwise "NO".
 * Constraints are small (1 <= R <= 10), so standard integer types are sufficient.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long r1, r2, r3;
        cin >> r1 >> r2 >> r3;
        
        // Check if any company has a monopolistic advantage
        if (r1 > (r2 + r3) || r2 > (r1 + r3) || r3 > (r1 + r2)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}