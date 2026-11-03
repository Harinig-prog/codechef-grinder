#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given X (legs per chicken), Y (legs per duck), and Z (total legs).
 * - A farm can have chickens if Z is divisible by X (Z % X == 0).
 * - A farm can have ducks if Z is divisible by Y (Z % Y == 0).
 * 
 * Logic:
 * 1. If (Z % X == 0) and (Z % Y == 0), then both are possible -> "ANY"
 * 2. If (Z % X == 0) and (Z % Y != 0), then only chickens -> "CHICKEN"
 * 3. If (Z % X != 0) and (Z % Y == 0), then only ducks -> "DUCK"
 * 4. If (Z % X != 0) and (Z % Y != 0), then neither -> "NONE"
 * 
 * Constraints:
 * T <= 1000, X, Y, Z <= 1000.
 * Standard integer types are sufficient as Z/X or Z/Y will not overflow.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        bool can_chicken = (z % x == 0);
        bool can_duck = (z % y == 0);

        if (can_chicken && can_duck) {
            cout << "ANY" << "\n";
        } else if (can_chicken) {
            cout << "CHICKEN" << "\n";
        } else if (can_duck) {
            cout << "DUCK" << "\n";
        } else {
            cout << "NONE" << "\n";
        }
    }

    return 0;
}