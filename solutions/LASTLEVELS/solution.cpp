#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has X levels to complete.
 * Each level takes Y minutes.
 * A break of Z minutes is taken after every 3 levels, but not after the final level.
 * 
 * Total time = (Time spent playing) + (Time spent on breaks)
 * Time spent playing = X * Y
 * Number of breaks = (X - 1) / 3 (integer division)
 * Total time = (X * Y) + ((X - 1) / 3) * Z
 * 
 * Constraints:
 * X, Y, Z are small (up to 100), so standard integer types are sufficient.
 * Using long long for safety is good practice in competitive programming.
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

        // Calculate total time spent playing
        long long total_play_time = x * y;

        // Calculate number of breaks
        // A break occurs after every 3 levels, but not if the game is finished.
        // If X = 3, breaks = (3-1)/3 = 0. Correct.
        // If X = 4, breaks = (4-1)/3 = 1. Correct.
        // If X = 6, breaks = (6-1)/3 = 1. Correct (break after 3, but not after 6).
        long long num_breaks = (x - 1) / 3;
        
        long long total_break_time = num_breaks * z;

        cout << total_play_time + total_break_time << "\n";
    }

    return 0;
}