#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - X: Cost of gym
 * - Y: Cost of personal trainer
 * - Z: Total budget
 * 
 * Logic:
 * 1. If (X + Y) <= Z, Chef can afford both gym and trainer. Output: 2
 * 2. Else if X <= Z, Chef can only afford the gym. Output: 1
 * 3. Else, Chef cannot afford the gym. Output: 0
 * 
 * Constraints:
 * T <= 100, X, Y, Z <= 100.
 * Standard integer types are sufficient as the sum will not exceed 200.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Check if Chef can afford both gym and trainer
        if (x + y <= z) {
            cout << 2 << "\n";
        }
        // Check if Chef can afford only the gym
        else if (x <= z) {
            cout << 1 << "\n";
        }
        // Chef cannot afford the gym
        else {
            cout << 0 << "\n";
        }
    }
    
    return 0;
}