#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef's current age = 20
 * Chefina's current age = 10
 * The age difference between Chef and Chefina is 20 - 10 = 10 years.
 * Since they age at the same rate, the difference remains constant.
 * When Chef is X years old, Chefina's age will be X - 10.
 * 
 * Constraints:
 * 25 <= X <= 50
 * The result will always be positive and fit within a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        // Chefina is always 10 years younger than Chef
        long long chefina_age = x - 10;
        
        cout << chefina_age << "\n";
    }

    return 0;
}