#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Policeman is at X with speed 2.
 * Thief is at Y with speed 1.
 * Let the time taken be 't'.
 * The policeman's position at time 't' will be X + 2t (if moving right) or X - 2t (if moving left).
 * The thief's position at time 't' will be Y + t (if moving right) or Y - t (if moving left).
 * 
 * To catch the thief, the policeman must cover the distance |X - Y|.
 * Since the policeman moves at 2 units/sec and the thief at 1 unit/sec, the relative speed 
 * at which the policeman closes the gap is (2 - 1) = 1 unit/sec.
 * 
 * Therefore, the time taken to close the distance |X - Y| is:
 * t = |X - Y| / (2 - 1) = |X - Y|.
 * 
 * This holds true regardless of whether the policeman is behind or ahead of the thief,
 * as the relative speed remains 1 unit/sec.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        // The time taken is the absolute difference between their positions
        // because the relative speed is 1 unit per second.
        long long time_taken = abs(x - y);
        
        cout << time_taken << "\n";
    }
    
    return 0;
}