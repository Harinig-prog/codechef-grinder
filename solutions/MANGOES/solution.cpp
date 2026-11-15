#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let N be the number of mangoes.
 * The weight of N mangoes is N * X.
 * The weight of the truck is Y.
 * The total weight is (N * X) + Y.
 * The bridge can withstand Z kilograms, so:
 * (N * X) + Y <= Z
 * N * X <= Z - Y
 * N <= (Z - Y) / X
 * Since we want the maximum number of mangoes, N = floor((Z - Y) / X).
 * Given the constraints 1 <= X, Y, Z <= 100, integer division in C++ 
 * naturally performs the floor operation for positive integers.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Calculate remaining capacity for mangoes
        long long remaining_capacity = z - y;
        
        // Calculate maximum number of mangoes
        // If remaining_capacity is negative (though constraints say Y <= Z), 
        // the result should be 0.
        if (remaining_capacity < 0) {
            cout << 0 << "\n";
        } else {
            cout << (remaining_capacity / x) << "\n";
        }
    }
    return 0;
}