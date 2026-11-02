#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: GOODWEAT
 * Logic:
 * The problem asks us to count the number of sunny days (1s) and rainy days (0s)
 * in a week of 7 days.
 * If sunny_days > rainy_days, output "YES", else "NO".
 * Since there are 7 days total:
 * sunny_days + rainy_days = 7
 * The condition sunny_days > rainy_days is equivalent to sunny_days > 3.5,
 * or simply sunny_days >= 4.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int sunny_days = 0;
        for (int i = 0; i < 7; ++i) {
            int day;
            cin >> day;
            if (day == 1) {
                sunny_days++;
            }
        }
        
        // Total days = 7. 
        // Rainy days = 7 - sunny_days.
        // Condition: sunny_days > rainy_days
        // sunny_days > 7 - sunny_days
        // 2 * sunny_days > 7
        // sunny_days > 3.5 => sunny_days >= 4
        if (sunny_days > 3) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}