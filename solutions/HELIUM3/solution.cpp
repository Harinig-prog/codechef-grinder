#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chefland needs A units of power for B years.
 * Total power required = A * B.
 * The moon has X grams of Helium-3, and each gram provides Y units of power.
 * Total power available = X * Y.
 * 
 * The project gets funded if Total power available >= Total power required.
 * i.e., X * Y >= A * B.
 * 
 * Constraints:
 * A, B, X, Y <= 1000.
 * The product of any two will be at most 1,000,000.
 * This fits comfortably within a standard 32-bit signed integer, 
 * but using long long is a good practice to prevent overflow in similar problems.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        
        // Calculate total power required and total power available
        long long required = a * b;
        long long available = x * y;
        
        // Check condition and print result
        if (available >= required) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}