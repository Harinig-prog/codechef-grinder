#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each player starts with 'a' minutes = 180 seconds.
 * Total initial time for both players = 180 + 180 = 360 seconds.
 * 
 * In a "a + b" blitz match, 'b' seconds are added after each move.
 * Total moves made = N.
 * Total time added to both clocks = N * b = N * 2 seconds.
 * 
 * Total time available in the system = (Initial Time) + (Added Time)
 * Total time available = 360 + 2 * N.
 * 
 * At the end of the game, the clocks show A and B seconds remaining.
 * The duration of the game is the total time consumed by both players.
 * Duration = (Total time available) - (Total time remaining)
 * Duration = (360 + 2 * N) - (A + B).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        
        // Total time available = 2 * 180 + 2 * N
        long long total_available = 360 + 2 * n;
        
        // Total time remaining = A + B
        long long total_remaining = a + b;
        
        // Duration = Total available - Total remaining
        long long duration = total_available - total_remaining;
        
        cout << duration << "\n";
    }
    
    return 0;
}