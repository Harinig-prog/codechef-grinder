#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let C be the number of correct answers and W be the number of wrong answers.
 * Total marks X = 3 * C - 1 * W.
 * We want to minimize W such that there exists some C where 3C - W = X.
 * Also, C + W <= 100 (total questions).
 * 
 * From 3C - W = X, we have W = 3C - X.
 * Since W must be non-negative, 3C >= X.
 * To minimize W, we need to find the smallest C such that 3C >= X.
 * This C is ceil(X / 3.0).
 * Let this minimum C be C_min = ceil(X / 3.0).
 * Then W = 3 * C_min - X.
 * 
 * Example: X = 32
 * C_min = ceil(32/3) = 11.
 * W = 3 * 11 - 32 = 33 - 32 = 1.
 * 
 * Example: X = 100
 * C_min = ceil(100/3) = 34.
 * W = 3 * 34 - 100 = 102 - 100 = 2.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        // Calculate the remainder when divided by 3
        int remainder = x % 3;

        if (remainder == 0) {
            // If X is divisible by 3, we can get exactly X marks with 0 incorrect answers.
            cout << 0 << "\n";
        } else {
            // If there is a remainder, we need to add incorrect answers to reach a multiple of 3.
            // For remainder 1, we need 2 incorrect answers (3*C - 2 = X => 3*C = X+2).
            // For remainder 2, we need 1 incorrect answer (3*C - 1 = X => 3*C = X+1).
            cout << (3 - remainder) << "\n";
        }
    }

    return 0;
}