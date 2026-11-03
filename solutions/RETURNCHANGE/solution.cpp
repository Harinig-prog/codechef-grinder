#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The cost X is rounded to the nearest multiple of 10.
 * If the last digit is 5, 6, 7, 8, or 9, it rounds up to the next multiple of 10.
 * If the last digit is 0, 1, 2, 3, or 4, it rounds down to the current multiple of 10.
 * 
 * Mathematically, rounding to the nearest 10 can be achieved by:
 * rounded_X = ((X + 5) / 10) * 10
 * 
 * Example:
 * X = 35: (35 + 5) / 10 = 4, 4 * 10 = 40. Return 100 - 40 = 60.
 * X = 54: (54 + 5) / 10 = 5, 5 * 10 = 50. Return 100 - 50 = 50.
 * X = 80: (80 + 5) / 10 = 8, 8 * 10 = 80. Return 100 - 80 = 20.
 * X = 12: (12 + 5) / 10 = 1, 1 * 10 = 10. Return 100 - 10 = 90.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x;
        cin >> x;
        
        // Calculate the rounded cost
        // Adding 5 and performing integer division by 10 effectively rounds to the nearest 10
        // with .5 cases rounding up.
        int rounded_cost = ((x + 5) / 10) * 10;
        
        // Calculate the change returned
        int change = 100 - rounded_cost;
        
        cout << change << "\n";
    }

    return 0;
}