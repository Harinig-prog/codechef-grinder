#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are on a circular track of length M.
 * The distance between two points A and B on a circle can be traversed in two directions:
 * 1. Clockwise/Counter-clockwise directly: |A - B|
 * 2. The other way around the circle: M - |A - B|
 * 
 * The minimum distance is simply the minimum of these two values.
 * Since M can be up to 10^9, we use long long to prevent any potential overflow,
 * although the result will fit in a standard integer.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, m;
        cin >> a >> b >> m;

        // Calculate the absolute difference between A and B
        long long diff = abs(a - b);

        // The two possible path lengths are 'diff' and 'm - diff'
        long long ans = min(diff, m - diff);

        cout << ans << "\n";
    }

    return 0;
}