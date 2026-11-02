#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are in a 10x10 grid.
 * A move from (a, b) to (c, d) is valid if a != c AND b != d.
 * 
 * Case 1: If s_x != e_x AND s_y != e_y:
 * We can reach the destination in exactly 1 move because the condition is satisfied.
 * 
 * Case 2: If s_x == e_x OR s_y == e_y:
 * We cannot reach the destination in 1 move because one of the coordinates is the same.
 * However, we can always reach it in 2 moves. 
 * For example, if s_x == e_x, we can move to (s_x + 1, s_y + 1) [if within bounds] 
 * and then to (e_x, e_y). Since the grid is 10x10, there is always an intermediate 
 * cell (r, c) such that r != s_x, r != e_x, c != s_y, and c != e_y.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;

        // If starting and ending cells are different, check the conditions
        if (sx != ex && sy != ey) {
            // Can reach in 1 move
            cout << 1 << "\n";
        } else {
            // Must take 2 moves
            cout << 2 << "\n";
        }
    }

    return 0;
}