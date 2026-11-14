#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has X courses.
 * Each course has Y units.
 * Each unit has Z chapters.
 * Total chapters = X * Y * Z.
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= X, Y, Z <= 1000
 * The maximum possible value is 1000 * 1000 * 1000 = 1,000,000,000.
 * This fits within a standard 32-bit signed integer (max ~2.1 billion),
 * but using long long is safer and good practice in competitive programming.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x, y, z;
        if (cin >> x >> y >> z) {
            // Calculate total chapters
            long long total_chapters = x * y * z;
            cout << total_chapters << "\n";
        }
    }

    return 0;
}