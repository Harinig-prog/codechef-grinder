#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The employee works X hours for 4 days (Monday to Thursday).
 * The employee works Y hours for 1 day (Friday).
 * Total hours = (4 * X) + Y.
 * 
 * Constraints:
 * T <= 100
 * 2 <= X <= 12
 * 1 <= Y < X
 * The maximum possible value is (4 * 12) + 11 = 59, which fits easily into a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y;
        if (cin >> x >> y) {
            // Calculate total hours: 4 days of X hours + 1 day of Y hours
            long long total_hours = (4 * x) + y;
            cout << total_hours << "\n";
        }
    }

    return 0;
}