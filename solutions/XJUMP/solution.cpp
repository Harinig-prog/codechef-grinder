#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef wants to reach stair X using moves of size Y or 1.
 * To minimize the number of moves, we should use the largest possible move (Y)
 * as many times as possible.
 * 
 * Let q = X / Y be the number of times we use the move of size Y.
 * Let r = X % Y be the remaining steps to reach X.
 * Since we can always take a move of size 1, we can cover the remaining r steps
 * in exactly r moves of size 1.
 * 
 * Total moves = (number of moves of size Y) + (number of moves of size 1)
 * Total moves = q + r
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Calculate the number of moves of size Y
        int moves_y = x / y;
        
        // Calculate the remaining distance to be covered by moves of size 1
        int moves_1 = x % y;
        
        // Total minimum moves
        int total_moves = moves_y + moves_1;
        
        cout << total_moves << "\n";
    }

    return 0;
}