#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The game starts with X and lasts for Y moves.
 * In each move, the player can change X to X+1 or X-1.
 * Changing X by 1 changes the parity of X.
 * After Y moves, the final parity depends on the initial parity of X and the number of moves Y.
 * Specifically, if we perform Y moves, the final number will have the same parity as (X + Y) 
 * if we consider the parity change.
 * 
 * Let's look at the parity:
 * If X is even:
 *   After 1 move, X becomes odd.
 *   After 2 moves, X becomes even.
 *   After Y moves, X is even if Y is even, and odd if Y is odd.
 * If X is odd:
 *   After 1 move, X becomes even.
 *   After 2 moves, X becomes odd.
 *   After Y moves, X is odd if Y is even, and even if Y is odd.
 * 
 * In both cases, the final number is even if (X + Y) is even.
 * Since both players play optimally, and the parity of the final result is determined 
 * solely by the parity of (X + Y), the winner is fixed regardless of the choices made.
 * If (X + Y) is even, Janmansh wins.
 * If (X + Y) is odd, Jay wins.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        // The final number is even if (X + Y) is even.
        // Janmansh wins if the final number is even.
        if ((x + y) % 2 == 0) {
            cout << "Janmansh" << "\n";
        } else {
            cout << "Jay" << "\n";
        }
    }

    return 0;
}