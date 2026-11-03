#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Devendra starts with Z amount and has already spent Y.
 * Remaining budget = Z - Y.
 * He needs to spend A + B + C for the three water sports.
 * He can afford them if (Z - Y) >= (A + B + C).
 * 
 * Constraints:
 * Z <= 10^5, Y <= 10^5, A, B, C <= 5000.
 * The sum A + B + C will be at most 15000.
 * Z - Y will be at most 10^5.
 * Standard integer (int) is sufficient as the values fit within 32-bit signed integer range.
 * Using long long is safe practice to prevent any potential overflow in larger variants.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long Z, Y, A, B, C;
        cin >> Z >> Y >> A >> B >> C;
        
        // Calculate remaining money after initial expenses
        long long remaining_budget = Z - Y;
        
        // Calculate total cost of the three sports
        long long total_sports_cost = A + B + C;
        
        // Check if remaining budget is sufficient
        if (remaining_budget >= total_sports_cost) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}