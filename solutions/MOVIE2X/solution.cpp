#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The movie has a total duration of X minutes.
 * The first Y minutes are watched at 2x speed, meaning they take Y/2 minutes to watch.
 * The remaining (X - Y) minutes are watched at 1x speed, meaning they take (X - Y) minutes to watch.
 * Total time = (Y / 2) + (X - Y).
 * 
 * Constraints:
 * 1 <= X, Y <= 1000
 * Y is even.
 * Since X and Y are small, standard integer types are sufficient, but we use long long 
 * to adhere to best practices for competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the input format,
    // but we structure it to handle input as specified.
    long long X, Y;
    if (cin >> X >> Y) {
        // Calculate time spent on the first Y minutes at 2x speed
        long long time_for_first_part = Y / 2;
        
        // Calculate time spent on the remaining part at 1x speed
        long long time_for_second_part = X - Y;
        
        // Total time
        long long total_time = time_for_first_part + time_for_second_part;
        
        cout << total_time << "\n";
    }

    return 0;
}